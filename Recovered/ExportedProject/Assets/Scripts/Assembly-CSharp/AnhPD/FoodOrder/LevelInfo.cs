using System.Collections.Generic;
using CakeOrder;
using CakeOrder.InGame;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class LevelInfo
	{
		public enum HomeKind
		{
			Cell = 0,
			Station = 1,
			Shelf = 2
		}

		public readonly struct HomePlan
		{
			public readonly HomeKind Kind;

			public readonly CookingStation Station;

			public HomePlan(HomeKind kind, CookingStation station = null)
			{
				Kind = HomeKind.Cell;
				Station = null;
			}
		}

		private sealed class StationIntake
		{
			public int GroupIndex;

			public readonly Dictionary<string, int> UsedPerId;
		}

		private readonly Dictionary<string, OrderSpec[]> _orderSpecCache;

		private const int NoGroupLock = -1;

		private readonly Dictionary<CookingStation, StationIntake> _claims;

		private readonly Dictionary<CookingStation, StationIntake> _roomClaims;

		private readonly Dictionary<CookingStation, StationIntake> _inbound;

		private readonly RecipeConfigSO _recipe;

		private readonly AreaService _area;

		private readonly OrderStrategy _orderStrategy;

		private readonly LevelSkinSO _levelSkin;

		public bool IsGridAlertBlinking => false;

		public bool IsGridDeadlockBlinking => false;

		public bool IsBeltTapBlocked => false;

		public float GridAlertBlinkPhase => 0f;

		private static ServeShelfController Shelf => null;

		public LevelPieceBook Pieces { get; set; }

		public bool IngredientListShowsRaw => false;

		private static CakeLevelInitData InitData => null;

		public bool IsCellAvailable(string id, int num)
		{
			return false;
		}

		public int CountCellAvailable(string id, int max)
		{
			return 0;
		}

		public void PulseGridFullAlert(float cycleDuration)
		{
		}

		public void SetBeltStuck(bool stuck)
		{
		}

		public void SetBeltDeadlocked(bool v)
		{
		}

		public void SetBeltHasMove(bool v)
		{
		}

		public int CountCellsFreeableBySaveMe()
		{
			return 0;
		}

		public bool TryGetCellNearest(DragItem item, out IngCell cell)
		{
			cell = null;
			return false;
		}

		public bool HasHomeFor(string id)
		{
			return false;
		}

		public bool HasHomeForAll(IReadOnlyList<string> ids, out bool gridFull, bool requireStationExit = false)
		{
			gridFull = default;
			return false;
		}

		public bool HasHomeForAll(IReadOnlyList<string> ids, out bool gridFull, List<HomePlan> plan, bool requireStationExit = false)
		{
			gridFull = default;
			return false;
		}

		public static bool ShelfCanTake(string id)
		{
			return false;
		}

		public void ReserveHome(string id, HomePlan plan)
		{
		}

		public void ReleaseHome(string id, HomePlan plan)
		{
		}

		public string GetRandomOrderId()
		{
			return null;
		}

		public List<string> GetRandomListOrder()
		{
			return null;
		}

		public OrderSpec[] ConvertOrderData(string encodedOrder)
		{
			return null;
		}

		public OrderSpec BuildOrderSpec(string orderId, List<string> allBaseIds = null)
		{
			return default;
		}

		public Stack<string> ConvertSpawnDataToStack(CustomerSpawnData[] allSpawnData)
		{
			return null;
		}

		public List<OrderSpec> GetItemOrderSpecs(DragItem item)
		{
			return null;
		}

		public bool TryGetOrderPieces(string recipe, out PieceSet pieces)
		{
			pieces = default;
			return false;
		}

		public bool CanStillComplete(PieceSet has, PieceSet want)
		{
			return false;
		}

		public bool CanAddPieceNow(PieceSet has, int pieceKind)
		{
			return false;
		}

		public string SequenceOf(string id)
		{
			return null;
		}

		public bool SequenceFits(int dishKey, string has, string want)
		{
			return false;
		}

		public bool CanDishAdd(string baseId, PieceSet has, string ingId)
		{
			return false;
		}

		public bool CanAddTo(FlexibleDragItem dish, string ingId)
		{
			return false;
		}

		public PieceOffer GetItemPieceOffer(DragItem item)
		{
			return null;
		}

		public PieceOffer GetIdPieceOffer(string id)
		{
			return null;
		}

		public bool TryGetFormOf(int dishKey, int pieceKind, out string formId)
		{
			formId = null;
			return false;
		}

		public int DishKeyOfId(string baseId)
		{
			return 0;
		}

		public int DishKeyOfOrder(OrderSpec spec)
		{
			return 0;
		}

		public bool CanOpenDish(int dishKey, string itemBaseId, PieceSet itemPieces)
		{
			return false;
		}

		public bool TryGetDishResult(int dishKey, string currentId, string ingId, out string resultId)
		{
			resultId = null;
			return false;
		}

		public bool TryGetDishOpener(int dishKey, string ingId, out string resultId)
		{
			resultId = null;
			return false;
		}

		public bool TryGetPlateVariant(int dishKey, out ServePlate plate, out DragItem dirtyPlate)
		{
			plate = null;
			dirtyPlate = null;
			return false;
		}

		public IEnumerable<DragItem> GetFieldItems()
		{
			return null;
		}

		public IEnumerable<DragItem> GetGridItems()
		{
			return null;
		}

		public List<string> GetListIngCanOrder()
		{
			return null;
		}

		public bool TryGetCombineResult(string id1, string id2, out string resultId)
		{
			resultId = null;
			return false;
		}

		public bool HasAnyCombine(string id)
		{
			return false;
		}

		public Sprite GetIngredientSprite(string id)
		{
			return null;
		}

		public float GetIngredientDisplayScale(string id)
		{
			return 0f;
		}

		public Vector2 GetIngredientDisplayOffset(string id)
		{
			return default;
		}

		public float GetStationCookDuration(string stationId, string resultId)
		{
			return 0f;
		}

		public ToolUpgradeStat GetToolUpgrade(string toolId)
		{
			return default;
		}

		public float GetUpgradedCookDuration(string toolId, float baseDuration)
		{
			return 0f;
		}

		public DragItem GetIngredientPrefab(string id)
		{
			return null;
		}

		public string GetIngredientName(string id)
		{
			return null;
		}

		public int GetDishKind(string id)
		{
			return 0;
		}

		public Sprite GetDishIconOfId(string id)
		{
			return null;
		}

		public RcDishInfo GetDishInfo(int dishKind)
		{
			return null;
		}

		public List<RcDishInfo> GetDishInfosInLevelOrders()
		{
			return null;
		}

		public List<List<RcDisplayConfig>> GetAllDisplayConfigInRecipe(string id, bool includeStations = true)
		{
			return null;
		}

		public List<RcDisplayConfig> GetDisplayConfig(List<string> listId)
		{
			return null;
		}

		public bool TryGetDisplayIds(string id, List<string> result)
		{
			return false;
		}

		public bool TryCollectLeafInputs(string id, List<string> result)
		{
			return false;
		}

		public bool TryGetDirectInputs(string id, List<string> result)
		{
			return false;
		}

		public RcDisplayConfig GetDisplayConfig(string id)
		{
			return null;
		}

		public Sprite GetPrefabSprite(string id)
		{
			return null;
		}

		public bool WantsStationResult(string resultId)
		{
			return false;
		}

		public bool WantsStationResult(CookingStation station, string id)
		{
			return false;
		}

		public bool WantsAutoFeed(CookingStation station, string id)
		{
			return false;
		}

		public int StationResultDemand(string resultId)
		{
			return 0;
		}

		public bool WantsRefineInPlace(string refinedId)
		{
			return false;
		}

		public bool CanAutoFeed(CookingStation station, string id)
		{
			return false;
		}

		private bool IsAnchorRouted(string id)
		{
			return false;
		}

		private CookingStation PickStationFor(string id, Dictionary<CookingStation, StationIntake> ledger, bool requireExit, out int pickedGroup)
		{
			pickedGroup = default;
			return null;
		}

		private static int InboundCount(Dictionary<CookingStation, StationIntake> ledger, CookingStation station, int groupIndex)
		{
			return 0;
		}

		private static int EmptySlots(StationInteractGroup group)
		{
			return 0;
		}

		public int CountInboundFor(string resultId)
		{
			return 0;
		}

		private bool TryClaimStation(string id, Dictionary<CookingStation, StationIntake> ledger, bool requireExit = false)
		{
			return false;
		}

		private bool TryClaimStation(string id, Dictionary<CookingStation, StationIntake> ledger, bool requireExit, out CookingStation claimed)
		{
			claimed = null;
			return false;
		}

		public int CountStationRoomFor(string id, int max)
		{
			return 0;
		}

		private int StationRoomFor(CookingStation station, string id, Dictionary<CookingStation, StationIntake> ledger, bool requireExit, out int group)
		{
			group = default;
			return 0;
		}

		private static bool Deduct(Dictionary<CookingStation, StationIntake> ledger, CookingStation station, string id, int group, ref int slots)
		{
			return false;
		}

		private static void Take(Dictionary<CookingStation, StationIntake> ledger, CookingStation station, string id, int group)
		{
		}

		private static void Give(Dictionary<CookingStation, StationIntake> ledger, CookingStation station, string id)
		{
		}

		public void CollectBusyStations(IReadOnlyList<string> ids, List<CookingStation> result)
		{
		}

		public void MarkInbound(CookingStation station, string id)
		{
		}

		public void ClearInbound(CookingStation station, string id)
		{
		}

		public bool IsInbound(CookingStation station)
		{
			return false;
		}

		public int InboundGroupOf(CookingStation station)
		{
			return 0;
		}

		public bool HasStationRoomFor(CookingStation station, string id)
		{
			return false;
		}

		public bool TryGetInteractableStation(string id, Vector3 fromPos, out CookingStation station)
		{
			station = null;
			return false;
		}

		public LevelInfo(RecipeConfigSO recipe, AreaService area, OrderStrategy orderStrategy = null, LevelSkinSO levelSkin = null)
		{
		}

		public Sprite SkinSpriteFor(LevelSkinPart part)
		{
			return null;
		}

		public bool IsRecipe(string id)
		{
			return false;
		}

		public List<GridEffectType> GetAppliedGridEffects()
		{
			return null;
		}

		public List<IngredientSlotStatus> GetAppliedSlotStatuses()
		{
			return null;
		}
	}
}
