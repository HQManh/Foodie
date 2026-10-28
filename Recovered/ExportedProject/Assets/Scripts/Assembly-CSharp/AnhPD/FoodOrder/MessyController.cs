using System;
using System.Collections.Generic;
using CakeOrder;
using CakeOrder.DataSO;
using CakeOrder.InGame;
using Cysharp.Threading.Tasks;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class MessyController : LevelBaseCakeOrderAbstract
	{
		public static MessyController Ins;

		public RecipeConfigSO recipeConfig;

		[SerializeField]
		private OrderStrategy orderStrategy;

		[SerializeField]
		private LevelSkinSO levelSkin;

		[SerializeField]
		private bool forceRandomOrder;

		[SerializeField]
		private Vector2Int forceRandomCustomerRange;

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
		private int beltBottomRow;

		[Tooltip("Hàng Booster-panel lùi xuống khi dùng booster chọn nguyên liệu bất kỳ.")]
		[SerializeField]
		[Min(0f)]
		private int pickAnyPanelRow;

		private readonly Dictionary<string, ItemGroup> _itemDict;

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

		private readonly ServeService _serve;

		public bool ForceRandomOrder => false;

		public LevelInfo Info { get; private set; }

		public OrderStrategy OrderStrategy => null;

		public override ISpawnControl SpawnControl => null;

		public FCustomerLineHandle LineHandle => null;

		public ServeShelfController ServeShelf => null;

		public IngredientSpawnerController Spawner => null;

		public GridIngController IngGrid => null;

		public ServeService Serve => null;

		public bool IsBoosterHolding => false;

		public override bool HasLevelTutorial => false;

		public List<CookingStation> GetCookingStations()
		{
			return null;
		}

		public void SetStationsPaused(bool paused)
		{
		}

		public void SetStationsIntakeHeld(bool held)
		{
		}

		public List<DragItem> GetDragItems()
		{
			return null;
		}

		public override bool TryGetBeltBottomWorldY(out float worldY)
		{
			worldY = default;
			return false;
		}

		public override bool TryGetBoosterPanelWorldY(out float worldY)
		{
			worldY = default;
			return false;
		}

		protected override void Awake()
		{
		}

		protected override UniTask OnSetUpLevel()
		{
			return default;
		}

		private void PrepareRandomOrders()
		{
		}

		protected override void OnStartPlay()
		{
		}

		protected override void Update()
		{
		}

		protected override void OnEndGame()
		{
		}

		protected override void OnDestroy()
		{
		}

		protected virtual void InitCustomerLine()
		{
		}

		protected virtual void HandleCustomerLeave(CustomerLeaveData data)
		{
		}

		public bool TryAutoCompleteOrderFx(FCustomerLine line)
		{
			return false;
		}

		public bool CanAutoCompleteOrderFx(FCustomerLine line)
		{
			return false;
		}

		private void OnItemLandedAtStation(DragItem item, CookingStation station)
		{
		}

		public bool MergeIntoShelfPlate(ServePlate plate, DragItem item, string resultId = null)
		{
			return false;
		}

		public bool IsBookedByShelf(DragItem item)
		{
			return false;
		}

		private void DebugLogStuckReport()
		{
		}

		public string BuildStuckReport()
		{
			return null;
		}

		public void DropItemToGrid(DragItem item)
		{
		}

		public void RefreshCellDishes()
		{
		}

		public void ShowCellDish(Vector2Int coord, bool show)
		{
		}

		public void PlayCellGlow(Vector2Int coord)
		{
		}

		public void UnlockColorWithKey(KeyTag key)
		{
		}

		public bool HasAnyDirtyPlate()
		{
			return false;
		}

		public int ClearAllDirtyPlates()
		{
			return 0;
		}

		public int ClearAllDirtyPlatesTo(Vector3 target)
		{
			return 0;
		}

		public bool SpawnDirtyPlateCleaner(Vector3 from)
		{
			return false;
		}

		public void SpawnIngredient(string id, int count, Vector3 position, DragOrigin origin = DragOrigin.None, Action<DragItem> onSpawned = null)
		{
		}

		public void SpawnToPlannedShelf(string id, Vector3 position, DragOrigin origin, Action<DragItem> onSpawned = null)
		{
		}

		public DragItem SpawnToStation(string id, Vector3 position, CookingStation station, DragOrigin origin = DragOrigin.None, Action<DragItem> onSpawned = null)
		{
			return null;
		}

		public DragItem SpawnAndGetDragItem(string id, Vector3 position, bool isJump = true, bool registerCell = true, DragOrigin origin = DragOrigin.None)
		{
			return null;
		}

		public DragItem SpawnDragItemPrefab(DragItem prefab, Vector3 position, bool registerCell = true)
		{
			return null;
		}

		public bool TrySpawnInteractStation(string id, Vector3 position)
		{
			return false;
		}

		public void AutoFeedStationFromGrid(DragItem item, CookingStation station)
		{
		}

		public bool CanCombineWithExisting(string id)
		{
			return false;
		}

		public void DespawnItem(DragItem dragItem)
		{
		}

		public void SpawnCoin(Vector2 pos, int num = 1, int value = 5, bool isTip = false)
		{
		}

		public void OnBalanceChange(Vector2 pos, int amount)
		{
		}

		public override void ApplySaveMeOnOutOfServeSlots(ConfigSaveMeOnOutOfServeSlots config)
		{
		}

		public void RegisterCustomerOutOfTime(Action<Action> onRevive)
		{
		}

		public void RequestSaveMeOnCustomerOutOfTime()
		{
		}

		public override void ApplySaveMeOnCustomerOutOfTime()
		{
		}

		public override void ApplySaveMeOnBeltDeadlock()
		{
		}

		public override bool CanUseBooster(BoosterType boosterType)
		{
			return false;
		}

		protected override void OnApplyBoosterEffect(BoosterData boosterData, Action<BoosterData> onEnd)
		{
		}

		protected override void OnBoosterEffectExpired(BoosterData boosterData)
		{
		}

		public override void PrepareBoosterTutorial(BoosterType boosterType)
		{
		}

		protected override UniTask OnStartTutorial(string tutorialId, Action onDone)
		{
			return default;
		}

		public override (List<IRewardItemInfo>, List<GridEffectType>, List<IngredientSlotStatus>) GetMechanicsUsedInLevel()
		{
			return default;
		}
	}
}
