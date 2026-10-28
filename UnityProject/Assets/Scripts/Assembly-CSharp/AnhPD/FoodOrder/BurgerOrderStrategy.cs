using System.Collections.Generic;
using CakeOrder.InGame;
using CakeOrder.InGame.Burger;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class BurgerOrderStrategy : OrderStrategy
	{
		[SerializeField]
		private int maxFillingsForDoubleBurger = 2;

		[SerializeField]
		[Range(0f, 1f)]
		private float burgerBias = 0.5f;

		[Header("Random ở piece space")]
		[Tooltip("Số nhân TỐI ĐA của một burger sinh ngẫu nhiên (chưa kể bun).")]
		[SerializeField]
		private int maxRandomFillings = 3;

		[Tooltip("Xác suất mỗi topping tuỳ chọn được thêm vào món (ớt/hành lá/sốt phô mai/đá).")]
		[SerializeField]
		[Range(0f, 1f)]
		private float toppingRate = 0.5f;

		private List<string> _listCanOrder;

		private string _flexibleId;

		// element order recovered by guess (raw array initializer data)
		private static readonly BurgerPiece[] ChickenTypes = new BurgerPiece[4]
		{
			BurgerPiece.ChickenBreast,
			BurgerPiece.ChickenWing,
			BurgerPiece.ChickenThigh,
			BurgerPiece.ChickenNugget
		};

		private List<BurgerPiece> _availablePieces;

		private Dictionary<string, PieceOffer> _idOffers;

		private List<string> ListCanOrder
		{
			get
			{
				if (_listCanOrder == null)
				{
					_listCanOrder = MessyController.Ins.Info.GetListIngCanOrder();
				}
				return _listCanOrder;
			}
		}

		private string FlexibleId
		{
			get
			{
				if (_flexibleId == null)
				{
					foreach (string item in ListCanOrder)
					{
						if (IsFlexibleId(item))
						{
							_flexibleId = item;
							break;
						}
					}
				}
				return _flexibleId;
			}
		}

		private List<BurgerPiece> AvailablePieces
		{
			get
			{
				if (_availablePieces != null)
				{
					return _availablePieces;
				}
				RecipeConfigSO recipeConfig = MessyController.Ins.recipeConfig;
				_availablePieces = new List<BurgerPiece>();
				foreach (BurgerPiece value in System.Enum.GetValues(typeof(BurgerPiece)))
				{
					if (recipeConfig.TryGetPreparedOfPiece((int)value, out var _))
					{
						_availablePieces.Add(value);
					}
				}
				return _availablePieces;
			}
		}

		private Dictionary<string, PieceOffer> IdOffers
		{
			get
			{
				if (_idOffers == null)
				{
					_idOffers = BuildIdOffers();
				}
				return _idOffers;
			}
		}

		public override List<string> GetRandomListOrder()
		{
			List<string> list = new List<string>();
			int num = Random.Range(1, 4);
			if (num > 0)
			{
				for (int i = 0; i < num; i++)
				{
					string item = ((!(burgerBias <= Random.value)) ? FlexibleId : ListCanOrder[Random.Range(0, ListCanOrder.Count)]);
					list.Add(item);
				}
				if (num >= 3)
				{
					EnforceMaxOneFlexible(list);
				}
				else if (num == 2)
				{
					EnsureAtLeastOneFlexible(list);
				}
			}
			return list;
		}

		private bool Has(BurgerPiece piece)
		{
			return AvailablePieces.Contains(piece);
		}

		public override string[] GenerateRandomRecipes()
		{
			int num = Random.Range(1, 4);
			List<string> list = new List<string>(num);
			List<int> list2 = new List<int>();
			for (int i = 0; i < num; i++)
			{
				List<BurgerPiece> list3 = RollDish();
				if (list3.Count != 0)
				{
					list2.Clear();
					foreach (BurgerPiece item in list3)
					{
						list2.Add((int)item);
					}
					list.Add(OrderRecipeCodec.Encode(0, list2));
				}
			}
			return list.ToArray();
		}

		private static List<BurgerPiece> DecodePieces(string recipe)
		{
			if (!OrderRecipeCodec.TryDecode(recipe, out var decoded))
			{
				return null;
			}
			int[] kinds = decoded.Pieces;
			List<BurgerPiece> list = new List<BurgerPiece>(kinds.Length);
			foreach (int num in kinds)
			{
				if (System.Enum.IsDefined(typeof(BurgerPiece), num))
				{
					list.Add((BurgerPiece)num);
				}
			}
			if (list.Count <= 0)
			{
				return null;
			}
			return list;
		}

		private List<BurgerPiece> RollDish()
		{
			List<int> list = new List<int>();
			if (Has(BurgerPiece.Bun))
			{
				list.Add(0);
			}
			if (HasAnyChicken())
			{
				list.Add(1);
			}
			if (Has(BurgerPiece.Potato))
			{
				list.Add(2);
			}
			if (Has(BurgerPiece.Soda))
			{
				list.Add(3);
			}
			if (list.Count == 0)
			{
				return new List<BurgerPiece>();
			}
			switch (list[Random.Range(0, list.Count)])
			{
			case 2:
				return RollPotato();
			case 1:
				return RollChicken();
			case 0:
				return RollBurger();
			default:
				return RollDrink();
			}
		}

		private bool HasAnyChicken()
		{
			BurgerPiece[] chickenTypes = ChickenTypes;
			for (int i = 0; i < chickenTypes.Length; i++)
			{
				if (Has(chickenTypes[i]))
				{
					return true;
				}
			}
			return false;
		}

		private List<BurgerPiece> RollBurger()
		{
			List<BurgerPiece> list = new List<BurgerPiece>();
			foreach (BurgerPiece availablePiece in AvailablePieces)
			{
				if (availablePiece != BurgerPiece.Bun && BurgerPieceTable.KindOf(availablePiece) == BurgerPieceTable.PieceKind.BurgerIngredient)
				{
					list.Add(availablePiece);
				}
			}
			List<BurgerPiece> list2 = new List<BurgerPiece>();
			list2.Add(BurgerPiece.Bun);
			int count = list.Count;
			int num = maxRandomFillings;
			if (num < 2)
			{
				num = 1;
			}
			num = Random.Range(1, num + 1);
			if (num <= count)
			{
				count = num;
			}
			for (int i = 0; i < count; i++)
			{
				int index = Random.Range(0, list.Count);
				list2.Add(list[index]);
				list.RemoveAt(index);
			}
			return list2;
		}

		private List<BurgerPiece> RollChicken()
		{
			List<BurgerPiece> list = new List<BurgerPiece>();
			BurgerPiece[] chickenTypes = ChickenTypes;
			foreach (BurgerPiece burgerPiece in chickenTypes)
			{
				if (Has(burgerPiece))
				{
					list.Add(burgerPiece);
				}
			}
			List<BurgerPiece> list2 = new List<BurgerPiece>();
			list2.Add(list[Random.Range(0, list.Count)]);
			AddOptional(list2, BurgerPiece.Chilly);
			AddOptional(list2, BurgerPiece.CheeseSauce);
			AddOptional(list2, BurgerPiece.Chives);
			return list2;
		}

		private List<BurgerPiece> RollPotato()
		{
			List<BurgerPiece> list = new List<BurgerPiece>();
			list.Add(BurgerPiece.Potato);
			AddOptional(list, BurgerPiece.Chives);
			AddOptional(list, BurgerPiece.CheeseSauce);
			return list;
		}

		private List<BurgerPiece> RollDrink()
		{
			List<BurgerPiece> list = new List<BurgerPiece>();
			list.Add(BurgerPiece.Soda);
			AddOptional(list, BurgerPiece.Ice);
			return list;
		}

		private void AddOptional(List<BurgerPiece> dish, BurgerPiece piece)
		{
			if (Has(piece) && Random.value < toppingRate)
			{
				dish.Add(piece);
			}
		}

		public override List<OrderSpec> GetItemOrderSpecs(DragItem item)
		{
			if (item is FlexibleKFCCombo flexibleKFCCombo)
			{
				List<string> subOrderIds = flexibleKFCCombo.GetSubOrderIds();
				List<OrderSpec> list = new List<OrderSpec>(subOrderIds.Count);
				foreach (string item2 in subOrderIds)
				{
					list.Add(BuildSpec(item2));
				}
				return list;
			}
			return base.GetItemOrderSpecs(item);
		}

		protected override string RandomFlexibleId(FlexibleDragItem prefab, List<string> allBaseIds)
		{
			int maxCount = 0;
			if (allBaseIds != null)
			{
				int num = 0;
				foreach (string allBaseId in allBaseIds)
				{
					if (IsFlexibleId(allBaseId))
					{
						num++;
					}
				}
				if (num >= 2 && prefab is FlexibleBurger)
				{
					maxCount = maxFillingsForDoubleBurger;
				}
			}
			return prefab.BuildRandomId(maxCount);
		}

		public override OrderSpec[] ConvertOrderData(string encodedOrder)
		{
			List<BurgerPiece> list = DecodePieces(encodedOrder);
			if (list == null)
			{
				return new OrderSpec[1] { BuildSpec(encodedOrder) };
			}
			List<OrderSpec> list2 = new List<OrderSpec>();
			List<BurgerPiece> list3 = new List<BurgerPiece>();
			BurgerPiece? chickenType = null;
			bool spicy = false;
			bool cheese = false;
			bool chives = false;
			bool hasPotato = false;
			bool hasIce = false;
			bool hasSoda = false;
			foreach (BurgerPiece item in list)
			{
				if (!BurgerPieceTable.TryGetPieceInfo(item, out var info))
				{
					continue;
				}
				switch (info.Kind)
				{
				case BurgerPieceTable.PieceKind.Chicken:
					chickenType = item;
					continue;
				case BurgerPieceTable.PieceKind.ChickenFlavor:
					spicy = true;
					continue;
				case BurgerPieceTable.PieceKind.Topping:
					cheese |= item != BurgerPiece.Chives;
					chives |= item == BurgerPiece.Chives;
					continue;
				case BurgerPieceTable.PieceKind.SubDish:
					hasPotato = true;
					continue;
				case BurgerPieceTable.PieceKind.Drink:
					hasIce |= item != BurgerPiece.Soda;
					hasSoda |= item == BurgerPiece.Soda;
					continue;
				}
				list3.Add(item);
			}
			if (list3.Count < 2)
			{
				if (list3.Count == 1 && MessyController.Ins.recipeConfig.TryGetPreparedOfPiece((int)list3[0], out var preparedId))
				{
					list2.Add(new OrderSpec(preparedId, preparedId, PieceSet.One((int)list3[0]), hasPieces: true));
				}
			}
			else
			{
				List<string> list4 = new List<string>(list3.Count);
				PieceSet pieces = PieceSet.Empty;
				foreach (BurgerPiece item2 in list3)
				{
					list4.Add(BurgerPieceTable.BurgerCodeOf(item2));
					pieces = pieces.Add((int)item2);
				}
				list4.Sort();
				if (pieces[0] == 0)
				{
					Debug.LogError(string.Format("[BurgerOrderStrategy] Recipe '{0}' has no bun: {1}", encodedOrder, pieces) /* literal recovered by guess */);
				}
				string displayId = BurgerPieceTable.BurgerBaseId + "-flex-" + string.Concat(list4);
				list2.Add(new OrderSpec(displayId, BurgerPieceTable.BurgerBaseId, pieces, hasPieces: true));
			}
			if (chickenType.HasValue)
			{
				string text = BurgerPieceTable.BuildChickenId(chickenType.Value, spicy, cheese, chives);
				PieceSet pieces2 = PieceSet.One((int)chickenType.Value);
				if (spicy)
				{
					pieces2 = pieces2.Add(14);
				}
				if (cheese)
				{
					pieces2 = pieces2.Add(16);
				}
				if (chives)
				{
					pieces2 = pieces2.Add(15);
				}
				if (text != null)
				{
					list2.Add(new OrderSpec(text, BurgerPieceTable.ChickenBaseId, pieces2, hasPieces: true));
				}
			}
			if (hasPotato)
			{
				PieceSet pieces3 = PieceSet.One(13);
				if (!chickenType.HasValue)
				{
					if (chives)
					{
						pieces3 = pieces3.Add(15);
					}
					if (cheese)
					{
						pieces3 = pieces3.Add(16);
					}
				}
				if (!MessyController.Ins.recipeConfig.TryGetPreparedOfPieceSet(pieces3, out var preparedId2))
				{
					Debug.LogError(string.Format("[BurgerOrderStrategy] No prepared id for potato set {0} in recipe '{1}'", pieces3, encodedOrder) /* literal recovered by guess */);
				}
				else
				{
					list2.Add(new OrderSpec(preparedId2, preparedId2, pieces3, hasPieces: true));
				}
			}
			if (hasIce || hasSoda)
			{
				PieceSet pieces4 = PieceSet.One(7);
				if (hasIce)
				{
					pieces4 = pieces4.Add(8);
				}
				if (!MessyController.Ins.recipeConfig.TryGetPreparedOfPieceSet(pieces4, out var preparedId3))
				{
					Debug.LogError(string.Format("[BurgerOrderStrategy] No prepared id for drink set {0}", pieces4) /* literal recovered by guess */);
				}
				else
				{
					list2.Add(new OrderSpec(preparedId3, preparedId3, pieces4, hasPieces: true));
				}
			}
			if (list2.Count != 0)
			{
				return list2.ToArray();
			}
			return new OrderSpec[1] { BuildSpec(encodedOrder) };
		}

		public override Stack<string> ConvertSpawnDataToStack(CustomerSpawnData[] allSpawnData)
		{
			List<string> list = new List<string>();
			RecipeConfigSO recipeConfig = MessyController.Ins.recipeConfig;
			foreach (CustomerSpawnData customerSpawnData in allSpawnData)
			{
				if (customerSpawnData == null || customerSpawnData.orders == null)
				{
					continue;
				}
				foreach (CustomerSingleOrderSpawnData order in customerSpawnData.orders)
				{
					List<BurgerPiece> list2 = DecodePieces(order.recipe);
					if (list2 == null)
					{
						continue;
					}
					foreach (BurgerPiece item in list2)
					{
						if (recipeConfig.TryGetRawOfPiece((int)item, out var rawId) || recipeConfig.TryGetPreparedOfPiece((int)item, out rawId))
						{
							list.Add(rawId);
						}
					}
				}
			}
			list.Reverse();
			return new Stack<string>(list);
		}

		public override bool TryGetOrderPieces(string recipe, out PieceSet pieces)
		{
			pieces = PieceSet.Empty;
			List<BurgerPiece> list = DecodePieces(recipe);
			if (list == null)
			{
				return false;
			}
			foreach (BurgerPiece item in list)
			{
				if (BurgerPieceTable.IsKnownPiece(item))
				{
					pieces = pieces.Add((int)item);
				}
			}
			return !pieces.IsEmpty;
		}

		private static Dictionary<string, PieceOffer> BuildIdOffers()
		{
			Dictionary<string, PieceOffer> dictionary = new Dictionary<string, PieceOffer>();
			foreach (var (key, pieces) in MessyController.Ins.recipeConfig.OfferingIngredients())
			{
				if (!IsChickenSet(pieces))
				{
					dictionary[key] = new PieceOffer
					{
						subsetOnly = true,
						priority = 1,
						pieces = pieces
					};
				}
			}
			return dictionary;
		}

		private static bool IsChickenSet(PieceSet pieces)
		{
			foreach (var (kind, count) in pieces)
			{
				if (BurgerPieceTable.KindOf((BurgerPiece)kind) == BurgerPieceTable.PieceKind.Chicken)
				{
					return true;
				}
			}
			return false;
		}

		public override PieceOffer GetIdPieceOffer(string id)
		{
			PieceOffer pieceOffer = ChickenOfferFromId(id);
			if (pieceOffer == null)
			{
				pieceOffer = BurgerOfferFromId(id);
				if (pieceOffer == null)
				{
					if (!IdOffers.TryGetValue(id, out var value))
					{
						return null;
					}
					return value;
				}
			}
			return pieceOffer;
		}

		private static PieceOffer ChickenOfferFromId(string id)
		{
			PieceSet pieceSet = BurgerPieceTable.ChickenPiecesOfId(id);
			if (pieceSet.IsEmpty)
			{
				return null;
			}
			return new PieceOffer
			{
				subsetOnly = true,
				pieces = pieceSet,
				priority = 0
			};
		}

		private static PieceOffer BurgerOfferFromId(string id)
		{
			if (string.IsNullOrEmpty(id))
			{
				return null;
			}
			if (!id.StartsWith(BurgerPieceTable.BurgerBaseId + "-flex-"))
			{
				return null;
			}
			return new PieceOffer
			{
				subsetOnly = true,
				pieces = BurgerPieceTable.BurgerPiecesOfId(id),
				priority = 0
			};
		}

		public override PieceOffer GetItemPieceOffer(DragItem item)
		{
			if (item != null && (item is FlexibleBurger || item is FlexibleKFC))
			{
				PieceSet pieces = ((FlexibleDragItem)item).Pieces;
				if (pieces.IsEmpty)
				{
					return null;
				}
				return new PieceOffer
				{
					subsetOnly = true,
					pieces = pieces,
					priority = 0
				};
			}
			return base.GetItemPieceOffer(item);
		}

		public override bool CanDishAdd(string baseId, PieceSet has, string ingId)
		{
			if (baseId == BurgerPieceTable.BurgerBaseId)
			{
				if (BurgerPieceTable.TryGetFilling(ingId, out FlexibleBurger.FillingType filling))
				{
					return filling != FlexibleBurger.FillingType.Bun;
				}
			}
			else if (baseId == BurgerPieceTable.ChickenBaseId && BurgerPieceTable.TryGetPieceOfPreparedId(ingId, out var piece) && (uint)(piece - 14) < 3u)
			{
				return has[(int)piece] == 0;
			}
			return false;
		}

		private void EnforceMaxOneFlexible(List<string> list)
		{
			bool flag = false;
			for (int i = 0; i < list.Count; i++)
			{
				bool flag2 = IsFlexibleId(list[i]);
				bool flag3 = flag2 | flag;
				if (flag2 && flag)
				{
					list[i] = GetRandomNonFlexibleId();
					flag3 = true;
				}
				flag = flag3;
			}
		}

		private void EnsureAtLeastOneFlexible(List<string> list)
		{
			foreach (string item in list)
			{
				if (IsFlexibleId(item))
				{
					return;
				}
			}
			list[Random.Range(0, list.Count)] = FlexibleId;
		}

		private string GetRandomNonFlexibleId()
		{
			for (int i = 0; i < 20; i++)
			{
				string text = ListCanOrder[Random.Range(0, ListCanOrder.Count)];
				if (!IsFlexibleId(text))
				{
					return text;
				}
			}
			return ListCanOrder[0];
		}

		private bool IsFlexibleId(string id)
		{
			DragItem ingredientPrefab = MessyController.Ins.Info.GetIngredientPrefab(id);
			return ingredientPrefab is FlexibleDragItem;
		}
	}
}
