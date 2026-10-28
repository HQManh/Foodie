using System;
using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class ConveyorIngredientSource
	{
		private Queue<ConveyorBundle> _bundles;

		public bool UsesBundles => false;

		public bool HasNext => false;

		public void SetBundleStack(IEnumerable<ConveyorBundle> bundles)
		{
		}

		public void AddToStack(IEnumerable<IngredientState> items)
		{
		}

		public ConveyorBundle PeekNext()
		{
			return null;
		}

		public ConveyorBundle TakeNextBundle()
		{
			return null;
		}

		public List<IngredientState> TakeNext(int want)
		{
			return null;
		}

		public void AppendPending(List<string> result)
		{
		}

		public bool ContainsPending(string id)
		{
			return false;
		}

		public void AppendPendingBundles(List<ConveyorBundle> result)
		{
		}

		public void PushFront(IReadOnlyList<string> ids)
		{
		}

		public void PushFrontBundles(IReadOnlyList<ConveyorBundle> bundles)
		{
		}

		public int PromoteToFront(IReadOnlyList<string> ids)
		{
			return 0;
		}

		public bool TryPromotePending(string id)
		{
			return false;
		}

		public void ReturnAfterPromoted(ConveyorBundle bundle)
		{
		}

		public bool RotateFrontForPromote(int row)
		{
			return false;
		}

		public bool TryConsumePending(string id)
		{
			return false;
		}

		public void AppendPendingSingles(List<IngredientState> result)
		{
		}

		public IngredientState TakePendingSingle(string id, out int keyColor)
		{
			keyColor = default;
			return null;
		}

		public void AppendPendingHard(List<IngredientState> result)
		{
		}

		public IngredientState TakePendingFromBundle(string id, out int brokenChainId, out int keyColor)
		{
			brokenChainId = default;
			keyColor = default;
			return null;
		}

		private ConveyorBundle FindFirst(Predicate<ConveyorBundle> match)
		{
			return null;
		}

		private static IngredientState[] WithoutAt(IngredientState[] items, int index)
		{
			return null;
		}

		private ConveyorBundle RemoveFirst(Predicate<ConveyorBundle> match)
		{
			return null;
		}

		private static bool IsSingle(ConveyorBundle bundle)
		{
			return false;
		}

		private static bool IsTakableSingle(ConveyorBundle bundle)
		{
			return false;
		}

		private IngredientState Next()
		{
			return null;
		}

		private static IngredientState TakeFirstItem(Queue<ConveyorBundle> queue)
		{
			return null;
		}

		private static IngredientState[] Tail(IngredientState[] items)
		{
			return null;
		}

		private ConveyorBundle TakeBundleContaining(string id)
		{
			return null;
		}

		private static ConveyorBundle RemoveContaining(ref Queue<ConveyorBundle> queue, string id)
		{
			return null;
		}

		private static ConveyorBundle SingleBundle(IngredientState item)
		{
			return null;
		}

		private static int IndexOfId(ConveyorBundle bundle, string id)
		{
			return 0;
		}

		private static void AppendBundles(Queue<ConveyorBundle> queue, List<ConveyorBundle> result)
		{
		}

		private static void AppendIds(Queue<ConveyorBundle> queue, List<string> result)
		{
		}

		private static bool Contains(Queue<ConveyorBundle> queue, string id)
		{
			return false;
		}
	}
}
