using System;
using System.Collections.Generic;
using CakeOrder.InGame;
using CakeOrder.InGame.Seafood;
using CookingGraph;

namespace AnhPD.FoodOrder
{
	public sealed class SeafoodOrderStrategy : OrderStrategy
	{
		private RecipeConfigSO Config => MessyController.Ins != null ? MessyController.Ins.recipeConfig : null;

		public override OrderSpec[] ConvertOrderData(string encodedOrder)
		{
			// Rebuilt from the decompiled code (same shape as the Pasta strategy). Error texts are decoded from the metadata.
			if (!OrderRecipeCodec.TryDecode(encodedOrder, out var decoded))
			{
				throw new InvalidOperationException("Invalid Seafood recipe: " + encodedOrder);
			}
			PieceSet pieces = PieceSet.Empty;
			foreach (int piece in decoded.Pieces)
			{
				if (piece > 25)
				{
					throw new InvalidOperationException("Seafood piece index out of range.");
				}
				pieces = pieces.Add(piece, 1);
			}
			SeafoodDish dish = (SeafoodDish)decoded.Dish;
			if (!SeafoodPieceTable.IsComplete(dish, pieces))
			{
				throw new InvalidOperationException("Invalid Seafood dish state: " + encodedOrder);
			}
			string baseId = SeafoodPieceTable.BaseId(dish);
			string displayId = FlexiblePieceId.Build(baseId, pieces);
			return new OrderSpec[1] { new OrderSpec(displayId, baseId, pieces, hasPieces: true) };
		}

		public override string[] GenerateRandomRecipes()
		{
			// Rebuilt from the decompiled code (same shape as the Pasta strategy, over dishes 1..6).
			List<SeafoodDish> available = new List<SeafoodDish>();
			for (int i = 1; i < 7; i++)
			{
				SeafoodDish dish = (SeafoodDish)i;
				if (Config != null && Config.GetIngredientPrefab(SeafoodPieceTable.BaseId(dish)) != null)
				{
					available.Add(dish);
				}
			}
			if (available.Count == 0)
			{
				return Array.Empty<string>();
			}
			SeafoodDish picked = available[UnityEngine.Random.Range(0, available.Count)];
			PieceSet pieces = SeafoodPieceTable.Roll(picked);
			List<int> kinds = new List<int>();
			foreach (var (kind, count) in pieces)
			{
				for (int j = 0; j < count; j++)
				{
					kinds.Add(kind);
				}
			}
			return new string[1] { OrderRecipeCodec.Encode((int)picked, kinds) };
		}

