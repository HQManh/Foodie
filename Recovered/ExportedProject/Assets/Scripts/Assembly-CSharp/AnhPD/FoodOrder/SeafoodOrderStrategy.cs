using System.Collections.Generic;
using CakeOrder.InGame;
using CookingGraph;

namespace AnhPD.FoodOrder
{
	public sealed class SeafoodOrderStrategy : OrderStrategy
	{
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

		public override int StationResultDemand(string resultId)
		{
			return 0;
		}

		private static Dictionary<string, int> UnclaimedDemand(MessyController level)
		{
			return null;
		}

		private static Dictionary<string, int> AvailableSupply(MessyController level)
		{
			return null;
		}

		public static Dictionary<string, int> CalculateMissingResults(CookingGraphAsset graph, IReadOnlyDictionary<string, int> desired, IReadOnlyDictionary<string, int> supply)
		{
			return null;
		}

		private static void AddCount(Dictionary<string, int> counts, string id, int amount)
		{
		}
	}
}
