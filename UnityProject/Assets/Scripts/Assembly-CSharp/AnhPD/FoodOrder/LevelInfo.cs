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

			public readonly Dictionary<string, int> UsedPerId = new Dictionary<string, int>();
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

		public bool IsGridAlertBlinking => _area.IsGridAlertBlinking;

		public bool IsGridDeadlockBlinking => _area.IsGridDeadlockBlinking;

		public bool IsBeltTapBlocked => _area.IsBeltTapBlocked;

		public float GridAlertBlinkPhase => _area.GridAlertBlinkPhase;

		private static ServeShelfController Shelf => MessyController.Ins != null ? MessyController.Ins.ServeShelf : null;

		public LevelPieceBook Pieces { get; set; }

		// TODO(unrecovered): reads a bool at RecipeConfigSO+0x34, which is RecipeConfigSO.ingredientListShowsRaw by field layout (0x18..0x34); the source object is LevelInfo+0x38, but the stub's _recipe field sits at 0x30, so the field mapping is unresolved.
		public bool IngredientListShowsRaw => false;

		// The original reads InitData (+0x38) of the level singleton, reached through a generic static (a method reference in the metadata).
		private static CakeLevelInitData InitData
		{
			get
			{
				LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;
				return level != null ? level.InitData : null;
			}
		}

		public bool IsCellAvailable(string id, int num)
		{
			return _area.IsCellAvailable(id, num);
		}

		public int CountCellAvailable(string id, int max)
		{
			return _area.CountAvailable(id, max);
		}

		public void PulseGridFullAlert(float cycleDuration)
		{
			_area.PulseGridFullAlert(cycleDuration);
		}

		public void SetBeltStuck(bool stuck)
		{
			_area.SetBeltStuck(stuck);
		}

		public void SetBeltDeadlocked(bool v)
		{
			_area.SetBeltDeadlocked(v);
		}

		public void SetBeltHasMove(bool v)
		{
			_area.SetBeltHasMove(v);
		}

		public int CountCellsFreeableBySaveMe()
		{
			return _area.CountCellsFreeableBySaveMe();
		}

		public bool TryGetCellNearest(DragItem item, out IngCell cell)
		{
			return _area.TryGetCellNearest(item, out cell);
		}

		public bool HasHomeFor(string id)
		{
			if (_area.IsCellAvailable(id, 1))
			{
				return true;
			}
			// TODO(unrecovered): source position is a static Vector3 from an unidentified class (DAT_0918cbd0+0xb8); default is used here.
			if (TryGetInteractableStation(id, default, out _))
			{
				return true;
			}
			return MessyController.Ins.CanCombineWithExisting(id);
		}

		public bool HasHomeForAll(IReadOnlyList<string> ids, out bool gridFull, bool requireStationExit = false)
		{
			return HasHomeForAll(ids, out gridFull, null, requireStationExit);
		}

		public bool HasHomeForAll(IReadOnlyList<string> ids, out bool gridFull, List<HomePlan> plan, bool requireStationExit = false)
		{
			gridFull = false;
			plan?.Clear();
			if (ids == null || ids.Count == 0)
			{
				return true;
			}
			_claims.Clear();
			List<string> unplaced = new List<string>();
			bool shelfUsed = false;
			foreach (string id in ids)
			{
				if (TryClaimStation(id, _claims, requireStationExit, out CookingStation station))
				{
					plan?.Add(new HomePlan(HomeKind.Station, station));
				}
				else if (!shelfUsed && ShelfCanTake(id))
				{
					plan?.Add(new HomePlan(HomeKind.Shelf));
					shelfUsed = true;
				}
				else
				{
					unplaced.Add(id);
					plan?.Add(new HomePlan(HomeKind.Cell));
				}
			}
			bool canPlaceAll = _area.CanPlaceAll(unplaced);
			if (!canPlaceAll)
			{
				gridFull = true;
			}
			return canPlaceAll;
		}

		public static bool ShelfCanTake(string id)
		{
			ServeShelfController shelf = Shelf;
			return shelf != null && shelf.CanTakeIdDirect(id);
		}

		public void ReserveHome(string id, HomePlan plan)
		{
			switch (plan.Kind)
			{
			case HomeKind.Cell:
				_area.ReservePendingCell(id);
				break;
			case HomeKind.Station:
				MarkInbound(plan.Station, id);
				break;
			case HomeKind.Shelf:
				Shelf.PromiseDirect(id);
				break;
			}
		}

		public void ReleaseHome(string id, HomePlan plan)
		{
			switch (plan.Kind)
			{
			case HomeKind.Cell:
				_area.ReleasePendingCell(id);
				break;
			case HomeKind.Station:
				ClearInbound(plan.Station, id);
				break;
			case HomeKind.Shelf:
				Shelf.CancelPromise(id);
				break;
			}
		}

		public string GetRandomOrderId()
		{
			if (_orderStrategy != null)
			{
				return _orderStrategy.GetRandomOrderId();
			}
			return _recipe.GetRandomIngIdForOrder();
		}

		public List<string> GetRandomListOrder()
		{
			if (_orderStrategy != null)
			{
				return _orderStrategy.GetRandomListOrder();
			}
			return _recipe.GetRandomListIngForOrder();
		}

		public OrderSpec[] ConvertOrderData(string encodedOrder)
		{
			if (encodedOrder != null && _orderSpecCache.TryGetValue(encodedOrder, out OrderSpec[] cached))
			{
				return cached;
			}
			OrderSpec[] specs = _orderStrategy != null
				? _orderStrategy.ConvertOrderData(encodedOrder)
				: new OrderSpec[] { new OrderSpec(encodedOrder, encodedOrder) };
			for (int i = 0; i < specs.Length; i++)
			{
				specs[i] = specs[i].WithRecipe(encodedOrder);
			}
			if (encodedOrder != null)
			{
				_orderSpecCache[encodedOrder] = specs;
			}
			return specs;
		}

		public OrderSpec BuildOrderSpec(string orderId, List<string> allBaseIds = null)
		{
			if (_orderStrategy == null)
			{
				return new OrderSpec(orderId, orderId);
			}
			return allBaseIds == null
				? _orderStrategy.BuildSpec(orderId)
				: _orderStrategy.BuildRandomizedSpec(orderId, allBaseIds);
		}

		public Stack<string> ConvertSpawnDataToStack(CustomerSpawnData[] allSpawnData)
		{
			if (_orderStrategy != null)
			{
				return _orderStrategy.ConvertSpawnDataToStack(allSpawnData);
			}
			// TODO(unrecovered): fallback fills the stack from an unidentified static; only an empty stack is returned.
			return new Stack<string>();
		}

		public List<OrderSpec> GetItemOrderSpecs(DragItem item)
		{
			if (_orderStrategy != null)
			{
				return _orderStrategy.GetItemOrderSpecs(item);
			}
			List<OrderSpec> specs = new List<OrderSpec>();
			if (item != null)
			{
				specs.Add(new OrderSpec(item.GetId(), item.GetBaseId()));
			}
			return specs;
		}

		public bool TryGetOrderPieces(string recipe, out PieceSet pieces)
		{
			if (_orderStrategy != null)
			{
				return _orderStrategy.TryGetOrderPieces(recipe, out pieces);
			}
			// TODO(unrecovered): fallback copies a PieceSet from an unidentified static field (DAT_09189158+0xb8).
			pieces = default;
			return false;
		}

		public bool CanStillComplete(PieceSet has, PieceSet want)
		{
			return _orderStrategy == null || _orderStrategy.CanStillComplete(has, want);
		}

		public bool CanAddPieceNow(PieceSet has, int pieceKind)
		{
			return _orderStrategy == null || _orderStrategy.CanAddPieceNow(has, pieceKind);
		}

		public string SequenceOf(string id)
		{
			if (_orderStrategy != null)
			{
				return _orderStrategy.SequenceOf(id);
			}
			// TODO(unrecovered): fallback returns an unidentified static value.
			return null;
		}

		public bool SequenceFits(int dishKey, string has, string want)
		{
			return _orderStrategy == null || _orderStrategy.SequenceFits(dishKey, has, want);
		}

		public bool CanDishAdd(string baseId, PieceSet has, string ingId)
		{
			return _orderStrategy != null && _orderStrategy.CanDishAdd(baseId, has, ingId);
		}

		public bool CanAddTo(FlexibleDragItem dish, string ingId)
		{
			if (dish == null)
			{
				return false;
			}
			return CanDishAdd(dish.GetBaseId(), dish.Pieces, ingId);
		}

		public PieceOffer GetItemPieceOffer(DragItem item)
		{
			return _orderStrategy != null ? _orderStrategy.GetItemPieceOffer(item) : null;
		}

		public PieceOffer GetIdPieceOffer(string id)
		{
			return _orderStrategy != null ? _orderStrategy.GetIdPieceOffer(id) : null;
		}

		public bool TryGetFormOf(int dishKey, int pieceKind, out string formId)
		{
			formId = null;
			return _orderStrategy != null && _orderStrategy.TryGetFormOf(dishKey, pieceKind, out formId);
		}

		public int DishKeyOfId(string baseId)
		{
			return _orderStrategy != null ? _orderStrategy.DishKeyOfId(baseId) : OrderStrategy.NoDish;
		}

		public int DishKeyOfOrder(OrderSpec spec)
		{
			return _orderStrategy != null ? _orderStrategy.DishKeyOfOrder(spec) : OrderStrategy.NoDish;
		}

		public bool CanOpenDish(int dishKey, string itemBaseId, PieceSet itemPieces)
		{
			return _orderStrategy != null && _orderStrategy.CanOpenDish(dishKey, itemBaseId, itemPieces);
		}

		public bool TryGetDishResult(int dishKey, string currentId, string ingId, out string resultId)
		{
			if (_orderStrategy != null)
			{
				return _orderStrategy.TryGetDishResult(dishKey, currentId, ingId, out resultId);
			}
			return _recipe.TryGetCombineResult(currentId, ingId, out resultId);
		}

		public bool TryGetDishOpener(int dishKey, string ingId, out string resultId)
		{
			resultId = null;
			if (_orderStrategy != null)
			{
				return _orderStrategy.TryGetDishOpener(dishKey, ingId, out resultId);
			}
			return false;
		}

		public RcDishInfo GetDishInfoOfId(string id)
		{
			return _recipe != null ? _recipe.GetDishInfoOfId(id) : null;
		}

		public bool TryGetPlateVariant(int dishKey, out ServePlate plate, out DragItem dirtyPlate)
		{
			plate = null;
			dirtyPlate = null;
			return _orderStrategy != null && _orderStrategy.TryGetPlateVariant(dishKey, out plate, out dirtyPlate);
		}

		public IEnumerable<DragItem> GetFieldItems()
		{
			return _area.GetFieldItems();
		}

		public IEnumerable<DragItem> GetGridItems()
		{
			return _area.GetGridItems();
		}

		public List<string> GetListIngCanOrder()
		{
			return _recipe.GetListIngCanOrder();
		}

		public bool TryGetCombineResult(string id1, string id2, out string resultId)
		{
			resultId = null;
			return _recipe.TryGetCombineResult(id1, id2, out resultId);
		}

		public bool HasAnyCombine(string id)
		{
			return _recipe.HasAnyCombine(id);
		}

		public Sprite GetIngredientSprite(string id)
		{
			if (string.IsNullOrEmpty(id))
			{
				return null;
			}
			if (FlexibleId.IsFlexible(id))
			{
				UIHintFlexibleHelper helper = UIHintFlexibleHelper.Instance;
				return helper != null ? helper.CaptureSprite(id) : null;
			}
			return _recipe.GetRecipeComponent(id)?.displayConfig?.sprite;
		}

		public float GetIngredientDisplayScale(string id)
		{
			if (string.IsNullOrEmpty(id) || FlexibleId.IsFlexible(id))
			{
				return 1f;
			}
			RcDisplayConfig config = _recipe.GetRecipeComponent(id)?.displayConfig;
			float scale = config != null ? config.scale : 1f;
			return scale > 0f ? scale : 1f;
		}

		public Vector2 GetIngredientDisplayOffset(string id)
		{
			if (!string.IsNullOrEmpty(id) && !FlexibleId.IsFlexible(id))
			{
				RcDisplayConfig config = _recipe.GetRecipeComponent(id)?.displayConfig;
				if (config != null)
				{
					return config.offset;
				}
			}
			// TODO(unrecovered): fallback reads a static Vector2 from an unidentified class (DAT_0918cb68).
			return default;
		}

		public float GetStationCookDuration(string stationId, string resultId)
		{
			return _recipe.GetStationCookDuration(stationId, resultId);
		}

		public ToolUpgradeStat GetToolUpgrade(string toolId)
		{
			CakeLevelInitData initData = InitData;
			return initData == null ? ToolUpgradeStat.Default : initData.GetToolUpgrade(toolId);
		}

		public float GetUpgradedCookDuration(string toolId, float baseDuration)
		{
			// TODO(unrecovered): ToolUpgradeStat.ApplySpeed call shape is taken from the decompile and not checked against the CakeOrder API.
			if (baseDuration > 0f)
			{
				ToolUpgradeStat stat = GetToolUpgrade(toolId);
				float speed = stat.ApplySpeed(1f / baseDuration); // original static two-argument overload not present; instance overload used
				if (speed > 0f)
				{
					baseDuration = 1f / speed;
				}
			}
			return baseDuration;
		}

		public DragItem GetIngredientPrefab(string id)
		{
			return _recipe.GetIngredientPrefab(id);
		}

		public string GetIngredientName(string id)
		{
			return _recipe.GetIngredientName(id);
		}

		public int GetDishKind(string id)
		{
			return _recipe.GetDishKind(id);
		}

		public Sprite GetDishIconOfId(string id)
		{
			return _recipe.GetDishIconOfId(id);
		}

		public RcDishInfo GetDishInfo(int dishKind)
		{
			return _recipe.GetDishInfo(dishKind);
		}

		public List<RcDishInfo> GetDishInfosInLevelOrders()
		{
			// TODO(unrecovered): walks CakeLevelInitData level/order lists; member layout is not in the stubs.
			return null;
		}

		public List<List<RcDisplayConfig>> GetAllDisplayConfigInRecipe(string id, bool includeStations = true)
		{
			return _recipe.GetAllDisplayConfigInRecipe(id, includeStations);
		}

		public List<RcDisplayConfig> GetDisplayConfig(List<string> listId)
		{
			return _recipe.GetDisplayConfig(listId);
		}

		public bool TryGetDisplayIds(string id, List<string> result)
		{
			return _recipe.TryGetDisplayIds(id, result);
		}

		public bool TryCollectLeafInputs(string id, List<string> result)
		{
			return _recipe.TryCollectLeafInputs(id, result);
		}

		public bool TryGetDirectInputs(string id, List<string> result)
		{
			return _recipe.TryGetInputsOf(id, -1, result);
		}

		public RcDisplayConfig GetDisplayConfig(string id)
		{
			return _recipe.GetIngredientDisplayConfig(id);
		}

		public Sprite GetPrefabSprite(string id)
		{
			DragItem prefab = _recipe.GetIngredientPrefab(id);
			if (prefab == null)
			{
				return null;
			}
			SpriteRenderer renderer = prefab.GetComponentInChildren<SpriteRenderer>(true);
			return renderer != null ? renderer.sprite : null;
		}

		public bool WantsStationResult(string resultId)
		{
			return _orderStrategy == null || _orderStrategy.WantsStationResult(resultId);
		}

		public bool WantsStationResult(CookingStation station, string id)
		{
			if (station == null)
			{
				return true;
			}
			if (!station.AcceptsId(id))
			{
				return false;
			}
			return WantsStationResult(station.ResultIdIfFed(id));
		}

		public bool WantsAutoFeed(CookingStation station, string id)
		{
			if (station == null || !station.AcceptsId(id))
			{
				return false;
			}
			if (_orderStrategy == null)
			{
				return true;
			}
			if (_orderStrategy.WantsAutoStationResult(station.ResultIdIfFed(id)))
			{
				return true;
			}
			for (int i = 0; i < station.Groups.Count; i++)
			{
				StationInteractGroup group = station.Groups[i];
				if (group == null || !group.AcceptsId(id))
				{
					continue;
				}
				if (_orderStrategy.WantsAutoStationResult(station.ResultIdOfGroup(i)))
				{
					return true;
				}
			}
			return false;
		}

		public int StationResultDemand(string resultId)
		{
			return _orderStrategy != null ? _orderStrategy.StationResultDemand(resultId) : 0;
		}

		public bool WantsRefineInPlace(string refinedId)
		{
			return _orderStrategy != null && _orderStrategy.WantsRefineInPlace(refinedId);
		}

		public bool CanAutoFeed(CookingStation station, string id)
		{
			if (!WantsStationResult(station, id))
			{
				return false;
			}
			if (!WantsAutoFeed(station, id))
			{
				return false;
			}
			if (IsAnchorRouted(id))
			{
				return PickStationFor(id, null, false, out _) == station;
			}
			return true;
		}

		private bool IsAnchorRouted(string id)
		{
			return _recipe != null && _recipe.WaitsForAnchor(id);
		}

		private CookingStation PickStationFor(string id, Dictionary<CookingStation, StationIntake> ledger, bool requireExit, out int pickedGroup)
		{
			pickedGroup = -1;
			CookingStation best = null;
			int bestScore = int.MaxValue;
			foreach (CookingStation station in MessyController.Ins.GetCookingStations())
			{
				if (station == null)
				{
					continue;
				}
				int room = StationRoomFor(station, id, ledger, requireExit, out int group);
				if (room < 1 || group < 0)
				{
					continue;
				}
				if (group >= station.Groups.Count || !WantsStationResult(station, id))
				{
					continue;
				}
				int score = EmptySlots(station.Groups[group]) - InboundCount(_inbound, station, group) - InboundCount(ledger, station, group) - 1;
				if (score < bestScore)
				{
					bestScore = score;
					pickedGroup = group;
					best = station;
				}
			}
			return best;
		}

		private static int InboundCount(Dictionary<CookingStation, StationIntake> ledger, CookingStation station, int groupIndex)
		{
			if (ledger == null || !ledger.TryGetValue(station, out StationIntake intake))
			{
				return 0;
			}
			if (intake.GroupIndex != -1 && intake.GroupIndex != groupIndex)
			{
				return 0;
			}
			int sum = 0;
			foreach (int count in intake.UsedPerId.Values)
			{
				sum += count;
			}
			return sum;
		}

		private static int EmptySlots(StationInteractGroup group)
		{
			int empty = 0;
			foreach (StationSlot slot in group.slots)
			{
				if (!slot.isOccupied)
				{
					empty++;
				}
			}
			return empty;
		}

		public int CountInboundFor(string resultId)
		{
			int total = 0;
			foreach (KeyValuePair<CookingStation, StationIntake> pair in _inbound)
			{
				CookingStation station = pair.Key;
				StationIntake intake = pair.Value;
				if (station == null || intake == null)
				{
					continue;
				}
				foreach (KeyValuePair<string, int> used in intake.UsedPerId)
				{
					string resultOf = intake.GroupIndex == -1
						? station.ResultIdIfFed(used.Key)
						: station.ResultIdOfGroup(intake.GroupIndex);
					if (resultOf == resultId)
					{
						total += used.Value;
					}
				}
			}
			return total;
		}

		private bool TryClaimStation(string id, Dictionary<CookingStation, StationIntake> ledger, bool requireExit = false)
		{
			return TryClaimStation(id, ledger, requireExit, out _);
		}

		private bool TryClaimStation(string id, Dictionary<CookingStation, StationIntake> ledger, bool requireExit, out CookingStation claimed)
		{
			claimed = null;
			if (!IsAnchorRouted(id))
			{
				foreach (CookingStation station in MessyController.Ins.GetCookingStations())
				{
					int room = StationRoomFor(station, id, ledger, requireExit, out int group);
					if (room < 1 || !WantsStationResult(station, id))
					{
						continue;
					}
					Take(ledger, station, id, group);
					claimed = station;
					return true;
				}
				return false;
			}
			claimed = PickStationFor(id, ledger, requireExit, out int pickedGroup);
			if (claimed == null)
			{
				return false;
			}
			Take(ledger, claimed, id, pickedGroup);
			return true;
		}

		public int CountStationRoomFor(string id, int max)
		{
			if (max < 1)
			{
				return 0;
			}
			_roomClaims.Clear();
			int count = 0;
			while (count < max && TryClaimStation(id, _roomClaims, false, out _))
			{
				count++;
			}
			_roomClaims.Clear();
			return count;
		}

		private int StationRoomFor(CookingStation station, string id, Dictionary<CookingStation, StationIntake> ledger, bool requireExit, out int group)
		{
			group = -1;
			if (station == null)
			{
				return 0;
			}
			if (!station.TryGetIntakeGroup(id, out group, out int slots))
			{
				return 0;
			}
			if (requireExit && group != -1 && !station.IsCellAvailable(group, 1))
			{
				return 0;
			}
			if (!Deduct(_inbound, station, id, group, ref slots))
			{
				return 0;
			}
			if (!Deduct(ledger, station, id, group, ref slots))
			{
				return 0;
			}
			return slots;
		}

		private static bool Deduct(Dictionary<CookingStation, StationIntake> ledger, CookingStation station, string id, int group, ref int slots)
		{
			if (ledger == null || !ledger.TryGetValue(station, out StationIntake intake))
			{
				return true;
			}
			if (group != -1 && intake.GroupIndex != -1 && intake.GroupIndex != group)
			{
				return false;
			}
			if (intake.UsedPerId.TryGetValue(id, out int used))
			{
				slots -= used;
			}
			return true;
		}

		private static void Take(Dictionary<CookingStation, StationIntake> ledger, CookingStation station, string id, int group)
		{
			if (!ledger.TryGetValue(station, out StationIntake intake))
			{
				intake = new StationIntake();
				ledger[station] = intake;
			}
			if (group != -1)
			{
				intake.GroupIndex = group;
			}
			intake.UsedPerId.TryGetValue(id, out int count);
			intake.UsedPerId[id] = count + 1;
		}

		private static void Give(Dictionary<CookingStation, StationIntake> ledger, CookingStation station, string id)
		{
			if (ledger == null || !ledger.TryGetValue(station, out StationIntake intake))
			{
				return;
			}
			if (!intake.UsedPerId.TryGetValue(id, out int count) || count < 2)
			{
				intake.UsedPerId.Remove(id);
			}
			else
			{
				intake.UsedPerId[id] = count - 1;
			}
			if (intake.UsedPerId.Count == 0)
			{
				ledger.Remove(station);
			}
		}

		public void CollectBusyStations(IReadOnlyList<string> ids, List<CookingStation> result)
		{
			// TODO(unrecovered): busy-station selection loop depends on StationInteractGroup state checks that are not identified.
			result.Clear();
		}

		public void MarkInbound(CookingStation station, string id)
		{
			if (station == null)
			{
				return;
			}
			// TODO(unrecovered): first vtable probe (+0x1c8) before the TryGetAcceptingGroup fallback is not identified.
			if (!station.TryGetAcceptingGroup(id, out int group))
			{
				group = -1;
			}
			Take(_inbound, station, id, group);
		}

		public void ClearInbound(CookingStation station, string id)
		{
			if (station != null)
			{
				Give(_inbound, station, id);
			}
		}

		public bool IsInbound(CookingStation station)
		{
			return station != null && _inbound.ContainsKey(station);
		}

		public int InboundGroupOf(CookingStation station)
		{
			if (station == null)
			{
				return -1;
			}
			if (_inbound.TryGetValue(station, out StationIntake intake))
			{
				return intake.GroupIndex;
			}
			return -1;
		}

		public bool HasStationRoomFor(CookingStation station, string id)
		{
			// TODO(unrecovered): decompiled thunk to StationRoomFor with arguments that could not be recovered.
			return false;
		}

		public bool TryGetInteractableStation(string id, Vector3 fromPos, out CookingStation station)
		{
			station = null;
			if (IsAnchorRouted(id))
			{
				station = PickStationFor(id, null, false, out _);
				return station != null;
			}
			float best = float.MaxValue;
			foreach (CookingStation candidate in MessyController.Ins.GetCookingStations())
			{
				if (StationRoomFor(candidate, id, null, false, out _) < 1 || !WantsStationResult(candidate, id))
				{
					continue;
				}
				float distance = Vector2.Distance(fromPos, candidate.transform.position);
				if (distance < best)
				{
					best = distance;
					station = candidate;
				}
			}
			return station != null;
		}

		public LevelInfo(RecipeConfigSO recipe, AreaService area, OrderStrategy orderStrategy = null, LevelSkinSO levelSkin = null)
		{
			_orderSpecCache = new Dictionary<string, OrderSpec[]>();
			_claims = new Dictionary<CookingStation, StationIntake>();
			_roomClaims = new Dictionary<CookingStation, StationIntake>();
			_inbound = new Dictionary<CookingStation, StationIntake>();
			_recipe = recipe;
			_area = area;
			_orderStrategy = orderStrategy;
			_levelSkin = levelSkin;
		}

		public Sprite SkinSpriteFor(LevelSkinPart part)
		{
			// TODO(unrecovered): needs the level difficulty tag from CakeLevelInitData (member not in the stubs).
			return null;
		}

		public bool IsRecipe(string id)
		{
			return _recipe.IsRecipe(id);
		}

		public List<GridEffectType> GetAppliedGridEffects()
		{
			// TODO(unrecovered): reads CakeLevelInitData grid-effect list (member not in the stubs).
			return null;
		}

		public List<IngredientSlotStatus> GetAppliedSlotStatuses()
		{
			// TODO(unrecovered): depends on StackModeService.ResolveQueues output layout and CakeLevelInitData members.
			return null;
		}
	}
}
