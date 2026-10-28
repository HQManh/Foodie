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

		private static readonly IceCreamDish[] RollableDishes;

		private readonly List<PieceSet> _gathered;

		private Dictionary<string, PieceOffer> _idOffers;

		private static RecipeConfigSO Config => null;

		private Dictionary<string, PieceOffer> IdOffers => null;

		public override string[] GenerateRandomRecipes()
		{
			return null;
		}

		private static Func<IceCreamPiece, bool> CanShowOf(RecipeConfigSO config, IceCreamDish dish)
		{
			return null;
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

		private static bool IsGated(string resultId, out IceCreamPiece piece)
		{
			piece = default;
			return false;
		}

		public override bool TryGetFormOf(int dishKey, int pieceKind, out string formId)
		{
			formId = null;
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

		public override bool CanStillComplete(PieceSet has, PieceSet want)
		{
			return false;
		}

		public override string SequenceOf(string id)
		{
			return null;
		}

		public override bool SequenceFits(int dishKey, string has, string want)
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
