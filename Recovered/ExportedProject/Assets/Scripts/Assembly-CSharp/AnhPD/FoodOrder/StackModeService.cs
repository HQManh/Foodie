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

		private CakeLevelInitData InitData => null;

		private FCustomerLineHandle LineHandle => null;

		public StackModeService(AreaRefs areaRefs, ManagerRefs managerRefs, LevelInfo info, RecipeConfigSO recipeConfig)
		{
		}

		public void Setup()
		{
		}

		private static IngredientQueueInLevel QueueConfigOf(CakeLevelInitData initData)
		{
			return null;
		}

		public static SingleIngredientQueueInLevel[] ResolveQueues(CakeLevelInitData initData)
		{
			return null;
		}

		public static List<string> ResolveQueueIngredientIds(CakeLevelInitData initData, RecipeConfigSO recipe, OrderStrategy orderStrategy)
		{
			return null;
		}

		private static ConveyorBundle[] BuildCellsFromQueue(IngredientData[] queue, RecipeConfigSO recipe)
		{
			return null;
		}

		private static bool TryResolveSpawnId(RecipeConfigSO recipe, int pieceKind, out string id)
		{
			id = null;
			return false;
		}

		private static void ApplySlotGroups(ConveyorBundle[][] cells, IngredientSlotGroup[] combined, IngredientSlotGroup[] linked)
		{
		}

		private static void MergeBlock(ConveyorBundle[][] cells, ConveyorBundle[][] owner, IngredientSlotGroup group)
		{
		}

		private static void LinkChain(ConveyorBundle[][] owner, IngredientSlotGroup group, int chainId)
		{
		}

		private static ConveyorBundle CellAt(ConveyorBundle[][] grid, int col, int row)
		{
			return null;
		}

		private static List<ConveyorBundle> Compact(ConveyorBundle[] column)
		{
			return null;
		}

		private static bool TryGetStatus(in IngredientData data, IngredientSlotStatus status, out int param)
		{
			param = default;
			return false;
		}

		private static List<string> ShuffleStack(List<string> list, float shuffleDistance)
		{
			return null;
		}
	}
}
