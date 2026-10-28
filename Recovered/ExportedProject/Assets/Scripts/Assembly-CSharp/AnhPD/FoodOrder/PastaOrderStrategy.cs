using System.Collections.Generic;
using CakeOrder.InGame;

namespace AnhPD.FoodOrder
{
	public sealed class PastaOrderStrategy : OrderStrategy
	{
		private readonly List<PieceSet> gatheredSaucePieces;

		private RecipeConfigSO Config => null;

		public override OrderSpec[] ConvertOrderData(string encodedOrder)
		{
			return null;
		}

		public override string[] GenerateRandomRecipes()
		{
			return null;
		}

		public override Stack<string> ConvertSpawnDataToStack(CustomerSpawnData[] customers)
		{
			return null;
		}

		public override PieceOffer GetIdPieceOffer(string id)
		{
			return null;
		}

		public override PieceOffer GetItemPieceOffer(DragItem item)
		{
			return null;
		}

		public override List<OrderSpec> GetItemOrderSpecs(DragItem item)
		{
			return null;
		}

		public override bool TryGetOrderPieces(string encodedOrder, out PieceSet pieces)
		{
			pieces = default;
			return false;
		}

		public override bool TryGetPlateVariant(int dishKey, out ServePlate plate, out DragItem dirtyPlate)
		{
			plate = null;
			dirtyPlate = null;
			return false;
		}

		public override bool CanOpenDish(int dishKey, string itemBaseId, PieceSet itemPieces)
		{
			return false;
		}

		public override bool TryGetDishOpener(int dishKey, string ingId, out string resultId)
		{
			resultId = null;
			return false;
		}

		public override bool TryGetDishResult(int dishKey, string currentId, string ingId, out string resultId)
		{
			resultId = null;
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

		public override bool CanAddPieceNow(PieceSet has, int pieceKind)
		{
			return false;
		}

		public override PieceSpawnInfo GetPieceSpawnInfo(int pieceKind)
		{
			return null;
		}

		public override bool WantsStationResult(string resultId)
		{
			return false;
		}
	}
}
