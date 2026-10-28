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

		private static readonly PieceSet TeaPieces;

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
			// TODO(unrecovered): the output is encoded with CakeOrder_InGame_OrderRecipeCodec.Encode, and OrderRecipeCodec is not in this project.
			return null;
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
			// TODO(unrecovered): the canShow closure is built from the prefab by unidentified helper FUN_05316834, and the cast type DAT_09186798 is not identified.
			return default;
		}

		public override Stack<string> ConvertSpawnDataToStack(CustomerSpawnData[] allSpawnData)
		{
			// TODO(unrecovered): entries are decoded with CakeOrder_InGame_OrderRecipeCodec.TryDecode, and OrderRecipeCodec is not in this project.
			return null;
		}

		public override bool WantsStationResult(string resultId)
		{
			if (!TryGetCutForm(resultId, out _, out _, out _))
			{
				return true;
			}
			return StationResultDemand(resultId) > 0;
		}

		public override int StationResultDemand(string resultId)
		{
			// TODO(unrecovered): depends on MessyController line / serve-shelf members, FCustomerLineHandle and LevelPieceBook.CountMade, none of which are stubbed.
			return 0;
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

		public override bool WantsRefineInPlace(string refinedId)
		{
			return SushiPieceTable.IsCube(refinedId) && WantsAutoStationResult(refinedId);
		}

		public override OrderSpec[] ConvertOrderData(string encodedOrder)
		{
			// TODO(unrecovered): decoding uses CakeOrder_InGame_OrderRecipeCodec.TryDecode, which is not in this project.
			return null;
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
			// TODO(unrecovered): a virtual call (vtable slot 0x2c8) on the prefab, cast to the unidentified type DAT_09184728, is not identified.
			resultId = null;
			return false;
		}

		public override bool TryGetDishOpener(int dishKey, string ingId, out string resultId)
		{
			// TODO(unrecovered): a virtual call (vtable slot 0x2d8) on the prefab, cast to the unidentified type DAT_09184728, is not identified.
			resultId = null;
			return false;
		}

		public override PieceOffer GetItemPieceOffer(DragItem item)
		{
			// TODO(unrecovered): the cast target type (DAT_09185be8) and the virtual call that yields the piece set are not identified.
			return null;
		}

		public override PieceOffer GetIdPieceOffer(string id)
		{
			// TODO(unrecovered): iterates dish and ingredient members through unidentified virtual calls (vtable slots 0x..., DAT_0917a6f0 / DAT_09185b10 / DAT_0917add0).
			return null;
		}

		private static Dictionary<string, PieceOffer> BuildIdOffers()
		{
			// TODO(unrecovered): builds the dictionary through unidentified virtual calls on the offer sources (DAT_0917a2f8 / DAT_0917a980 / DAT_09185b10).
			return null;
		}
	}
}
