using System;
using System.Collections.Generic;
using CakeOrder.InGame;
using CakeOrder.InGame.IceCream;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IceCreamOrderStrategy : OrderStrategy
	{
		[SerializeField]
		private int maxRandomToppings;

		private static readonly IceCreamDish[] RollableDishes = new IceCreamDish[]
		{
			IceCreamDish.IceCream,
			IceCreamDish.ShaveIce,
			IceCreamDish.Milkshake,
			IceCreamDish.Smoothie,
			IceCreamDish.CreamOnBeach,
			IceCreamDish.Burger,
			IceCreamDish.IceCreamCup
		};

		private readonly List<PieceSet> _gathered = new List<PieceSet>();

		private Dictionary<string, PieceOffer> _idOffers;

		private static RecipeConfigSO Config => (MessyController.Ins != null) ? MessyController.Ins.recipeConfig : null;

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

		public override string[] GenerateRandomRecipes()
		{
			RecipeConfigSO config = Config;
			if (config == null)
			{
				return Array.Empty<string>();
			}

			List<IceCreamDish> list = new List<IceCreamDish>();
			foreach (IceCreamDish dish in RollableDishes)
			{
				if (config.TryGetDishBaseId((int)dish, out string _))
				{
					list.Add(dish);
				}
			}

			if (list.Count == 0)
			{
				return Array.Empty<string>();
			}

			int num = UnityEngine.Random.Range(1, 4);
			List<string> result = new List<string>(num);
			List<int> tempPieces = new List<int>();

			for (int i = 0; i < num; i++)
			{
				IceCreamDish dish2 = list[UnityEngine.Random.Range(0, list.Count)];
				PieceSet pieceSet = IceCreamPieceTable.Roll(dish2, maxRandomToppings, CanShowOf(config, dish2));

				if (!pieceSet.IsEmpty)
				{
					tempPieces.Clear();
					foreach (var (kind, kindCount) in pieceSet)
					{
						for (int n = 0; n < kindCount; n++) tempPieces.Add(kind);
					}
					result.Add(OrderRecipeCodec.Encode((int)dish2, tempPieces));
				}
			}

			return result.ToArray();
		}

		private static Func<IceCreamPiece, bool> CanShowOf(RecipeConfigSO config, IceCreamDish dish)
		{
			if (config == null) return null;
			if (config.TryGetDishBaseId((int)dish, out string baseId))
			{
				IIceCreamPieceView view = config.GetIngredientPrefab(baseId) as IIceCreamPieceView;
				if (view != null)
				{
					return view.CanShow;
				}
			}
			return null;
		}

		public override Stack<string> ConvertSpawnDataToStack(CustomerSpawnData[] allSpawnData)
		{
			Stack<string> stack = new Stack<string>();
			RecipeConfigSO config = Config;
			if (allSpawnData == null || config == null)
			{
				return stack;
			}

			foreach (CustomerSpawnData data in allSpawnData)
			{
				if (data != null && data.orderData != null)
				{
					foreach (string encoded in data.orderData)
					{
						if (TryDecodeRecipe(encoded, out int dishKey, out List<int> pieces))
						{
							stack.Push(OrderRecipeCodec.Encode(dishKey, pieces));
						}
					}
				}
			}

			return stack;
		}

		public override bool WantsStationResult(string resultId)
		{
			if (string.IsNullOrEmpty(resultId)) return false;
			if (IsGated(resultId, out IceCreamPiece piece))
			{
				return IceCreamPieceTable.IsWhippedCream(piece);
			}
			return false;
		}

		public override int StationResultDemand(string resultId)
		{
			if (string.IsNullOrEmpty(resultId)) return 0;
			if (IsGated(resultId, out IceCreamPiece piece))
			{
				return IceCreamPieceTable.IsWhippedCream(piece) ? 1 : 0;
			}
			return 0;
		}

		private static bool IsGated(string resultId, out IceCreamPiece piece)
		{
			if (IceCreamPieceTable.TryGetPiece(resultId, out piece))
			{
				return true;
			}
			piece = default;
			return false;
		}

		public override bool TryGetFormOf(int dishKey, int pieceKind, out string formId)
		{
			formId = null;
			var piece = (IceCreamPiece)pieceKind;
			if (!IceCreamPieceTable.IsFlavor(piece)) return false;

			// literal 4 taken from the pseudocode; the IceCreamDish member it corresponds to was not verified
			if (dishKey == 4)
			{
				return IceCreamPieceTable.TryGetRefinedOf(piece, out formId);
			}

			RecipeConfigSO config = Config;
			if (config == null) return false;
			return config.TryGetPreparedOfPiece(pieceKind, out formId);
		}

		private static bool TryDecodeRecipe(string encoded, out int dishKey, out List<int> pieces)
		{
			if (OrderRecipeCodec.TryDecode(encoded, out OrderRecipe decoded))
			{
				dishKey = decoded.Dish;
				pieces = new List<int>(decoded.Pieces ?? Array.Empty<int>());
				return true;
			}
			dishKey = 0;
			pieces = null;
			return false;
		}

		public override OrderSpec[] ConvertOrderData(string encodedOrder)
		{
			if (TryDecodeRecipe(encodedOrder, out int dishKey, out List<int> pieces))
			{
				PieceSet pieceSet = PieceSet.Empty;
				foreach (int p in pieces) pieceSet = pieceSet.Add(p);
				return new OrderSpec[] { new OrderSpec(encodedOrder, dishKey.ToString(System.Globalization.CultureInfo.InvariantCulture) /* no ice cream base-id constant; dish key used */, pieceSet, hasPieces: pieces.Count > 0) };
			}
			return Array.Empty<OrderSpec>();
		}

		public override bool CanOpenDish(int dishKey, string itemBaseId, PieceSet itemPieces)
		{
			return IceCreamPieceTable.CanOpen((IceCreamDish)dishKey, itemBaseId);
		}

		public override bool CanDishAdd(string baseId, PieceSet has, string ingId)
		{
			foreach (IceCreamDish dish in RollableDishes)
			{
				if (IceCreamPieceTable.CanDishAdd(dish, has, ingId))
				{
					return true;
				}
			}
			return false;
		}

		public override bool CanStillComplete(PieceSet has, PieceSet want)
		{
			if (!IceCreamPieceTable.SyrupCanStillLand(has, want)) return false;
			return IceCreamPieceTable.ScoopsCanStillLand(has, want);
		}

		public override string SequenceOf(string id)
		{
			return id;
		}

		public override bool SequenceFits(int dishKey, string has, string want)
		{
			return true;
		}

		public override bool TryGetDishResult(int dishKey, string currentId, string ingId, out string resultId)
		{
			resultId = null;
			return false;
		}

		public override bool TryGetDishOpener(int dishKey, string ingId, out string resultId)
		{
			resultId = null;
			if (IceCreamPieceTable.CanOpen((IceCreamDish)dishKey, ingId))
			{
				resultId = ingId;
				return true;
			}
			return false;
		}

		public override PieceOffer GetItemPieceOffer(DragItem item)
		{
			if (item == null) return null;
			return GetIdPieceOffer(item.GetId());
		}

		public override PieceOffer GetIdPieceOffer(string id)
		{
			if (string.IsNullOrEmpty(id)) return null;
			IdOffers.TryGetValue(id, out PieceOffer offer);
			return offer;
		}

		private static Dictionary<string, PieceOffer> BuildIdOffers()
		{
			Dictionary<string, PieceOffer> dict = new Dictionary<string, PieceOffer>();
			RecipeConfigSO config = Config;
			if (config == null) return dict;

			return dict;
		}
	}
}
