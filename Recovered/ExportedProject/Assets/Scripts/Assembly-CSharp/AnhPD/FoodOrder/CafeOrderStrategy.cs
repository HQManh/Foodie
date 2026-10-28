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
		private int maxRandomAddons;

		[SerializeField]
		private int maxRandomToppings;

		[SerializeField]
		private CoffeePiece[] excludeFromRandom;

		private readonly List<CafeDish> _dishPool;

		private Dictionary<string, PieceOffer> _idOffers;

		private static RecipeConfigSO Config => null;

		private Dictionary<string, PieceOffer> IdOffers => null;

		public bool IsExcludedFromRandom(CoffeePiece piece)
		{
			return false;
		}

		public int MaxToppingsOf(CafeDish dish)
		{
			return 0;
		}

		public override string[] GenerateRandomRecipes()
		{
			return null;
		}

		private static List<CoffeePiece> DecodePieces(string recipe)
		{
			return null;
		}

		private List<CoffeePiece> RollDish()
		{
			return null;
		}

		private PieceSet RollFamily()
		{
			return default;
		}

		public override OrderSpec[] ConvertOrderData(string encodedOrder)
		{
			return null;
		}

		public override bool CanAddPieceNow(PieceSet has, int pieceKind)
		{
			return false;
		}

		public override bool CanDishAdd(string baseId, PieceSet has, string ingId)
		{
			return false;
		}

		public override List<OrderSpec> GetItemOrderSpecs(DragItem item)
		{
			return null;
		}

		public override PieceOffer GetItemPieceOffer(DragItem item)
		{
			return null;
		}

		public override PieceOffer GetIdPieceOffer(string id)
		{
			return null;
		}

		private static Dictionary<string, PieceOffer> BuildIdOffers()
		{
			return null;
		}

		public override Stack<string> ConvertSpawnDataToStack(CustomerSpawnData[] allSpawnData)
		{
			return null;
		}
	}
}
