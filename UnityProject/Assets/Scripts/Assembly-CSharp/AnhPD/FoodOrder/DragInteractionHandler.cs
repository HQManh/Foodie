using System.Collections.Generic;
using TrungKienPack.Particle;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class DragInteractionHandler
	{
		private readonly DragInteractionContext _context;

		private readonly AreaService _area;

		private readonly SpawnService _spawn;

		public DragInteractionHandler(DragInteractionContext context, AreaService area, SpawnService spawn)
		{
			_context = context;
			_area = area;
			_spawn = spawn;
		}

		public void OnItemLandedAtStation(DragItem item, CookingStation station)
		{
			string id = item.GetBaseId();
			InteractVector vector = station.GetInteractVector(id);
			if (!vector.IsValid)
			{
				DragInteractionSystem.HandleDropFallback(_area, item);
			}
			else
			{
				station.PutInIngredient(vector);
				GameEventBus.Publish(new StationReceivedItemEvent
				{
					station = station,
					itemId = id
				});
				PieceLedger.Finish(item, PieceLedger.End.IntoStation, item.name, station);
				List<DragItem> toDespawn = new List<DragItem>();
				toDespawn.Add(item);
				_spawn.DespawnAll(toDespawn);
			}
			_area.RefreshCellDishes();
		}

		public bool MergeIntoPlate(ServePlate plate, DragItem item, string resultId = null)
		{
			if (!plate || !item)
			{
				return false;
			}
			if (plate.IsEmpty)
			{
				LevelInfo levelInfo = _context.info;
				string openerId;
				if (levelInfo != null && levelInfo.TryGetDishOpener(plate.DishKey, item.GetBaseId(), out openerId))
				{
					string ingId = item.GetBaseId();
					Vector3 position = item.transform.position;
					DragItem opened;
					using (PieceLedger.From(PieceLedger.Source.PlateMerge, "open " + PieceLedger.Describe(item)))
					{
						opened = _spawn.Spawn(openerId, position, false, false);
					}
					if (!opened)
					{
						return false;
					}
					PieceLedger.Finish(item, PieceLedger.End.Merged, "opened " + PieceLedger.Describe(opened));
					List<DragItem> toDespawn = new List<DragItem>();
					toDespawn.Add(item);
					_spawn.DespawnAll(toDespawn);
					FlexibleDragItem openedFlexible = opened as FlexibleDragItem;
					if (openedFlexible != null)
					{
						openedFlexible.OpenInit(ingId);
					}
					opened.transform.Appear(0.1f);
					item = opened;
				}
				else
				{
					PieceLedger.Step(item, "to plate");
				}
				plate.Adopt(item, false);
				return true;
			}
			DragItem plateItem = plate.Item;
			FlexibleDragItem plateDish = plateItem as FlexibleDragItem;
			if (plateDish != null)
			{
				LevelInfo levelInfo2 = _context.info;
				if (levelInfo2 == null)
				{
					return false;
				}
				if (!levelInfo2.CanAddTo(plateDish, item.GetBaseId()))
				{
					return false;
				}
				bool hasMergeAnim = plateDish.HasResultMergeAnimFor(item.GetBaseId());
				if (hasMergeAnim)
				{
					plateDish.SuspendVisual();
				}
				PieceSet before = plateDish.Pieces;
				plateDish.AddIng(item.GetBaseId());
				PieceSet after = plateDish.Pieces;
				if (after == before)
				{
					Debug.LogError("[MergeIntoPlate] adding " + item.GetBaseId() + " did not change " + plateDish.GetId(), plateDish);
					if (hasMergeAnim)
					{
						plateDish.ResumeVisual();
					}
					return false;
				}
				if (!hasMergeAnim)
				{
					PlayMergeBurst(item, plateDish);
				}
				PieceLedger.Finish(item, PieceLedger.End.Merged, "merged into " + PieceLedger.Describe(plateDish));
				PieceLedger.Step(plateDish, "added " + item.GetBaseId());
				List<DragItem> toDespawn2 = new List<DragItem>();
				toDespawn2.Add(item);
				_spawn.DespawnAll(toDespawn2);
				GameEventBus.Publish(new DragItemMergedEvent
				{
					item = item,
					combinedItem = plateItem
				});
				return true;
			}
			if (string.IsNullOrEmpty(resultId))
			{
				if (_context.recipeConfig == null || !item || plateItem == null)
				{
					return false;
				}
				if (!_context.recipeConfig.TryGetCombineResult(item.GetBaseId(), plateItem.GetBaseId(), out resultId))
				{
					return false;
				}
			}
			string[] ingIds = new string[2];
			ingIds[0] = item.GetId();
			ingIds[1] = plateItem.GetId();
			Vector3 spawnPos = plateItem.transform.position;
			DragItem prefab = _context.recipeConfig.GetIngredientPrefab(resultId);
			bool resultHasAnim = prefab && prefab.HasResultMergeAnimFor(item.GetBaseId());
			if (!prefab)
			{
				Debug.LogError("[MergeIntoPlate] no prefab for " + resultId + " (" + ingIds[0] + " + " + ingIds[1] + ")", plateItem);
				return false;
			}
			plate.DetachItem();
			if (!resultHasAnim)
			{
				PlayMergeBurst(item, plateItem);
			}
			string description = PieceLedger.Describe(plateItem) + " + " + PieceLedger.Describe(item);
			PieceLedger.Finish(plateItem, PieceLedger.End.Merged, "combined into " + resultId);
			PieceLedger.Finish(item, PieceLedger.End.Merged, "combined into " + resultId);
			List<DragItem> toDespawn3 = new List<DragItem>();
			toDespawn3.Add(plateItem);
			toDespawn3.Add(item);
			_spawn.DespawnAll(toDespawn3);
			DragItem result;
			using (PieceLedger.From(PieceLedger.Source.PlateMerge, description))
			{
				result = _spawn.Spawn(resultId, spawnPos, false, false);
			}
			if (!resultHasAnim)
			{
				result.transform.Appear(0.1f);
			}
			FlexibleDragItem resultFlexible = result as FlexibleDragItem;
			if (resultFlexible != null)
			{
				if (resultHasAnim)
				{
					resultFlexible.SuspendVisual();
				}
				resultFlexible.CombineInit(ingIds[0], ingIds[1]);
			}
			plate.Adopt(result, false);
			GameEventBus.Publish(new DragItemMergedEvent
			{
				item = item,
				combinedItem = plateItem
			});
			return true;
		}

		private static void PlayMergeBurst(DragItem colorSource, DragItem at)
		{
			if (!colorSource || !at)
			{
				return;
			}
			PoolingParticle instance = PoolingParticle.Instance;
			if (!instance || !instance.PrefabOf(ParticleType.MergeFood))
			{
				return;
			}
			Transform transform = (at.Tf ? at.Tf : at.transform);
			ParticleRequest request = instance.Spawn(ParticleType.MergeFood).Volume(0.1f).At(transform.position);
			ParticleSystem.MinMaxGradient gradient;
			if (colorSource.TryGetVfxGradient(out gradient))
			{
				request = request.SetColor(gradient);
			}
			request.Play();
		}
	}
}
