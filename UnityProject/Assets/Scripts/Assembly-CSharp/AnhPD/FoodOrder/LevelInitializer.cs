using System;
using System.Collections.Generic;
using CakeOrder;
using CakeOrder.DataSO;
using CakeOrder.InGame;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class LevelInitializer
	{
		private readonly RecipeConfigSO _recipeConfig;

		private readonly LevelSupply _supply;

		// TODO(unrecovered): getter walks a static singleton chain (DAT_091b4c28 -> ... -> field @0x40) whose types are not in the stubs.
		private CakeLevelRuntimeData RuntimeData => LevelBaseCakeOrderAbstract.Instance != null ? LevelBaseCakeOrderAbstract.Instance.RuntimeData : null;

		// TODO(unrecovered): same singleton chain as RuntimeData, reading field @0x38.
		private CakeLevelInitData InitData => LevelBaseCakeOrderAbstract.Instance != null ? LevelBaseCakeOrderAbstract.Instance.InitData : null;

		public MoneyService MoneyService { get; private set; }

		public AreaService AreaService { get; private set; }

		public SpawnService SpawnService { get; private set; }

		public DragInteractionContext DragContext { get; private set; }

		public DragInteractionHandler DragInteractionHandler { get; private set; }

		public LevelInitializer(RecipeConfigSO recipeConfig, LevelSupply supply)
		{
			_recipeConfig = recipeConfig;
			_supply = supply;
		}

		public void Initialize(ItemRefs itemRefs, AreaRefs areaRefs, ManagerRefs managerRefs, Dictionary<string, ItemGroup> itemDict, Action onPickAllCoin)
		{
			InitStation(managerRefs.holderGrid, itemRefs);
			AreaService = BuildAreaService(areaRefs);
			MoneyService = BuildMoneyService(onPickAllCoin);
			SpawnService = new SpawnService(itemRefs.dragItems, itemDict, AreaService, _recipeConfig);
			DragContext = new DragInteractionContext(_recipeConfig);
			DragInteractionHandler = new DragInteractionHandler(DragContext, AreaService, SpawnService);
		}

		private void InitStation(StationHolderGrid holderGrid, ItemRefs itemRefs)
		{
			List<string> stationIds = ((_supply == null) ? new List<string>() : _supply.StationList());
			stationIds.Sort();
			holderGrid.Setup(stationIds);
			itemRefs.cookingStations = holderGrid.GetListStation();
			// TODO(unrecovered): fallback lookup through InitData's MapToolConfig.GetToolSO(station id / alternative id) when the recipe has no tool; MapToolConfig/CakeLevelInitData are not in the stubs.
			foreach (CookingStation station in itemRefs.cookingStations)
			{
				CakeToolSO tool = null;
				if (_recipeConfig != null)
				{
					RecipeComponentStation component = _recipeConfig.GetStationComponent(station.Id);
					if (component == null)
					{
						component = _recipeConfig.GetStationComponent(station.alternativeStringId);
					}
					if (component != null)
					{
						tool = component.toolSO;
					}
				}
				if (tool != null)
				{
					station.Setup(tool, _supply, _recipeConfig);
				}
			}
		}

		private MoneyService BuildMoneyService(Action onPickAllCoin)
		{
			MoneyService service = new MoneyService(delegate(int value)
			{
				LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;
				if (level != null && level.RuntimeData != null && level.RuntimeData.softCurrencyData != null) level.RuntimeData.softCurrencyData.Change(value);
			});
			service.onPickAllCoin = onPickAllCoin;
			return service;
		}

		private AreaService BuildAreaService(AreaRefs areaRefs)
		{
			return new AreaService(areaRefs.ingGrid, areaRefs.serveShelf);
		}
	}
}
