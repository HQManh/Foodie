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

		// Values read from the static constructor data (metadata).
		private static readonly SushiDish[] RollableDishes = new SushiDish[5]
		{
			SushiDish.Nigiri,
			SushiDish.Maki,
			SushiDish.Gunkan,
			SushiDish.Sashimi,
			SushiDish.Tea
		};

		private static readonly PieceSet TeaPieces = PieceSet.One((int)SushiPiece.Tea);

		private readonly List<PieceSet> _gathered = new List<PieceSet>();

		private Dictionary<string, PieceOffer> _idOffers;

		private static RecipeConfigSO Config => MessyController.Ins ? MessyController.Ins.recipeConfig : null;

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
			int num = Random.Range(1, 4);
			List<string> list = new List<string>(num);
			List<SushiDish> pool = new List<SushiDish>();
			RecipeConfigSO config = Config;
			if (config == null)
			{
				return list.ToArray();
			}
			foreach (SushiDish dish in RollableDishes)
			{
				if (CanRoll(config, dish))
				{
					pool.Add(dish);
				}
			}
			if (pool.Count == 0)
			{
				return list.ToArray();
			}
			List<int> kinds = new List<int>();
			for (int i = 0; i < num; i++)
			{
				SushiDish pick = pool[Random.Range(0, pool.Count)];
				PieceSet rolled = Roll(pick);
				if (rolled.IsEmpty)
				{
					continue;
				}
				kinds.Clear();
				foreach (var (kind, count) in rolled)
				{
					for (int c = 0; c < count; c++)
					{
						kinds.Add(kind);
					}
				}
				list.Add(OrderRecipeCodec.Encode((int)pick, kinds));
			}
			return list.ToArray();
		}

		private static bool CanRoll(RecipeConfigSO config, SushiDish dish)
		{
			if (dish == SushiDish.Tea)
			{
				return config.TryGetPreparedOfPieceSet(TeaPieces, out _);
			}
			return config.TryGetDishBaseId((int)dish, out _);
		}

		private PieceSet Roll(SushiDish dish)
		{
			// canShow (a prefab visual check in the original) is replaced by the piece-exists check inside the table.
			switch (dish)
			{
			case SushiDish.Nigiri:
				return SushiPieceTable.RollNigiri(maxRandomToppings);
			case SushiDish.Maki:
				return SushiPieceTable.RollMaki(maxRandomToppings);
			case SushiDish.Gunkan:
				return SushiPieceTable.RollGunkan(maxRandomToppings);
			case SushiDish.Sashimi:
				return SushiPieceTable.RollSashimi(maxRandomToppings);
			case SushiDish.Tea:
				return TeaPieces;
			default:
				return PieceSet.Empty;
			}
		}

		public override Stack<string> ConvertSpawnDataToStack(CustomerSpawnData[] allSpawnData)
		{
			List<string> all = new List<string>();
			RecipeConfigSO config = Config;
			List<string> ids = new List<string>();
			if (config != null && allSpawnData != null)
			{
				foreach (CustomerSpawnData spawn in allSpawnData)
				{
					if (spawn == null || spawn.orders == null)
					{
						continue;
					}
					foreach (CustomerSingleOrderSpawnData order in spawn.orders)
					{
						if (!TryDecodeRecipe(order.recipe, out _, out PieceSet pieces))
						{
							continue;
						}
						foreach (var (kind, _) in pieces)
						{
							ids.Clear();
							config.CollectSpawnIdsOfPiece(kind, ids);
							all.AddRange(ids);
						}
					}
				}
			}
			all.Reverse();
			return new Stack<string>(all);
		}

		public override bool WantsStationResult(string resultId)
		{
			if (!TryGetCutForm(resultId, out _, out _, out _))
			{
				return true;
			}
			return StationResultDemand(resultId) > 0;
		}

		private readonly List<PieceSet> _demandGathered = new List<PieceSet>();

		public override int StationResultDemand(string resultId)
		{
			// Rebuilt as a live need count: how many of this cut form the customers still waiting need (pieces of their open orders
			// that use this form, minus what the serve shelf already holds for them), minus the copies already made, owed by a station,
			// inbound or in the bag. The original body is not recoverable; this mirrors LevelPieceBook.CollectRawToFinishOpenOrders.
			if (!TryGetCutForm(resultId, out SushiPiece piece, out _, out _))
			{
				return 0;
			}
			MessyController level = MessyController.Ins;
			LevelInfo info = level != null ? level.Info : null;
			LevelPieceBook book = info != null ? info.Pieces : null;
			FCustomerLineHandle line = level != null ? level.LineHandle : null;
			RecipeConfigSO config = Config;
			if (book == null || line == null || config == null)
			{
				return 1;
			}
			List<OrderSpec> specs = line.GetActiveOpenOrderSpecs();
			if (specs == null || specs.Count == 0)
			{
				return 0;
			}
			_demandGathered.Clear();
			if (level.ServeShelf != null)
			{
				level.ServeShelf.GetGatheredPieces(specs, _demandGathered);
			}
			int needed = 0;
			for (int i = 0; i < specs.Count; i++)
			{
				OrderSpec spec = specs[i];
				if (!spec.HasPieces)
				{
					continue;
				}
				int count = spec.Pieces[(int)piece];
				if (count == 0)
				{
					continue;
				}
				int dishKey = info.DishKeyOfOrder(spec);
				if (!info.TryGetFormOf(dishKey, (int)piece, out string formId) && !config.TryGetPreparedOfPiece((int)piece, out formId))
				{
					continue;
				}
				if (formId != resultId)
				{
					continue;
				}
				int gathered = i < _demandGathered.Count ? _demandGathered[i][(int)piece] : 0;
				needed += Mathf.Max(0, count - gathered);
			}
			return Mathf.Max(0, needed - book.CountMade(resultId));
		}

		public override bool TryGetFormOf(int dishKey, int pieceKind, out string formId)
		{
			formId = null;
			RecipeConfigSO config = Config;
			if (config == null)
			{
				return false;
			}
			if (!SushiPieceTable.TryGetCubeOf((SushiPiece)pieceKind, out string cubeId))
			{
				return false;
			}
			if (!config.TryGetPreparedOfPiece(pieceKind, out string preparedId))
			{
				return false;
			}
			string candidate = (dishKey == (int)SushiDish.Gunkan) ? cubeId : preparedId;
			if (!TryGetCutForm(candidate, out _, out _, out _))
			{
				return false;
			}
			formId = candidate;
			return true;
		}

		private static bool TryGetCutForm(string resultId, out SushiPiece piece, out string sliceId, out string cubeId)
		{
			piece = default;
			sliceId = null;
			cubeId = null;
			RecipeConfigSO config = Config;
			if (config == null)
			{
				return false;
			}
			if (!SushiPieceTable.TryGetPiece(resultId, out piece))
			{
				return false;
			}
			if (!SushiPieceTable.TryGetCubeOf(piece, out cubeId))
			{
				return false;
			}
			if (!config.TryGetPreparedOfPiece((int)piece, out sliceId))
			{
				return false;
			}
			if (resultId != sliceId)
			{
				return resultId == cubeId;
			}
			return !CubeRefinesSlice(cubeId, sliceId);
		}

		private static bool CubeRefinesSlice(string cubeId, string sliceId)
		{
			RecipeConfigSO config = Config;
			if (config == null || config.recipes == null)
			{
				return false;
			}
			RecipeConfig recipe = config.recipes.Find(r => r != null && r.resultId == cubeId);
			if (recipe == null || recipe.combinations == null)
			{
				return false;
			}
			foreach (var combo in recipe.combinations)
			{
				if (combo == null || combo.components == null)
				{
					continue;
				}
				foreach (var comp in combo.components)
				{
					if (comp != null && comp.type == CombinationComponentType.Ingredient && comp.id == sliceId)
					{
						return true;
					}
				}
			}
			return false;
		}

		protected override string RandomFlexibleId(FlexibleDragItem prefab, List<string> allBaseIds)
		{
			return prefab.BuildRandomId(maxRandomToppings);
		}

		public override bool TryGetOrderPieces(string recipe, out PieceSet pieces)
		{
			return TryDecodeRecipe(recipe, out _, out pieces);
		}

		public override bool WantsAutoStationResult(string resultId)
		{
			return TryGetCutForm(resultId, out _, out _, out _) && StationResultDemand(resultId) > 0;
		}

		public override bool WantsRefineInPlace(string refinedId)
		{
			return SushiPieceTable.IsCube(refinedId) && WantsAutoStationResult(refinedId);
		}

		private static bool TryDecodeRecipe(string recipe, out SushiDish dish, out PieceSet pieces)
		{
			dish = SushiDish.None;
			pieces = PieceSet.Empty;
			if (!OrderRecipeCodec.TryDecode(recipe, out var decoded))
			{
				return false;
			}
			foreach (int kind in decoded.Pieces)
			{
				if (System.Enum.IsDefined(typeof(SushiPiece), kind))
				{
					pieces = pieces.Add(kind);
				}
			}
			if (pieces.IsEmpty)
			{
				return false;
			}
			dish = System.Enum.IsDefined(typeof(SushiDish), decoded.Dish) ? (SushiDish)decoded.Dish : SushiDish.None;
			if (dish == SushiDish.None)
			{
				dish = InferDish(pieces);
			}
			return true;
		}

		private static SushiDish InferDish(PieceSet pieces)
		{
			if (pieces[(int)SushiPiece.Tea] > 0 || pieces[(int)SushiPiece.TeaCup] > 0)
			{
				return SushiDish.Tea;
			}
			if (pieces[(int)SushiPiece.Seaweed] > 0)
			{
				return SushiTableHasRoe(pieces) ? SushiDish.Gunkan : SushiDish.Maki;
			}
			if (pieces[(int)SushiPiece.Rice] > 0)
			{
				return SushiDish.Nigiri;
			}
			return SushiDish.Sashimi;
		}

		private static bool SushiTableHasRoe(PieceSet pieces)
		{
			return SushiPieceTable.HasRoe(pieces);
		}

		public override OrderSpec[] ConvertOrderData(string encodedOrder)
		{
			RecipeConfigSO config = Config;
			if (config != null && TryDecodeRecipe(encodedOrder, out SushiDish dish, out PieceSet pieces))
			{
				List<OrderSpec> specs = new List<OrderSpec>();
				if (dish != SushiDish.Tea && config.TryGetDishBaseId((int)dish, out string baseId))
				{
					specs.Add(new OrderSpec(FlexiblePieceId.Build(baseId, pieces), baseId, pieces, hasPieces: true));
				}
				else if (config.TryGetPreparedOfPieceSet(pieces, out string preparedId))
				{
					specs.Add(new OrderSpec(preparedId, preparedId, pieces, hasPieces: true));
				}
				else
				{
					foreach (var (kind, _) in pieces)
					{
						if (config.TryGetPreparedOfPiece(kind, out string pieceId))
						{
							specs.Add(new OrderSpec(pieceId, pieceId, PieceSet.One(kind), hasPieces: true));
						}
					}
				}
				if (specs.Count != 0)
				{
					return specs.ToArray();
				}
			}
			return new OrderSpec[1] { BuildSpec(encodedOrder) };
		}

		public override bool CanOpenDish(int dishKey, string itemBaseId, PieceSet itemPieces)
		{
			if (dishKey == NoDish)
			{
				return false;
			}
			if (SushiPieceTable.CanOpen((SushiDish)dishKey, itemBaseId, itemPieces))
			{
				return true;
			}
			return base.CanOpenDish(dishKey, itemBaseId, itemPieces);
		}

		public override bool CanDishAdd(string baseId, PieceSet has, string ingId)
		{
			RecipeConfigSO config = Config;
			if (config == null)
			{
				return false;
			}
			if (!config.TryGetDishKindOfBaseId(baseId, out int dishKind))
			{
				return false;
			}
			return SushiPieceTable.CanDishAdd((SushiDish)dishKind, has, ingId);
		}

		public override bool TryGetDishResult(int dishKey, string currentId, string ingId, out string resultId)
		{
			// Slot 0x2c8 on FlexibleDragItem is PredictCombinePieces. Seaweed + cooked rice is both a maki and a gunkan start,
			// so the plain recipe lookup would always pick one of them; the plate's dish key decides instead.
			resultId = null;
			RecipeConfigSO config = Config;
			if (config != null && config.TryGetDishBaseId(dishKey, out string baseId))
			{
				DragItem prefab = config.GetIngredientPrefab(baseId);
				if (prefab is FlexibleDragItem flexible)
				{
					if (!flexible.PredictCombinePieces(currentId, ingId).IsEmpty)
					{
						resultId = baseId;
						return true;
					}
					return false;
				}
			}
			return base.TryGetDishResult(dishKey, currentId, ingId, out resultId);
		}

		public override bool TryGetDishOpener(int dishKey, string ingId, out string resultId)
		{
			// Slot 0x2d8 on FlexibleDragItem is PredictOpenPieces (only sashimi opens an empty plate).
			resultId = null;
			RecipeConfigSO config = Config;
			if (config != null && config.TryGetDishBaseId(dishKey, out string baseId))
			{
				DragItem prefab = config.GetIngredientPrefab(baseId);
				if (prefab is FlexibleDragItem flexible && !flexible.PredictOpenPieces(ingId).IsEmpty)
				{
					resultId = baseId;
					return true;
				}
			}
			return false;
		}

		public override PieceOffer GetItemPieceOffer(DragItem item)
		{
			if (item is FlexibleDragItem flexible)
			{
				return new PieceOffer { pieces = flexible.Pieces, subsetOnly = true, priority = 0 };
			}
			return item == null ? null : GetIdPieceOffer(item.GetId());
		}

		public override PieceOffer GetIdPieceOffer(string id)
		{
			RecipeConfigSO config = Config;
			if (config != null)
			{
				foreach (SushiDish dish in RollableDishes)
				{
					if (dish != SushiDish.Tea && config.TryGetDishBaseId((int)dish, out string baseId))
					{
						PieceSet pieces = FlexiblePieceId.PiecesOf(baseId, id);
						if (!pieces.IsEmpty)
						{
							return new PieceOffer { subsetOnly = true, pieces = pieces, priority = 0 };
						}
					}
				}
			}
			if (id == null)
			{
				id = string.Empty;
			}
			return IdOffers != null && IdOffers.TryGetValue(id, out PieceOffer offer) ? offer : null;
		}

		private static Dictionary<string, PieceOffer> BuildIdOffers()
		{
			Dictionary<string, PieceOffer> dictionary = new Dictionary<string, PieceOffer>();
			RecipeConfigSO config = Config;
			if (config == null)
			{
				return dictionary;
			}
			foreach (var (key, pieces) in config.OfferingIngredients())
			{
				dictionary[key] = new PieceOffer { subsetOnly = true, priority = 1, pieces = pieces };
			}
			return dictionary;
		}
	}
}