		public override Stack<string> ConvertSpawnDataToStack(CustomerSpawnData[] customers)
		{
			// Rebuilt from the decompiled code (same shape as the Pasta strategy).
			List<string> ids = new List<string>();
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
						ids.AddRange(spawnIds);
					}
				}
			}
			ids.Reverse();
			return new Stack<string>(ids);
		}

		public override PieceOffer GetIdPieceOffer(string id)
		{
			string baseId = FlexibleId.BaseOf(id);
			if (SeafoodPieceTable.TryGetDish(baseId, out SeafoodDish dish))
			{
				if (!SeafoodPieceTable.TryDecode(dish, id, out PieceSet decoded))
				{
					return null;
				}
				return new PieceOffer { pieces = decoded, subsetOnly = true, priority = 0 };
			}
			RecipeConfigSO config = Config;
			if (config == null)
			{
				return null;
			}
			RcPieceConfig pieceConfig = config.GetPieceConfig(id);
			if (pieceConfig == null || !pieceConfig.Offers)
			{
				return null;
			}
			if (!SeafoodPieceTable.TryGetPiece(id, out int piece))
			{
				return null;
			}
			return new PieceOffer { pieces = PieceSet.One(piece), subsetOnly = true, priority = 1 };
		}

		public override PieceOffer GetItemPieceOffer(DragItem item)
		{
			if (item is FlexibleSeafoodItem seafood)
			{
				if (!SeafoodPieceTable.IsValid(seafood.Dish, seafood.Pieces, false))
				{
					return null;
				}
				return new PieceOffer { pieces = seafood.Pieces, subsetOnly = true, priority = 0 };
			}
			if (item == null)
			{
				return null;
			}
			return GetIdPieceOffer(item.GetId());
		}

		public override List<OrderSpec> GetItemOrderSpecs(DragItem item)
		{
			if (item is FlexibleSeafoodItem seafood && !seafood.IsComplete)
			{
				// The helper in the decompiled code is simply the default List<OrderSpec> constructor: an incomplete item yields no specs.
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
				if (piece > 25)
				{
					pieces = PieceSet.Empty;
					return false;
				}
				pieces = pieces.Add(piece, 1);
			}
			if (!SeafoodPieceTable.IsComplete((SeafoodDish)decoded.Dish, pieces))
			{
				pieces = PieceSet.Empty;
				return false;
			}
			return true;
		}

		public override bool TryGetPlateVariant(int dishKey, out ServePlate plate, out DragItem dirtyPlate)
		{
			plate = null;
			dirtyPlate = null;
			RecipeConfigSO config = Config;
			if (config == null)
			{
				return false;
			}
			RcDishInfo info = config.GetDishInfo(dishKey);
			if (info == null)
			{
				return false;
			}
			plate = info.plate;
			dirtyPlate = info.dirtyPlate;
			return true;
		}

		public override bool CanOpenDish(int dishKey, string itemBaseId, PieceSet itemPieces)
		{
			return SeafoodPieceTable.CanOpenPlate((SeafoodDish)dishKey, itemBaseId, itemPieces);
		}

		public override bool TryGetDishOpener(int dishKey, string ingId, out string resultId)
		{
			resultId = null;
			SeafoodDish dish = (SeafoodDish)dishKey;
			PieceSet predicted = SeafoodPieceTable.PredictOpen(dish, ingId);
			if (!SeafoodPieceTable.CanOpenPlate(dish, FlexibleId.BaseOf(ingId), predicted))
			{
				return false;
			}
			resultId = SeafoodPieceTable.BaseId(dish);
			RecipeConfigSO config = Config;
			if (config == null)
			{
				return false;
			}
			DragItem prefab = config.GetIngredientPrefab(resultId);
			return prefab is FlexibleSeafoodItem;
		}

		public override bool TryGetDishResult(int dishKey, string currentId, string ingId, out string resultId)
		{
			resultId = null;
			SeafoodDish dish = (SeafoodDish)dishKey;
			PieceSet combined = SeafoodPieceTable.PredictCombine(dish, currentId, ingId);
			if (combined.IsEmpty)
			{
				return false;
			}
			resultId = SeafoodPieceTable.BaseId(dish);
			RecipeConfigSO config = Config;
			if (config == null)
			{
				return false;
			}
			DragItem prefab = config.GetIngredientPrefab(resultId);
			return prefab is FlexibleSeafoodItem;
		}

		public override bool CanDishAdd(string baseId, PieceSet has, string ingId)
		{
			if (!SeafoodPieceTable.TryGetDish(baseId, out SeafoodDish dish))
			{
				return false;
			}
			return SeafoodPieceTable.CanAdd(dish, has, ingId);
		}

		public override bool CanStillComplete(PieceSet has, PieceSet want)
		{
			if (!want.Covers(has))
			{
				return false;
			}
			for (int dish = 1; dish <= 6; dish++)
			{
				if (!SeafoodPieceTable.IsComplete((SeafoodDish)dish, want))
				{
					continue;
				}
				if (has.IsEmpty || SeafoodPieceTable.IsValid((SeafoodDish)dish, has, false))
				{
					return true;
				}
			}
			return false;
		}

		public override bool CanAddPieceNow(PieceSet has, int pieceKind)
		{
			if (pieceKind < 0 || pieceKind >= SeafoodPieceTable.PieceCount)
			{
				return false;
			}
			for (int dish = 1; dish <= 6; dish++)
			{
				PieceSet next = has.Add(pieceKind, 1);
				if (SeafoodPieceTable.IsValid((SeafoodDish)dish, next, false))
				{
					return true;
				}
			}
			return false;
		}

		public override PieceSpawnInfo GetPieceSpawnInfo(int pieceKind)
		{
			RecipeConfigSO config = Config;
			if (config == null)
			{
				return null;
			}
			if (!config.TryGetSpawnIdOfPiece(pieceKind, out string spawnId))
			{
				return null;
			}
			return new PieceSpawnInfo { spawnId = spawnId };
		}

		public override bool WantsStationResult(string resultId)
		{
			// TODO(unrecovered): depends on the CalculateMissingResults graph walk and the level/line references, which are not recovered yet
			return false;
		}

		public override int StationResultDemand(string resultId)
		{
			// TODO(unrecovered): depends on the CalculateMissingResults graph walk and the level/line references, which are not recovered yet
			return 0;
		}

		private static Dictionary<string, int> UnclaimedDemand(MessyController level)
		{
			// TODO(unrecovered): walks gathered order pieces through enumerator and struct copies that are too intricate to map reliably
			return null;
		}

		private static Dictionary<string, int> AvailableSupply(MessyController level)
		{
			// TODO(unrecovered): walks drag items and cooking stations through enumerator and struct copies that are too intricate to map reliably
			return null;
		}

		public static Dictionary<string, int> CalculateMissingResults(CookingGraphAsset graph, IReadOnlyDictionary<string, int> desired, IReadOnlyDictionary<string, int> supply)
		{
			// TODO(unrecovered): recursive graph visit (g__Visit_21_3) over the cooking graph nodes with unnamed node accessors
			return null;
		}

		private static void AddCount(Dictionary<string, int> counts, string id, int amount)
		{
			if (id == null || amount <= 0)
			{
				return;
			}
			counts.TryGetValue(id, out int current);
			counts[id] = current + amount;
		}
	}
}
