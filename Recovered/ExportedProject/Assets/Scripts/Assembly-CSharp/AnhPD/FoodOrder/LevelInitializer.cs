using System;
using System.Collections.Generic;
using CakeOrder;
using CakeOrder.InGame;

namespace AnhPD.FoodOrder
{
	public class LevelInitializer
	{
		private readonly RecipeConfigSO _recipeConfig;

		private readonly LevelSupply _supply;

		private CakeLevelRuntimeData RuntimeData => null;

		private CakeLevelInitData InitData => null;

		public MoneyService MoneyService { get; private set; }

		public AreaService AreaService { get; private set; }

		public SpawnService SpawnService { get; private set; }

		public DragInteractionContext DragContext { get; private set; }

		public DragInteractionHandler DragInteractionHandler { get; private set; }

		public LevelInitializer(RecipeConfigSO recipeConfig, LevelSupply supply)
		{
		}

		public void Initialize(ItemRefs itemRefs, AreaRefs areaRefs, ManagerRefs managerRefs, Dictionary<string, ItemGroup> itemDict, Action onPickAllCoin)
		{
		}

		private void InitStation(StationHolderGrid holderGrid, ItemRefs itemRefs)
		{
		}

		private MoneyService BuildMoneyService(Action onPickAllCoin)
		{
			return null;
		}

		private AreaService BuildAreaService(AreaRefs areaRefs)
		{
			return null;
		}
	}
}
