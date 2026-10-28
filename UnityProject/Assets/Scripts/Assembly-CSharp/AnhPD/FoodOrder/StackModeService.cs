using CakeOrder.InGame;
using System.Collections.Generic;
using CakeOrder;

namespace AnhPD.FoodOrder
{
	public class StackModeService
	{
		private readonly AreaRefs _areaRefs;

		private readonly ManagerRefs _managerRefs;

		private readonly LevelInfo _info;

		private readonly RecipeConfigSO _recipeConfig;

		private const int DefaultFreezeTurns = 3;

		// The original reads InitData (+0x38) of the level singleton, reached through a generic static (a method reference in the metadata).
		private CakeLevelInitData InitData
		{
			get
			{
				LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;
				return level != null ? level.InitData : null;
			}
		}

		private FCustomerLineHandle LineHandle => _managerRefs.lineHandle;

		public StackModeService(AreaRefs areaRefs, ManagerRefs managerRefs, LevelInfo info, RecipeConfigSO recipeConfig)
		{
			_areaRefs = areaRefs;
			_managerRefs = managerRefs;
			_info = info;
			_recipeConfig = recipeConfig;
		}

		public void Setup()
		{
			// Rebuilt from the decompiled code (authored-queue path). The random-queue path (no authored queue: shuffled stack of the
			// customers' ingredients) needs ShuffleStack and is not rebuilt.
			if (_areaRefs.ingGrid != null)
			{
				_areaRefs.ingGrid.RefreshOccupiedCells();
			}
			CakeLevelInitData initData = InitData;
			IngredientQueueInLevel queueConfig = QueueConfigOf(initData);
			SingleIngredientQueueInLevel[] queues = ResolveQueues(initData);
			IngredientSpawnerController spawner = _managerRefs.spawnerController;
			if (queues == null || queues.Length < 1)
			{
				UnityEngine.Debug.LogWarning("[StackModeService] no authored ingredient queue; the random-queue path is not rebuilt, so the belt stays empty.");
				spawner.BuildColumns(spawner.RollQueueColumnCount());
				PieceLedger.BeltStart(spawner);
				return;
			}
			spawner.BuildColumns(queues.Length);
			StackGameplayConfig.StackConfig stackConfig = initData.stackConfig;
			if (stackConfig != null)
			{
				if (stackConfig.numSlots > 0)
				{
					spawner.SetRowCount(stackConfig.numSlots);
				}
				LineHandle.SetTimerScale(stackConfig.waitTimeScale);
			}
			ConveyorBundle[][] cells = new ConveyorBundle[queues.Length][];
			for (int i = 0; i < queues.Length; i++)
			{
				cells[i] = BuildCellsFromQueue(queues[i].encodedQueue, _recipeConfig);
			}
			if (queueConfig != null)
			{
				ApplySlotGroups(cells, queueConfig.combinedSlotGroups, queueConfig.linkedSlotGroups);
			}
			for (int i = 0; i < queues.Length; i++)
			{
				spawner.SetQueueAt(i, Compact(cells[i]));
			}
			PieceLedger.BeltStart(spawner);
		}

		private static IngredientQueueInLevel QueueConfigOf(CakeLevelInitData initData)
		{
			return initData != null ? initData.ingredientQueuesConfig : null;
		}

		public static SingleIngredientQueueInLevel[] ResolveQueues(CakeLevelInitData initData)
		{
			// Random-order levels ignore the authored queue.
			if (MessyController.Ins != null && MessyController.Ins.ForceRandomOrder)
			{
				return null;
			}
			SingleIngredientQueueInLevel[] queues = initData != null && initData.ingredientQueuesConfig != null ? initData.ingredientQueuesConfig.encodedQueues : null;
			return queues != null && queues.Length >= 1 ? queues : null;
		}

