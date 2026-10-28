using System;
using System.Collections.Generic;
using CakeOrder.InGame;
using CakeOrder.InGame.Pasta;

namespace AnhPD.FoodOrder
{
	public sealed class PastaOrderStrategy : OrderStrategy
	{
		private readonly List<PieceSet> gatheredSaucePieces = new List<PieceSet>();

		private RecipeConfigSO Config
		{
			get
			{
				if (!(MessyController.Ins != null))
				{
					return null;
				}
				return MessyController.Ins.recipeConfig;
			}
		}

		public override OrderSpec[] ConvertOrderData(string encodedOrder)
		{
			if (!OrderRecipeCodec.TryDecode(encodedOrder, out var decoded))
			{
				throw new InvalidOperationException("Invalid Pasta recipe: " + encodedOrder /* decoded from the metadata */);
			}
			PieceSet pieces = PieceSet.Empty;
			foreach (int piece in decoded.Pieces)
			{
				if (piece >= PastaPieceTable.PieceCount)
				{
					throw new InvalidOperationException("Pasta piece index out of range." /* decoded from the metadata */);
				}
				pieces = pieces.Add(piece);
			}
			PastaDish dish = (PastaDish)decoded.Dish;
			if (!PastaPieceTable.IsComplete(dish, pieces))
			{
				throw new InvalidOperationException("Invalid Pasta dish state: " + encodedOrder /* decoded from the metadata */);
			}
			string baseId = PastaPieceTable.BaseId(dish);
			string displayId = FlexiblePieceId.Build(baseId, pieces);
			return new OrderSpec[1] { new OrderSpec(displayId, baseId, pieces, hasPieces: true) };
		}

		public override string[] GenerateRandomRecipes()
		{
			List<PastaDish> list = new List<PastaDish>();
			for (int i = 1; i < 5; i++)
			{
				PastaDish dish = (PastaDish)i;
				if (Config != null && Config.GetIngredientPrefab(PastaPieceTable.BaseId(dish)) != null)
				{
					list.Add(dish);
				}
			}
			if (list.Count == 0)
			{
				return Array.Empty<string>();
			}
			PastaDish pastaDish = list[UnityEngine.Random.Range(0, list.Count)];
			PieceSet pieces = PastaPieceTable.Roll(pastaDish);
			List<int> kinds = new List<int>();
			foreach (var (kind, count) in pieces)
			{
				for (int j = 0; j < count; j++)
				{
					kinds.Add(kind);
				}
			}
			return new string[1] { OrderRecipeCodec.Encode((int)pastaDish, kinds) };
		}

		public override Stack<string> ConvertSpawnDataToStack(CustomerSpawnData[] customers)
		{
			List<string> list = new List<string>();
			RecipeConfigSO config = Config;
			if (customers == null || config == null)
			{
				return new Stack<string>();
			}
			List<string> spawnIds = new List<string>();
			foreach (CustomerSpawnData customer in customers)
			{
				if (customer == null || customer.orders == null)
				{
					continue;
				}
				foreach (CustomerSingleOrderSpawnData order in customer.orders)
				{
					if (!OrderRecipeCodec.TryDecode(order.recipe, out var decoded))
					{
						continue;
					}
					foreach (int piece in decoded.Pieces)
					{
						spawnIds.Clear();
						config.CollectSpawnIdsOfPiece(piece, spawnIds);
						list.AddRange(spawnIds);
					}
				}
			}
			list.Reverse();
			return new Stack<string>(list);
		}

