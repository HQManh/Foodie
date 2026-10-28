using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.InGame;
using CakeOrder.InGame.Sandwich;

namespace AnhPD.FoodOrder
{
	public class SandwichOrderStrategy : OrderStrategy
	{
		[CompilerGenerated]
		private sealed class _003CStationInputsOf_003Ed__17 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private string _003C_003E2__current;

			private int _003C_003El__initialThreadId;

			private RecipeConfig recipe;

			public RecipeConfig _003C_003E3__recipe;

			private List<RecipeCombineConfig>.Enumerator _003C_003E7__wrap1;

			private CombinationComponent[] _003C_003E7__wrap2;

			private int _003C_003E7__wrap3;

			string IEnumerator<string>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CStationInputsOf_003Ed__17(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				// TODO(unrecovered): iterator state machine body not recovered in this pass.
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			private void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<string> IEnumerable<string>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		// Values read from the static constructor data (metadata).
		private static readonly SandwichDish[] RollableDishes = new SandwichDish[5]
		{
			SandwichDish.SavorySandwich,
			SandwichDish.FruitSandwich,
			SandwichDish.Salad,
			SandwichDish.Juice,
			SandwichDish.Soup
		};

		private readonly List<PieceSet> _gathered = new List<PieceSet>();

		private readonly HashSet<string> _downstream = new HashSet<string>();

		private HashSet<string> _gatedResults;

		private Dictionary<string, PieceOffer> _idOffers;

		private static RecipeConfigSO Config => MessyController.Ins != null ? MessyController.Ins.recipeConfig : null;

		private Dictionary<string, PieceOffer> IdOffers
		{
			get
			{
				// Lazily built on first use, as in the decompiled getter.
				if (_idOffers == null)
				{
					_idOffers = BuildIdOffers();
				}
				return _idOffers;
			}
		}

		public override string[] GenerateRandomRecipes()
		{
			RecipeConfigSO config = Config;
			if (config == null)
			{
				return null;
			}

			List<int> candidates = new List<int>(RollableDishes.Length);
			foreach (SandwichDish dish in RollableDishes)
			{
				if (config.TryGetDishBaseId((int)dish, out _))
				{
					candidates.Add((int)dish);
				}
			}
			if (candidates.Count == 0)
			{
				return null;
			}

			int count = UnityEngine.Random.Range(1, 4);
			List<string> recipes = new List<string>(count);
			List<int> pieceKinds = new List<int>();
			for (int i = 0; i < count; i++)
			{
				SandwichDish dish = (SandwichDish)candidates[UnityEngine.Random.Range(0, candidates.Count)];
				Func<SandwichPiece, bool> canShow = CanShowOf(config, dish);
				PieceSet pieces = SandwichPieceTable.Roll(dish, 0, canShow);
				if (pieces.IsEmpty)
				{
					continue;
				}
				pieceKinds.Clear();
				foreach (var entry in pieces)
				{
					for (int k = 0; k < entry.count; k++)
					{
						pieceKinds.Add(entry.kind);
					}
				}
				recipes.Add(OrderRecipeCodec.Encode((int)dish, pieceKinds));
			}
			return recipes.ToArray();
		}

		private static Func<SandwichPiece, bool> CanShowOf(RecipeConfigSO config, SandwichDish dish)
		{
			// Rebuilt from the decompiled code: the dish prefab's ISandwichPieceView.CanShow (interface slot 0, resolved from the metadata).
			if (config.TryGetDishBaseId((int)dish, out var baseId) && config.GetIngredientPrefab(baseId) is ISandwichPieceView view)
			{
				return view.CanShow;
			}
			return null;
		}

		public override Stack<string> ConvertSpawnDataToStack(CustomerSpawnData[] allSpawnData)
		{
			// Rebuilt from the decompiled code (Pasta shape; a piece with a specific form spawns that form's leaves).
			List<string> ids = new List<string>();
			RecipeConfigSO config = Config;
			if (allSpawnData == null || config == null)
			{
				return new Stack<string>();
			}
			List<string> spawnIds = new List<string>();
			foreach (CustomerSpawnData customer in allSpawnData)
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
						if (SandwichPieceTable.TryGetFormOf((SandwichDish)decoded.Dish, (SandwichPiece)piece, out var formId))
						{
							CollectLeaves(config, formId, piece, spawnIds);
						}
						else
						{
							config.CollectSpawnIdsOfPiece(piece, spawnIds);
						}
						ids.AddRange(spawnIds);
					}
				}
			}
			ids.Reverse();
			return new Stack<string>(ids);
		}

		private static void CollectLeaves(RecipeConfigSO config, string id, int piece, List<string> result)
		{
			// Rebuilt from the decompiled code: recurse through the inputs; an id with no inputs is a leaf.
			List<string> inputs = new List<string>();
			if (config.TryGetInputsOf(id, piece, inputs))
			{
				foreach (string input in inputs)
				{
					CollectLeaves(config, input, piece, result);
				}
			}
			else
			{
				result.Add(id);
			}
		}

		private static bool ChainContains(RecipeConfigSO config, string id, string target, int piece)
		{
			if (id == target)
			{
				return true;
			}
			List<string> inputs = new List<string>();
			if (!config.TryGetInputsOf(id, piece, inputs))
			{
				return false;
			}
			foreach (string input in inputs)
			{
				if (ChainContains(config, input, target, piece))
				{
					return true;
				}
			}
			return false;
		}

		public override bool WantsStationResult(string resultId)
		{
			if (!IsGated(resultId))
			{
				return true;
			}
			return StationResultDemand(resultId) > 0;
		}

		public override int StationResultDemand(string resultId)
		{
			if (IsGated(resultId))
			{
				return Shortfall(resultId);
			}
			return 0;
		}

		public override bool WantsAutoStationResult(string resultId)
		{
			return Shortfall(resultId) > 0;
		}

		private int Shortfall(string resultId)
		{
			// TODO(unrecovered): shortfall computation (about 240 lines of pseudocode) not recovered in this pass.
			return 0;
		}

		private bool IsGated(string resultId)
		{
			if (_gatedResults == null)
			{
				_gatedResults = BuildGatedResults();
			}
			if (resultId == null)
			{
				return false;
			}
			return _gatedResults.Contains(resultId);
		}

		private static HashSet<string> BuildGatedResults()
		{
			// TODO(unrecovered): gated-result set construction not recovered in this pass.
			return null;
		}

		[IteratorStateMachine(typeof(_003CStationInputsOf_003Ed__17))]
		private static IEnumerable<string> StationInputsOf(RecipeConfig recipe)
		{
			// TODO(unrecovered): iterator body lives in the state machine above; not recovered in this pass.
			return null;
		}

		public override bool TryGetFormOf(int dishKey, int pieceKind, out string formId)
		{
			// Rebuilt from the decompiled code.
			formId = null;
			if (dishKey != -1 && SandwichPieceTable.HasSeveralForms((SandwichPiece)pieceKind))
			{
				return SandwichPieceTable.TryGetFormOf((SandwichDish)dishKey, (SandwichPiece)pieceKind, out formId);
			}
			return false;
		}

		public override OrderSpec[] ConvertOrderData(string encodedOrder)
		{
			// Rebuilt from the decompiled code. The virtual call on this (slot 0x238) is TryGetOrderPieces; the log text is decoded from the metadata.
			if (TryGetOrderPieces(encodedOrder, out var pieces) && OrderRecipeCodec.TryDecode(encodedOrder, out var decoded))
			{
				RecipeConfigSO config = Config;
				if (config != null)
				{
					if (config.TryGetDishBaseId(decoded.Dish, out var baseId))
					{
						string displayId = FlexiblePieceId.Build(baseId, pieces);
						return new OrderSpec[1] { new OrderSpec(displayId, baseId, pieces, hasPieces: true) };
					}
					UnityEngine.Debug.LogError(string.Format("[Recipe] món {0} chưa khai baseId trong RecipeConfigSO ", (SandwichDish)decoded.Dish) + "(tab Dish icons): \"" + encodedOrder + "\" — khách này không bao giờ được phục vụ.");
				}
			}
			return new OrderSpec[1] { BuildSpec(encodedOrder) };
		}

		public override bool CanOpenDish(int dishKey, string itemBaseId, PieceSet itemPieces)
		{
			if (dishKey == -1)
			{
				return false;
			}
			if (SandwichPieceTable.CanOpen((SandwichDish)dishKey, itemBaseId))
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
			return SandwichPieceTable.CanDishAdd((SandwichDish)dishKind, has, ingId);
		}

		public override bool TryGetDishResult(int dishKey, string currentId, string ingId, out string resultId)
		{
			// Rebuilt from the decompiled code. Slot 0x2c8 on FlexibleDragItem is PredictCombinePieces (resolved from the IL2CPP metadata).
			resultId = null;
			RecipeConfigSO recipeConfig = Config;
			if (recipeConfig != null && recipeConfig.TryGetDishBaseId(dishKey, out var baseId))
			{
				DragItem prefab = recipeConfig.GetIngredientPrefab(baseId);
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
			// Rebuilt from the decompiled code. Slot 0x2d8 on FlexibleDragItem is PredictOpenPieces (resolved from the IL2CPP metadata).
			resultId = null;
			RecipeConfigSO recipeConfig = Config;
			if (recipeConfig != null && recipeConfig.TryGetDishBaseId(dishKey, out var baseId))
			{
				DragItem prefab = recipeConfig.GetIngredientPrefab(baseId);
				if (prefab == null)
				{
					return false;
				}
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
			// Rebuilt from the decompiled code: flexible items offer their own pieces (IFlexiblePieceItem.Pieces, interface slot 0).
			if (item is IFlexiblePieceItem flexible)
			{
				return new PieceOffer
				{
					pieces = flexible.Pieces,
					subsetOnly = true,
					priority = 0
				};
			}
			return base.GetItemPieceOffer(item);
		}

		public override PieceOffer GetIdPieceOffer(string id)
		{
			// Rebuilt from the decompiled code: a dish whose base id's pieces appear in the id offers them; otherwise use the cached id offers.
			RecipeConfigSO config = Config;
			if (config != null)
			{
				foreach (RcDishInfo dish in config.GetAllDishInfos())
				{
					if (dish == null || string.IsNullOrEmpty(dish.baseId))
					{
						continue;
					}
					PieceSet pieces = FlexiblePieceId.PiecesOf(dish.baseId, id);
					if (!pieces.IsEmpty)
					{
						return new PieceOffer
						{
							pieces = pieces,
							subsetOnly = true,
							priority = 0
						};
					}
				}
			}
			return IdOffers.TryGetValue(id ?? string.Empty, out var offer) ? offer : null;
		}

		private static Dictionary<string, PieceOffer> BuildIdOffers()
		{
			// Rebuilt from the decompiled code: one subset offer (priority 1) per offering ingredient.
			Dictionary<string, PieceOffer> offers = new Dictionary<string, PieceOffer>();
			RecipeConfigSO config = Config;
			if (config == null)
			{
				return offers;
			}
			foreach (var (ingredientId, pieces) in config.OfferingIngredients())
			{
				offers[ingredientId] = new PieceOffer
				{
					pieces = pieces,
					subsetOnly = true,
					priority = 1
				};
			}
			return offers;
		}
	}
}
