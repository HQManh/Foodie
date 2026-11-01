using System;
using System.Collections.Generic;
using CakeOrder;
using CakeOrder.DataSO;
using CakeOrder.InGame;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class MessyController : LevelBaseCakeOrderAbstract
	{
		public static MessyController Ins;

		// Inferred from game code that sets endGameInfo.reason. Not verified.
		public EndGameInfo endGameInfo = new EndGameInfo();

		// Inferred from game code that reads LevelIndex as a level number. Default value is a guess.
		public int LevelIndex;

		public class EndGameInfo
		{
			public int reason;
		}

		public RecipeConfigSO recipeConfig;

		[SerializeField]
		private OrderStrategy orderStrategy;

		[SerializeField]
		private LevelSkinSO levelSkin;

		[SerializeField]
		private bool forceRandomOrder;

		[SerializeField]
		private Vector2Int forceRandomCustomerRange = new Vector2Int(6, 10);

		[SerializeField]
		private ItemRefs _itemRefs;

		[SerializeField]
		private AreaRefs _areaRefs;

		[SerializeField]
		private ManagerRefs _managerRefs;

		private int _stationHolds;

		private int _intakeHolds;

		[Tooltip("Hàng băng chuyền làm đáy vùng camera + mốc y của Booster-panel (0 = hàng đầu).")]
		[SerializeField]
		[Min(0f)]
		private int beltBottomRow = 2;

		[Tooltip("Hàng Booster-panel lùi xuống khi dùng booster chọn nguyên liệu bất kỳ.")]
		[SerializeField]
		[Min(0f)]
		private int pickAnyPanelRow = 5;

		private readonly Dictionary<string, ItemGroup> _itemDict = new Dictionary<string, ItemGroup>();

		private LevelSupply _supply;

		private SpawnService _spawnService;

		private MoneyService _moneyService;

		private AreaService _areaService;

		private DragInteractionHandler _dragHandler;

		private StackModeService _stackMode;

		private AutoCompleteOrderFx _autoCompleteFx;

		private EndGameService _endGame;

		private BoosterService _booster;

		private BackgroundTintService _tint;

		private readonly ServeService _serve = new ServeService();

		public bool ForceRandomOrder => forceRandomOrder;

		public LevelInfo Info { get; private set; }

		public OrderStrategy OrderStrategy => orderStrategy;

		public override ISpawnControl SpawnControl => _managerRefs.lineHandle;

		public FCustomerLineHandle LineHandle => _managerRefs.lineHandle;

		public ServeShelfController ServeShelf => _areaRefs.serveShelf;

		public IngredientSpawnerController Spawner => _managerRefs.spawnerController;

		public GridIngController IngGrid => _areaRefs.ingGrid;

		public ServeService Serve => _serve;

		public bool IsBoosterHolding => _booster != null && _booster.IsHolding;

		// TODO(unrecovered): tutorial check reads the base class CakeLevelInitData (base+0x38), which is not in the stubs.
		public override bool HasLevelTutorial => false;

		public List<CookingStation> GetCookingStations()
		{
			return _itemRefs.cookingStations;
		}

		public void SetStationsPaused(bool paused)
		{
			int holds = paused ? _stationHolds + 1 : _stationHolds - 1;
			_stationHolds = Mathf.Max(holds, 0);
			foreach (CookingStation station in _itemRefs.cookingStations)
			{
				if (station != null)
				{
					station.SetPaused(holds > 0);
				}
			}
		}

		public void SetStationsIntakeHeld(bool held)
		{
			int holds = held ? _intakeHolds + 1 : _intakeHolds - 1;
			_intakeHolds = Mathf.Max(holds, 0);
			foreach (CookingStation station in _itemRefs.cookingStations)
			{
				if (station != null)
				{
					station.SetIntakeHeld(holds > 0);
				}
			}
		}

		public List<DragItem> GetDragItems()
		{
			return _itemRefs.dragItems;
		}

		public override bool TryGetBeltBottomWorldY(out float worldY)
		{
			IngredientSpawnerController spawner = _managerRefs.spawnerController;
			worldY = 0f;
			if (spawner != null)
			{
				worldY = spawner.RowBottomWorldY(beltBottomRow);
			}
			return spawner != null;
		}

		public override bool TryGetBoosterPanelWorldY(out float worldY)
		{
			IngredientSpawnerController spawner = _managerRefs.spawnerController;
			worldY = 0f;
			if (spawner != null)
			{
				float bottom = spawner.RowBottomWorldY(beltBottomRow);
				float panel = spawner.RowBottomWorldY(pickAnyPanelRow);
				worldY = bottom + (panel - bottom) * Mathf.Clamp01(spawner.PickAnyProgress);
			}
			return spawner != null;
		}

		protected override void Awake()
		{
			base.Awake();
			if (Ins != null)
			{
				Destroy(gameObject);
				return;
			}
			Ins = this;
		}

		protected override UniTask OnSetUpLevel()
		{
			// Rebuilt from the decompiled code: wires the piece ledger, supply, initializer, level info and the service graph.
			PieceLedger.Reset();
			PrepareRandomOrders();
			List<string> seedIds = StackModeService.ResolveQueueIngredientIds(InitData, recipeConfig, orderStrategy);
			_supply = LevelSupply.Build(recipeConfig, seedIds);
			LevelInitializer initializer = new LevelInitializer(recipeConfig, _supply);
			initializer.Initialize(_itemRefs, _areaRefs, _managerRefs, _itemDict, delegate
			{
				if (_endGame != null)
				{
					_endGame.CheckEndGame();
				}
			});
			_areaService = initializer.AreaService;
			_moneyService = initializer.MoneyService;
			_dragHandler = initializer.DragInteractionHandler;
			_spawnService = initializer.SpawnService;
			Info = new LevelInfo(recipeConfig, _areaService, orderStrategy, levelSkin);
			Info.Pieces = _supply.Pieces;
			_supply.Pieces.Setup(Info, InitData.customerSpawnData);
			_stackMode = new StackModeService(_areaRefs, _managerRefs, Info, recipeConfig);
			_autoCompleteFx = new AutoCompleteOrderFx(Info, _areaRefs.ingGrid, _managerRefs.spawnerController, _serve);
			_tint = new BackgroundTintService(BackgroundControl);
			_booster = new BoosterService(_areaRefs, _managerRefs, Info, _autoCompleteFx, _tint.SetBoosterDim);
			if (_areaRefs.ingGrid != null)
			{
				_areaRefs.ingGrid.SetupCellGrid(InitData);
			}
			if (_areaRefs.serveShelf != null)
			{
				_areaRefs.serveShelf.Setup(InitData.serveSlotConfig.init);
			}
			DifficultySprite.ApplyAllInScene();
			SpineSkinSwitcher.ApplyAllInScene();
			if (initializer.DragContext != null)
			{
				initializer.DragContext.info = Info;
			}
			_spawnService.SetInteractContext(Info, OnItemLandedAtStation);
			_spawnService.OnDespawn = delegate(DragItem item)
			{
				if (_areaRefs != null && _areaRefs.serveShelf != null)
				{
					_areaRefs.serveShelf.ForgetItem(item);
				}
			};
			_stackMode.Setup();
			InitCustomerLine();
			return default(UniTask);
		}

		private void PrepareRandomOrders()
		{
			if (orderStrategy == null)
			{
				return;
			}
			if (forceRandomOrder)
			{
				int count = UnityEngine.Random.Range(forceRandomCustomerRange.x, forceRandomCustomerRange.y + 1);
				InitData.customerSpawnData = CustomerScheduleBuilder.BuildPlaceholders(count);
				// TODO(unrecovered): the original also clears one reference field at base+0xa0 (CakeLevelInitData +0xa0) right after the schedule is set; that field is not identified yet.
				if (RuntimeData != null)
				{
					RuntimeData.customerData.SetMaxNumCustomers(InitData.customerSpawnData.Length);
				}
			}
			foreach (CustomerSpawnData entry in InitData.customerSpawnData)
			{
				if (entry == null || !(forceRandomOrder || entry.orders == null || entry.orders.Count < 1))
				{
					continue;
				}
				string[] recipes = orderStrategy.GenerateRandomRecipes();
				if (recipes == null || recipes.Length == 0)
				{
					continue;
				}
				entry.orders = new List<CustomerSingleOrderSpawnData>(recipes.Length);
				foreach (string recipe in recipes)
				{
					entry.orders.Add(new CustomerSingleOrderSpawnData
					{
						recipe = recipe,
						price = InitData.GetOrderPrice(recipe),
					});
				}
			}
		}

		protected override void OnStartPlay()
		{
			_managerRefs.spawnerController.Run();
			if (InitData.IsFullData)
			{
				_managerRefs.lineHandle.Begin();
			}
			_endGame?.EvaluateRush();
		}

		protected override void Update()
		{
			base.Update();
			if (_endGame != null)
			{
				_endGame.Tick();
			}
		}

		protected override void OnEndGame()
		{
			base.OnEndGame();
			if (_endGame != null)
			{
				_endGame.OnEndGame();
			}
		}

		protected override void OnDestroy()
		{
			base.OnDestroy();
			CustomerLineController.DishAccepted -= HandleDishAccepted;
			CustomerLineController.DishRejected -= HandleDishRejected;
			DOTween.Kill(this);
			if (_endGame != null)
			{
				_endGame.Dispose();
			}
			if (_tint != null)
			{
				_tint.Dispose();
			}
		}

		protected virtual void InitCustomerLine()
		{
			FCustomerLineHandle lineHandle = _managerRefs.lineHandle;
			lineHandle.Setup(HandleCustomerLeave);
			CustomerLineController.DishAccepted += HandleDishAccepted;
			CustomerLineController.DishRejected += HandleDishRejected;
			_endGame = new EndGameService(this, _areaRefs, _managerRefs, _itemRefs, new Action<bool>(_tint.SetSaveMeDim));
		}

		// The combo mechanic of the running level (null when the level has none).
		public CakeOrder.InGame.InGameComboMechanicControl Combo { get; set; }

		private void HandleDishAccepted()
		{
			RuntimeData?.customerData?.TriggerSingleDishServed();
		}

		private void HandleDishRejected()
		{
			RuntimeData?.customerData?.TriggerSingleDishFailed();
		}

		protected virtual void HandleCustomerLeave(CustomerLeaveData data)
		{
			if (!data.spawnData.IsCleanDishStaff)
			{
				var result = new ResultCustomerData
				{
					characterId = data.customerId,
					emotion = data.emotion,
					numDish = data.numDish,
				};
				if (data.isSatisfied)
				{
					RuntimeData.customerData.AddServedCustomer(result);
				}
				else
				{
					RuntimeData.customerData.AddFailedCustomer(result);
				}
			}
			_endGame?.OnCustomerLeft();
		}

		public bool TryAutoCompleteOrderFx(FCustomerLine line)
		{
			return _autoCompleteFx != null && _autoCompleteFx.TryPlay(line);
		}

		public bool CanAutoCompleteOrderFx(FCustomerLine line)
		{
			if (_autoCompleteFx == null)
			{
				return false;
			}
			// TODO(unrecovered): needs a read of AutoCompleteOrderFx's private state (+0x30 flag, +0x58 list) and its private CollectCompletableOrders; no public accessor exists and adding API is not allowed.
			return false;
		}

		private void OnItemLandedAtStation(DragItem item, CookingStation station)
		{
			_dragHandler.OnItemLandedAtStation(item, station);
		}

		public bool MergeIntoShelfPlate(ServePlate plate, DragItem item, string resultId = null)
		{
			return _dragHandler.MergeIntoPlate(plate, item, resultId);
		}

		public bool IsBookedByShelf(DragItem item)
		{
			ServeShelfController shelf = _areaRefs.serveShelf;
			return shelf != null && shelf.IsBooked(item);
		}

		private void DebugLogStuckReport()
		{
			Debug.Log(BuildStuckReport(), this);
		}

		public string BuildStuckReport()
		{
			// TODO(unrecovered): report reads the base class CakeLevelInitData (base+0x38) and the localisation tables; not reproduced.
			return null;
		}

		public void DropItemToGrid(DragItem item)
		{
			DragInteractionSystem.HandleDropFallback(_areaService, item);
		}

		public void RefreshCellDishes()
		{
			_areaService.RefreshCellDishes();
		}

		public void ShowCellDish(Vector2Int coord, bool show)
		{
			_areaService.ShowCellDish(coord, show);
		}

		public void PlayCellGlow(Vector2Int coord)
		{
			GridIngController grid = _areaRefs.ingGrid;
			if (grid != null)
			{
				grid.PlayCellGlow(coord);
			}
		}

		public void UnlockColorWithKey(KeyTag key)
		{
			GridIngController grid = _areaRefs.ingGrid;
			if (grid != null)
			{
				grid.UnlockColorWithKey(key);
			}
		}

		public bool HasAnyDirtyPlate()
		{
			GridIngController grid = _areaRefs.ingGrid;
			return grid != null && grid.HasAnyDirtyPlate();
		}

		public int ClearAllDirtyPlates()
		{
			GridIngController grid = _areaRefs.ingGrid;
			return grid != null ? grid.ClearAllDirtyPlates() : 0;
		}

		public int ClearAllDirtyPlatesTo(Vector3 target)
		{
			GridIngController grid = _areaRefs.ingGrid;
			return grid != null ? grid.ClearAllDirtyPlatesTo(target) : 0;
		}

		public bool SpawnDirtyPlateCleaner(Vector3 from)
		{
			GridIngController grid = _areaRefs.ingGrid;
			return grid != null && grid.SpawnDirtyPlateCleaner(from);
		}

		public void SpawnIngredient(string id, int count, Vector3 position, DragOrigin origin = DragOrigin.None, Action<DragItem> onSpawned = null)
		{
			_spawnService.SpawnIngredient(id, count, position, origin, onSpawned);
		}

		public void SpawnToPlannedShelf(string id, Vector3 position, DragOrigin origin, Action<DragItem> onSpawned = null)
		{
			_spawnService.SpawnToPlannedShelf(id, position, origin, onSpawned);
		}

		public DragItem SpawnToStation(string id, Vector3 position, CookingStation station, DragOrigin origin = DragOrigin.None, Action<DragItem> onSpawned = null)
		{
			return _spawnService.SpawnToStation(id, position, station, origin, onSpawned);
		}

		public DragItem SpawnAndGetDragItem(string id, Vector3 position, bool isJump = true, bool registerCell = true, DragOrigin origin = DragOrigin.None)
		{
			return _spawnService.SpawnAndGetDragItem(id, position, isJump, registerCell, origin);
		}

		public DragItem SpawnDragItemPrefab(DragItem prefab, Vector3 position, bool registerCell = true)
		{
			return _spawnService.SpawnSingle(prefab, position, true, registerCell);
		}

		public bool TrySpawnInteractStation(string id, Vector3 position)
		{
			return _spawnService.TrySpawnInteractStation(id, position);
		}

		public void AutoFeedStationFromGrid(DragItem item, CookingStation station)
		{
			_spawnService.ThrowFromGridToStation(item, station);
		}

		public bool CanCombineWithExisting(string id)
		{
			return _spawnService.CanCombineWithExisting(id);
		}

		public void DespawnItem(DragItem dragItem)
		{
			GridIngController grid = _areaRefs.ingGrid;
			if (grid != null)
			{
				grid.Unpark(dragItem);
			}
			_spawnService.Despawn(dragItem);
		}

		public void SpawnCoin(Vector2 pos, int num = 1, int value = 5, bool isTip = false)
		{
			_moneyService.SpawnCoin(pos, num, value, isTip);
		}

		public void OnBalanceChange(Vector2 pos, int amount)
		{
			RuntimeData.softCurrencyData.Change(amount);
		}

		public override void ApplySaveMeOnOutOfServeSlots(ConfigSaveMeOnOutOfServeSlots config)
		{
			base.ApplySaveMeOnOutOfServeSlots(config);
			if (_endGame != null)
			{
				_endGame.ApplySaveMeOnOutOfServeSlots();
			}
		}

		public void RegisterCustomerOutOfTime(Action<Action> onRevive)
		{
			FCustomerLineHandle lineHandle = _managerRefs.lineHandle;
			if (lineHandle == null)
			{
				return;
			}
			lineHandle.RegisterCustomerOutOfTime(onRevive);
		}

		public void RequestSaveMeOnCustomerOutOfTime()
		{
			if (_endGame != null)
			{
				_endGame.RequestSaveMeOnCustomerOutOfTime();
			}
		}

		public override void ApplySaveMeOnCustomerOutOfTime()
		{
			base.ApplySaveMeOnCustomerOutOfTime();
			if (_endGame != null)
			{
				_endGame.ApplySaveMeOnCustomerOutOfTime();
			}
		}

		public override void ApplySaveMeOnBeltDeadlock()
		{
			base.ApplySaveMeOnBeltDeadlock();
			if (_endGame != null)
			{
				_endGame.ApplySaveMeOnBeltDeadlock();
			}
		}

		public override bool CanUseBooster(BoosterType boosterType)
		{
			if (_booster == null)
			{
				return base.CanUseBooster(boosterType);
			}
			bool result = _booster.CanUse(boosterType, out bool handled);
			if (!handled)
			{
				result = base.CanUseBooster(boosterType);
			}
			return result;
		}

		protected override void OnApplyBoosterEffect(BoosterData boosterData, Action<BoosterData> onEnd)
		{
			if (_booster != null)
			{
				_booster.Apply(boosterData, onEnd);
				return;
			}
			onEnd?.Invoke(boosterData);
		}

		protected override void OnBoosterEffectExpired(BoosterData boosterData)
		{
		}

		public override void PrepareBoosterTutorial(BoosterType boosterType)
		{
			base.PrepareBoosterTutorial(boosterType);
			if (_booster != null)
			{
				_booster.PrepareTutorial(boosterType);
			}
		}

		protected override UniTask OnStartTutorial(string tutorialId, Action onDone)
		{
			// TODO(unrecovered): the level-tutorial branch resolves TutorialManager through an unidentified singleton chain; only the base fallback is reproduced.
			return base.OnStartTutorial(tutorialId, onDone);
		}

		public override (List<IRewardItemInfo>, List<GridEffectType>, List<IngredientSlotStatus>) GetMechanicsUsedInLevel()
		{
			// TODO(unrecovered): builds reward entries from LevelInfo dish infos and the base class CakeLevelInitData; not reproduced.
			return default;
		}
	}
}
