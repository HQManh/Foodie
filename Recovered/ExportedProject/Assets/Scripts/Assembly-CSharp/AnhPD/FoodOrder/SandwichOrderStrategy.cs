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

		private static readonly SandwichDish[] RollableDishes;

		private readonly List<PieceSet> _gathered;

		private readonly HashSet<string> _downstream;

		private HashSet<string> _gatedResults;

		private Dictionary<string, PieceOffer> _idOffers;

		private static RecipeConfigSO Config => null;

		private Dictionary<string, PieceOffer> IdOffers => null;

		public override string[] GenerateRandomRecipes()
		{
			return null;
		}

		private static Func<SandwichPiece, bool> CanShowOf(RecipeConfigSO config, SandwichDish dish)
		{
			return null;
		}

		public override Stack<string> ConvertSpawnDataToStack(CustomerSpawnData[] allSpawnData)
		{
			return null;
		}

		private static void CollectLeaves(RecipeConfigSO config, string id, int piece, List<string> result)
		{
		}

		private static bool ChainContains(RecipeConfigSO config, string id, string target, int piece)
		{
			return false;
		}

		public override bool WantsStationResult(string resultId)
		{
			return false;
		}

		public override int StationResultDemand(string resultId)
		{
			return 0;
		}

		public override bool WantsAutoStationResult(string resultId)
		{
			return false;
		}

		private int Shortfall(string resultId)
		{
			return 0;
		}

		private bool IsGated(string resultId)
		{
			return false;
		}

		private static HashSet<string> BuildGatedResults()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CStationInputsOf_003Ed__17))]
		private static IEnumerable<string> StationInputsOf(RecipeConfig recipe)
		{
			return null;
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
