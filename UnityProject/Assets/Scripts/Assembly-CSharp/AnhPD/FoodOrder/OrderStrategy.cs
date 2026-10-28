using System.Collections.Generic;
using CakeOrder.InGame;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class OrderStrategy : MonoBehaviour
	{
		public const int NoDish = -1;

		private RecipeConfigSO recipeConfig => MessyController.Ins ? MessyController.Ins.recipeConfig : null;

		public virtual string GetRandomOrderId()
		{
			return recipeConfig.GetRandomIngIdForOrder();
		}

		public virtual List<string> GetRandomListOrder()
		{
			return recipeConfig.GetRandomListIngForOrder();
		}

		public virtual string[] GenerateRandomRecipes()
		{
			return null;
		}

		public virtual OrderSpec[] ConvertOrderData(string encodedOrder)
		{
			return new OrderSpec[] { BuildSpec(encodedOrder) };
		}

		public virtual List<OrderSpec> GetItemOrderSpecs(DragItem item)
		{
			PieceOffer offer = GetItemPieceOffer(item);
			List<OrderSpec> specs = new List<OrderSpec>();
			specs.Add(new OrderSpec(item.GetId(), item.GetBaseId(), offer != null ? offer.pieces : PieceSet.Empty, offer != null));
			return specs;
		}

		public OrderSpec BuildSpec(string orderId)
		{
			if (string.IsNullOrEmpty(orderId))
			{
				return default;
			}
			string baseId = FlexibleId.BaseOf(orderId);
			PieceOffer offer = GetIdPieceOffer(orderId);
			PieceSet pieces = (offer != null) ? offer.pieces : PieceSet.Empty;
			return new OrderSpec(orderId, baseId, pieces, offer != null);
		}

		public OrderSpec BuildRandomizedSpec(string orderId, List<string> allBaseIds)
		{
			if (string.IsNullOrEmpty(orderId))
			{
				return default;
			}
			if (!FlexibleId.IsFlexible(orderId))
			{
				FlexibleDragItem prefab = MessyController.Ins.Info.GetIngredientPrefab(orderId) as FlexibleDragItem;
				if (prefab != null)
				{
					string displayId = RandomFlexibleId(prefab, allBaseIds);
					if (displayId != null)
					{
						PieceOffer offer = GetIdPieceOffer(displayId) ?? GetIdPieceOffer(orderId);
						PieceSet pieces = (offer != null) ? offer.pieces : PieceSet.Empty;
						return new OrderSpec(displayId, orderId, pieces, offer != null);
					}
				}
			}
			return BuildSpec(orderId);
		}

		protected virtual string RandomFlexibleId(FlexibleDragItem prefab, List<string> allBaseIds)
		{
			return prefab.BuildRandomId(0);
		}

		public virtual Stack<string> ConvertSpawnDataToStack(CustomerSpawnData[] allSpawnData)
		{
			return new Stack<string>();
		}

		public virtual bool CanStillComplete(PieceSet has, PieceSet want)
		{
			PieceSet current = has;
			bool added;
			do
			{
				added = false;
				foreach (var (kind, count) in want)
				{
					if (current[kind] < count && CanAddPieceNow(current, kind))
					{
						current = current.Add(kind, 1);
						added = true;
					}
				}
			}
			while (added);
			return want.MissingFrom(current) == 0;
		}

		public virtual bool CanAddPieceNow(PieceSet has, int pieceKind)
		{
			return true;
		}

		public virtual string SequenceOf(string id)
		{
			return string.Empty;
		}

		public virtual bool SequenceFits(int dishKey, string has, string want)
		{
			return true;
		}

		public virtual bool CanDishAdd(string baseId, PieceSet has, string ingId)
		{
			PieceSet pieces = PieceLookup.PiecesOf(ingId);
			if (pieces.TotalCount == 1)
			{
				foreach (var (kind, _) in pieces)
				{
					return CanAddPieceNow(has, kind);
				}
			}
			return false;
		}

		public virtual bool TryGetOrderPieces(string recipe, out PieceSet pieces)
		{
			pieces = PieceSet.Empty;
			if (!OrderRecipeCodec.TryDecode(recipe, out OrderRecipe decoded))
			{
				return false;
			}
			foreach (int kind in decoded.Pieces)
			{
				if ((uint)kind < 0x30u)
				{
					pieces = pieces.Add(kind, 1);
				}
			}
			return !pieces.IsEmpty;
		}

		public virtual PieceOffer GetItemPieceOffer(DragItem item)
		{
			return GetIdPieceOffer(item.GetBaseId());
		}

		public virtual PieceOffer GetIdPieceOffer(string id)
		{
			return null;
		}

		public int DishKeyOfId(string baseId)
		{
			RecipeConfigSO config = recipeConfig;
			if (config != null)
			{
				int dishKey = config.GetDishKind(baseId);
				if (dishKey != 0)
				{
					return dishKey;
				}
			}
			return -1;
		}

		public int DishKeyOfOrder(OrderSpec spec)
		{
			return DishKeyOfId(spec.BaseId);
		}

		public virtual bool WantsStationResult(string resultId)
		{
			return true;
		}

		public virtual int StationResultDemand(string resultId)
		{
			return 0;
		}

		public virtual bool WantsAutoStationResult(string resultId)
		{
			return WantsStationResult(resultId);
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
			if (dishKey != NoDish)
			{
				return DishKeyOfId(itemBaseId) == dishKey;
			}
			return false;
		}

		public virtual bool TryGetDishResult(int dishKey, string currentId, string ingId, out string resultId)
		{
			resultId = null;
			RecipeConfigSO config = recipeConfig;
			return config != null && config.TryGetCombineResult(currentId, ingId, out resultId);
		}

		public virtual bool TryGetDishOpener(int dishKey, string ingId, out string resultId)
		{
			resultId = null;
			return false;
		}

		public virtual bool TryGetPlateVariant(int dishKey, out ServePlate plate, out DragItem dirtyPlate)
		{
			RecipeConfigSO config = recipeConfig;
			RcDishInfo info = config ? config.GetDishInfo(dishKey) : null;
			plate = info != null ? info.plate : null;
			dirtyPlate = info != null ? info.dirtyPlate : null;
			return plate;
		}

		public virtual PieceSpawnInfo GetPieceSpawnInfo(int pieceKind)
		{
			return null;
		}
	}
}