		public static List<string> ResolveQueueIngredientIds(CakeLevelInitData initData, RecipeConfigSO recipe, OrderStrategy orderStrategy)
		{
			// The ingredient ids the level needs: from the authored queue when there is one, otherwise from the customers' orders.
			List<string> ids = new List<string>();
			if (initData == null)
			{
				return ids;
			}
			SingleIngredientQueueInLevel[] queues = ResolveQueues(initData);
			if (queues == null)
			{
				if (orderStrategy != null)
				{
					ids.AddRange(orderStrategy.ConvertSpawnDataToStack(initData.customerSpawnData));
				}
				return ids;
			}
			foreach (SingleIngredientQueueInLevel queue in queues)
			{
				ConveyorBundle[] cells = BuildCellsFromQueue(queue != null ? queue.encodedQueue : null, recipe);
				foreach (ConveyorBundle cell in cells)
				{
					if (cell.Items == null)
					{
						continue;
					}
					foreach (IngredientState state in cell.Items)
					{
						if (state != null)
						{
							ids.Add(state.id);
						}
					}
				}
			}
			return ids;
		}

		private static ConveyorBundle[] BuildCellsFromQueue(IngredientData[] queue, RecipeConfigSO recipe)
		{
			List<ConveyorBundle> cells = new List<ConveyorBundle>();
			if (queue == null)
			{
				return cells.ToArray();
			}
			foreach (IngredientData data in queue)
			{
				if (data.IsTool)
				{
					// A tool slot (e.g. the cleaner) carries no ingredient.
					cells.Add(new ConveyorBundle { Items = new IngredientState[0], Kind = IngredientData.KindOf(data.id), Width = 1, Height = 1, DataRow = cells.Count });
					continue;
				}
				if (!TryResolveSpawnId(recipe, data.id, out var spawnId))
				{
					UnityEngine.Debug.LogWarningFormat("[StackModeService] queue piece {0} has no spawn id; skipped.", data.id);
					continue;
				}
				bool frozen = TryGetStatus(data, IngredientSlotStatus.Freeze, out var freezeTurns);
				bool keyed = TryGetStatus(data, IngredientSlotStatus.Key, out var keyColor);
				bool hidden = TryGetStatus(data, IngredientSlotStatus.Hidden, out var hiddenParam);
				cells.Add(new ConveyorBundle
				{
					Items = new IngredientState[] { new IngredientState(spawnId, data.amount) },
					Width = 1,
					Height = 1,
					Hidden = hidden,
					Status = frozen ? ConveyorBundleStatus.Freeze : ConveyorBundleStatus.None,
					StatusParam = frozen ? (freezeTurns < 1 ? 3 : freezeTurns) : 0,
					KeyColor = keyed ? System.Math.Max(keyColor, 0) : -1,
					DataRow = cells.Count,
				});
			}
			return cells.ToArray();
		}

		private static bool TryResolveSpawnId(RecipeConfigSO recipe, int pieceKind, out string id)
		{
			id = null;
			return recipe != null && recipe.TryGetSpawnIdOfPiece(pieceKind, out id);
		}

		private static void ApplySlotGroups(ConveyorBundle[][] cells, IngredientSlotGroup[] combined, IngredientSlotGroup[] linked)
		{
			// TODO(unrecovered): slot-group merge logic not recovered in this slice.
		}

		private static void MergeBlock(ConveyorBundle[][] cells, ConveyorBundle[][] owner, IngredientSlotGroup group)
		{
			// TODO(unrecovered): block merge logic not recovered in this slice.
		}

		private static void LinkChain(ConveyorBundle[][] owner, IngredientSlotGroup group, int chainId)
		{
			// TODO(unrecovered): chain linking logic not recovered in this slice.
		}

		private static ConveyorBundle CellAt(ConveyorBundle[][] grid, int col, int row)
		{
			// TODO(unrecovered): grid indexing helper not recovered in this slice.
			return null;
		}

		private static List<ConveyorBundle> Compact(ConveyorBundle[] column)
		{
			if (column == null)
			{
				return null;
			}
			List<ConveyorBundle> result = new List<ConveyorBundle>(column.Length);
			foreach (ConveyorBundle bundle in column)
			{
				if (bundle != null)
				{
					result.Add(bundle);
				}
			}
			return result;
		}

		private static bool TryGetStatus(in IngredientData data, IngredientSlotStatus status, out int param)
		{
			// TODO(unrecovered): status lookup on IngredientData not recovered in this slice.
			param = default;
			return false;
		}

		private static List<string> ShuffleStack(List<string> list, float shuffleDistance)
		{
			// TODO(unrecovered): shuffle routine not recovered in this slice.
			return null;
		}
	}
}
