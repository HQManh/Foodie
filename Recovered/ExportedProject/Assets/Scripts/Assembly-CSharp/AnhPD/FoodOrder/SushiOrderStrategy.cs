using System.Collections.Generic;
using CakeOrder.InGame;
using CakeOrder.InGame.Sushi;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class SushiOrderStrategy : OrderStrategy
	{
		[SerializeField]
		private int maxRandomToppings;

		private static readonly SushiDish[] RollableDishes;

		private static readonly PieceSet TeaPieces;

		private readonly List<PieceSet> _gathered;

		private Dictionary<string, PieceOffer> _idOffers;

		private static RecipeConfigSO Config => null;

		private Dictionary<string, PieceOffer> IdOffers => null;

		public override string[] GenerateRandomRecipes()
		{
			return null;
		}

		private static bool CanRoll(RecipeConfigSO config, SushiDish dish)
		{
			return false;
		}

		private PieceSet Roll(SushiDish dish)
		{
			return default;
		}

		public override Stack<string> ConvertSpawnDataToStack(CustomerSpawnData[] allSpawnData)
		{
			return null;
		}

		public override bool WantsStationResult(string resultId)
		{
			return false;
		}

		public override int StationResultDemand(string resultId)
		{
			return 0;
		}

		public override bool TryGetFormOf(int dishKey, int pieceKind, out string formId)
		{
			formId = null;
			return false;
		}

		private static bool TryGetCutForm(string resultId, out SushiPiece piece, out string sliceId, out string cubeId)
		{
			piece = default;
			sliceId = null;
			cubeId = null;
			return false;
		}

		private static bool CubeRefinesSlice(string cubeId, string sliceId)
		{
			return false;
		}

		public override bool WantsRefineInPlace(string refinedId)
		{
			return false;
		}

		public override OrderSpec[] ConvertOrderData(string encodedOrder)
		{
			return null;
		}

		public override bool CanOpenDish(int dishKey, string itemBaseId, PieceSet itemPieces)
		{
			return false;
		}

		public override bool CanDishAdd(string baseId, PieceSet has, string ingId)
		{
			return false;
		}

		public override bool TryGetDishResult(int dishKey, string currentId, string ingId, out string resultId)
		{
			resultId = null;
			return false;
		}

		public override bool TryGetDishOpener(int dishKey, string ingId, out string resultId)
		{
			resultId = null;
			return false;
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
	}
}
