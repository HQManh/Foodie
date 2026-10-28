using System.Collections.Generic;
using CakeOrder.InGame;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class OrderStrategy : MonoBehaviour
	{
		public const int NoDish = -1;

		private RecipeConfigSO recipeConfig => null;

		public virtual string GetRandomOrderId()
		{
			return null;
		}

		public virtual List<string> GetRandomListOrder()
		{
			return null;
		}

		public virtual string[] GenerateRandomRecipes()
		{
			return null;
		}

		public virtual OrderSpec[] ConvertOrderData(string encodedOrder)
		{
			return null;
		}

		public virtual List<OrderSpec> GetItemOrderSpecs(DragItem item)
		{
			return null;
		}

		public OrderSpec BuildSpec(string orderId)
		{
			return default;
		}

		public OrderSpec BuildRandomizedSpec(string orderId, List<string> allBaseIds)
		{
			return default;
		}

		protected virtual string RandomFlexibleId(FlexibleDragItem prefab, List<string> allBaseIds)
		{
			return null;
		}

		public virtual Stack<string> ConvertSpawnDataToStack(CustomerSpawnData[] allSpawnData)
		{
			return null;
		}

		public virtual bool CanStillComplete(PieceSet has, PieceSet want)
		{
			return false;
		}

		public virtual bool CanAddPieceNow(PieceSet has, int pieceKind)
		{
			return false;
		}

		public virtual string SequenceOf(string id)
		{
			return null;
		}

		public virtual bool SequenceFits(int dishKey, string has, string want)
		{
			return false;
		}

		public virtual bool CanDishAdd(string baseId, PieceSet has, string ingId)
		{
			return false;
		}

		public virtual bool TryGetOrderPieces(string recipe, out PieceSet pieces)
		{
			pieces = default;
			return false;
		}

		public virtual PieceOffer GetItemPieceOffer(DragItem item)
		{
			return null;
		}

		public virtual PieceOffer GetIdPieceOffer(string id)
		{
			return null;
		}

		public int DishKeyOfId(string baseId)
		{
			return 0;
		}

		public int DishKeyOfOrder(OrderSpec spec)
		{
			return 0;
		}

		public virtual bool WantsStationResult(string resultId)
		{
			return false;
		}

		public virtual int StationResultDemand(string resultId)
		{
			return 0;
		}

		public virtual bool WantsAutoStationResult(string resultId)
		{
			return false;
		}

		public virtual bool WantsRefineInPlace(string refinedId)
		{
			return false;
		}

		public virtual bool TryGetFormOf(int dishKey, int pieceKind, out string formId)
		{
			formId = null;
			return false;
		}

		public virtual bool CanOpenDish(int dishKey, string itemBaseId, PieceSet itemPieces)
		{
			return false;
		}

		public virtual bool TryGetDishResult(int dishKey, string currentId, string ingId, out string resultId)
		{
			resultId = null;
			return false;
		}

		public virtual bool TryGetDishOpener(int dishKey, string ingId, out string resultId)
		{
			resultId = null;
			return false;
		}

		public virtual bool TryGetPlateVariant(int dishKey, out ServePlate plate, out DragItem dirtyPlate)
		{
			plate = null;
			dirtyPlate = null;
			return false;
		}

		public virtual PieceSpawnInfo GetPieceSpawnInfo(int pieceKind)
		{
			return null;
		}
	}
}