		public override PieceOffer GetIdPieceOffer(string id)
		{
			if (PastaPieceTable.TryGetDish(FlexibleId.BaseOf(id), out var dish))
			{
				if (!PastaPieceTable.TryDecode(dish, id, out var pieces))
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
			if (Config == null)
			{
				return null;
			}
			RcPieceConfig pieceConfig = Config.GetPieceConfig(id);
			if (pieceConfig == null || !pieceConfig.Offers)
			{
				return null;
			}
			if (!PastaPieceTable.TryGetPiece(id, out var piece))
			{
				return null;
			}
			return new PieceOffer
			{
				subsetOnly = true,
				pieces = PieceSet.One(piece),
				priority = 1
			};
		}

		public override PieceOffer GetItemPieceOffer(DragItem item)
		{
			if (item is FlexiblePastaItem flexiblePastaItem)
			{
				if (!PastaPieceTable.IsValid(flexiblePastaItem.Dish, flexiblePastaItem.Pieces, complete: false))
				{
					return null;
				}
				return new PieceOffer
				{
					subsetOnly = true,
					pieces = flexiblePastaItem.Pieces,
					priority = 0
				};
			}
			if (item != null)
			{
				return GetIdPieceOffer(item.GetId());
			}
			return null;
		}

		public override List<OrderSpec> GetItemOrderSpecs(DragItem item)
		{
			if (item is FlexiblePastaItem flexiblePastaItem && !flexiblePastaItem.IsComplete)
			{
				return new List<OrderSpec>();
			}
			return base.GetItemOrderSpecs(item);
		}

		public override bool TryGetOrderPieces(string encodedOrder, out PieceSet pieces)
		{
			pieces = PieceSet.Empty;
			if (!OrderRecipeCodec.TryDecode(encodedOrder, out var decoded))
			{
				return false;
			}
			foreach (int piece in decoded.Pieces)
			{
				if (piece >= PastaPieceTable.PieceCount)
				{
					pieces = PieceSet.Empty;
					return false;
				}
				pieces = pieces.Add(piece);
			}
			if (!PastaPieceTable.IsComplete((PastaDish)decoded.Dish, pieces))
			{
				pieces = PieceSet.Empty;
				return false;
			}
			return true;
		}

		public override bool TryGetPlateVariant(int dishKey, out ServePlate plate, out DragItem dirtyPlate)
		{
			RcDishInfo rcDishInfo = ((Config != null) ? Config.GetDishInfo(dishKey) : null);
			if (rcDishInfo != null)
			{
				plate = rcDishInfo.plate;
				dirtyPlate = rcDishInfo.dirtyPlate;
			}
			else
			{
				plate = null;
				dirtyPlate = null;
			}
			return plate != null;
		}

		public override bool CanOpenDish(int dishKey, string itemBaseId, PieceSet itemPieces)
		{
			return PastaPieceTable.CanOpenPlate((PastaDish)dishKey, itemBaseId, itemPieces);
		}

		public override bool TryGetDishOpener(int dishKey, string ingId, out string resultId)
		{
			resultId = null;
			PastaDish dish = (PastaDish)dishKey;
			PieceSet pieces = PastaPieceTable.PredictOpen(dish, ingId);
			if (PastaPieceTable.CanOpenPlate(dish, FlexibleId.BaseOf(ingId), pieces))
			{
				resultId = PastaPieceTable.BaseId(dish);
				if (Config != null)
				{
					return Config.GetIngredientPrefab(resultId) is FlexiblePastaItem;
				}
			}
			return false;
		}

		public override bool TryGetDishResult(int dishKey, string currentId, string ingId, out string resultId)
		{
			resultId = null;
			PieceSet pieceSet = PastaPieceTable.PredictCombine((PastaDish)dishKey, currentId, ingId);
			return !pieceSet.IsEmpty;
		}

		public override bool CanDishAdd(string baseId, PieceSet has, string ingId)
		{
			if (!PastaPieceTable.TryGetDish(baseId, out var dish))
			{
				return false;
			}
			return PastaPieceTable.CanAdd(dish, has, ingId);
		}

		public override bool CanStillComplete(PieceSet has, PieceSet want)
		{
			if (want.Covers(has))
			{
				for (int i = 1; i < 5; i++)
				{
					PastaDish dish = (PastaDish)i;
					if (PastaPieceTable.IsComplete(dish, want))
					{
						if (has.IsEmpty)
						{
							return true;
						}
						if (PastaPieceTable.IsValid(dish, has, complete: false))
						{
							return true;
						}
					}
				}
			}
			return false;
		}

		public override bool CanAddPieceNow(PieceSet has, int pieceKind)
		{
			if (pieceKind < 0 || pieceKind >= PastaPieceTable.PieceCount)
			{
				return false;
			}
			for (int i = 1; i < 5; i++)
			{
				if (PastaPieceTable.IsValid((PastaDish)i, has.Add(pieceKind), complete: false))
				{
					return true;
				}
			}
			return false;
		}

		public override PieceSpawnInfo GetPieceSpawnInfo(int pieceKind)
		{
			if (Config == null || !Config.TryGetSpawnIdOfPiece(pieceKind, out var id))
			{
				return null;
			}
			return new PieceSpawnInfo
			{
				spawnId = id
			};
		}

		public override bool WantsStationResult(string resultId)
		{
			// TODO(unrecovered): very large body using unnamed LINQ helpers and station/shelf internals (uses gatheredSaucePieces); not reconstructed
			return false;
		}
	}
}
