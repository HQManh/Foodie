using System.Collections.Generic;
using CakeOrder.InGame;
using CakeOrder.InGame.Coffee;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class CafeOrderStrategy : OrderStrategy
	{
		[Header("Random ở piece space")]
		[SerializeField]
		private int maxRandomAddons = 3;

		[SerializeField]
		private int maxRandomToppings = 3;

		[SerializeField]
		private CoffeePiece[] excludeFromRandom;

		private readonly List<CafeDish> _dishPool = new List<CafeDish>();

		private Dictionary<string, PieceOffer> _idOffers;

		private static RecipeConfigSO Config => MessyController.Ins.recipeConfig;

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

		public bool IsExcludedFromRandom(CoffeePiece piece)
		{
			if (excludeFromRandom != null)
			{
				for (int i = 0; i < excludeFromRandom.Length; i++)
				{
					if (excludeFromRandom[i] == piece)
					{
						return true;
					}
				}
			}
			return false;
		}

		public int MaxToppingsOf(CafeDish dish)
		{
			if (dish != CafeDish.ColdCoffee && dish != CafeDish.HotCoffee)
			{
				return maxRandomToppings;
			}
			return maxRandomAddons;
		}

		public override string[] GenerateRandomRecipes()
		{
			int num = Random.Range(1, 4);
			List<string> list = new List<string>(num);
			List<int> list2 = new List<int>();
			for (int i = 0; i < num; i++)
			{
				List<CoffeePiece> list3 = RollDish();
				if (list3.Count != 0)
				{
					list2.Clear();
					foreach (CoffeePiece item in list3)
					{
						list2.Add((int)item);
					}
					list.Add(OrderRecipeCodec.Encode(0, list2));
				}
			}
			return list.ToArray();
		}

		private static List<CoffeePiece> DecodePieces(string recipe)
		{
			if (!OrderRecipeCodec.TryDecode(recipe, out var decoded))
			{
				return null;
			}
			int[] pieces = decoded.Pieces;
			List<CoffeePiece> list = new List<CoffeePiece>(pieces.Length);
			foreach (int num in pieces)
			{
				if (System.Enum.IsDefined(typeof(CoffeePiece), num))
				{
					list.Add((CoffeePiece)num);
				}
			}
			if (list.Count <= 0)
			{
				return null;
			}
			return list;
		}

		private List<CoffeePiece> RollDish()
		{
			List<CoffeePiece> list = new List<CoffeePiece>();
			foreach (var (kind, count) in RollFamily())
			{
				for (int i = 0; i < count; i++)
				{
					list.Add((CoffeePiece)kind);
				}
			}
			return list;
		}

		private PieceSet RollFamily()
		{
			_dishPool.Clear();
			CafeDish[] dishes = CafePieceTable.Dishes;
			foreach (CafeDish cafeDish in dishes)
			{
				if (CafePieceTable.Available(cafeDish))
				{
					_dishPool.Add(cafeDish);
				}
			}
			if (_dishPool.Count == 0)
			{
				return PieceSet.Empty;
			}
			CafeDish cafeDish2 = _dishPool[Random.Range(0, _dishPool.Count)];
			return CafePieceTable.Roll(cafeDish2, MaxToppingsOf(cafeDish2));
		}

		private static bool AllPiecesServable(PieceSet pieces)
		{
			foreach (var (kind, count) in pieces)
			{
				if (!Config.TryGetPreparedOfPiece(kind, out var _))
				{
					return false;
				}
			}
			return true;
		}

		public override OrderSpec[] ConvertOrderData(string encodedOrder)
		{
			List<CoffeePiece> list = DecodePieces(encodedOrder);
			if (list != null)
			{
				List<OrderSpec> list2 = new List<OrderSpec>();
				CafeDish cafeDish = CafeDish.None;
				foreach (CoffeePiece item in list)
				{
					cafeDish = CafePieceTable.DishOfBase(item);
					if (cafeDish != CafeDish.None)
					{
						break;
					}
				}
				PieceSet dishPieces = PieceSet.Empty;
				PieceSet otherPieces = PieceSet.Empty;
				foreach (CoffeePiece item2 in list)
				{
					if (CafePieceTable.Belongs(cafeDish, item2))
					{
						dishPieces = dishPieces.Add((int)item2);
					}
					else
					{
						otherPieces = otherPieces.Add((int)item2);
					}
				}
				if (!dishPieces.IsEmpty)
				{
					string text = CafePieceTable.BaseIdOf(cafeDish);
					string displayId = FlexiblePieceId.Build(text, dishPieces);
					list2.Add(new OrderSpec(displayId, text, dishPieces, hasPieces: true));
					if (CafePieceTable.HasBasePiece(otherPieces))
					{
						Debug.LogWarning("[CafeOrderStrategy] Recipe '" + encodedOrder + "' has a second base piece: " + string.Format("{0} / {1}", cafeDish, otherPieces) /* literal recovered by guess */);
					}
				}
				else if (CafePieceTable.HasTopping(otherPieces) && !Config.TryGetPreparedOfPieceSet(otherPieces, out var _) && !AllPiecesServable(otherPieces))
				{
					// Toppings-only orders (e.g. strawberry + kiwi) are served piece by piece below; only report when a piece has no prepared item.
					Debug.LogError("[CafeOrderStrategy] Recipe '" + encodedOrder + "' has toppings but no base: " + string.Format("{0}", otherPieces) /* literal recovered by guess */);
				}
				if (!otherPieces.IsEmpty)
				{
					if (Config.TryGetPreparedOfPieceSet(otherPieces, out var preparedId))
					{
						list2.Add(new OrderSpec(preparedId, preparedId, otherPieces, hasPieces: true));
					}
					else
					{
						foreach (var (kind, count) in otherPieces)
						{
							if (Config.TryGetPreparedOfPiece(kind, out var preparedId2))
							{
								list2.Add(new OrderSpec(preparedId2, preparedId2, PieceSet.One(kind), hasPieces: true));
							}
						}
					}
				}
				if (list2.Count != 0)
				{
					return list2.ToArray();
				}
			}
			return new OrderSpec[1] { BuildSpec(encodedOrder) };
		}

		public override bool CanAddPieceNow(PieceSet has, int pieceKind)
		{
			return CafePieceTable.CanAdd(has, (CoffeePiece)pieceKind);
		}

		public override bool CanDishAdd(string baseId, PieceSet has, string ingId)
		{
			return CafePieceTable.CanDishAdd(CafePieceTable.DishOfBaseId(baseId), has, ingId);
		}

		public override List<OrderSpec> GetItemOrderSpecs(DragItem item)
		{
			List<OrderSpec> list = base.GetItemOrderSpecs(item);
			for (int i = 0; i < list.Count; i++)
			{
				OrderSpec orderSpec = list[i];
				if (orderSpec.HasPieces)
				{
					string text = CafePieceTable.BaseIdOf(CafePieceTable.DishOf(orderSpec.Pieces));
					if (!string.IsNullOrEmpty(text) && text != orderSpec.BaseId)
					{
						list[i] = new OrderSpec(orderSpec.DisplayId, text, orderSpec.Pieces, hasPieces: true, orderSpec.Recipe);
					}
				}
			}
			return list;
		}

		public override PieceOffer GetItemPieceOffer(DragItem item)
		{
			FlexibleDragItem flexibleDragItem = item as FlexibleDragItem;
			if (flexibleDragItem == null)
			{
				return base.GetItemPieceOffer(item);
			}
			return new PieceOffer
			{
				pieces = flexibleDragItem.Pieces,
				subsetOnly = true,
				priority = 0
			};
		}

		public override PieceOffer GetIdPieceOffer(string id)
		{
			CafeDish[] dishes = CafePieceTable.Dishes;
			foreach (CafeDish dish in dishes)
			{
				PieceSet pieceSet = FlexiblePieceId.PiecesOf(CafePieceTable.BaseIdOf(dish), id);
				if (!pieceSet.IsEmpty)
				{
					return new PieceOffer
					{
						subsetOnly = true,
						pieces = pieceSet,
						priority = 0
					};
				}
			}
			if (id == null)
			{
				id = string.Empty;
			}
			if (!IdOffers.TryGetValue(id, out var value))
			{
				return null;
			}
			return value;
		}

		private static Dictionary<string, PieceOffer> BuildIdOffers()
		{
			Dictionary<string, PieceOffer> dictionary = new Dictionary<string, PieceOffer>();
			foreach (var (key, pieces) in Config.OfferingIngredients())
			{
				dictionary[key] = new PieceOffer
				{
					subsetOnly = true,
					priority = 1,
					pieces = pieces
				};
			}
			return dictionary;
		}

		public override Stack<string> ConvertSpawnDataToStack(CustomerSpawnData[] allSpawnData)
		{
			List<string> list = new List<string>();
			RecipeConfigSO config = Config;
			List<string> list2 = new List<string>();
			foreach (CustomerSpawnData customerSpawnData in allSpawnData)
			{
				if (customerSpawnData == null || customerSpawnData.orders == null)
				{
					continue;
				}
				foreach (CustomerSingleOrderSpawnData order in customerSpawnData.orders)
				{
					List<CoffeePiece> list3 = DecodePieces(order.recipe);
					if (list3 == null)
					{
						continue;
					}
					foreach (CoffeePiece item in list3)
					{
						list2.Clear();
						config.CollectSpawnIdsOfPiece((int)item, list2);
						list.AddRange(list2);
					}
				}
			}
			list.Reverse();
			return new Stack<string>(list);
		}
	}
}
