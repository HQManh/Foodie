using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class OrderModel
	{
		private enum SlotState
		{
			Hidden = 0,
			Open = 1,
			Completed = 2
		}

		private sealed class OrderSlot
		{
			public readonly OrderSpec Spec;

			public SlotState State;

			public bool ShelfReady;

			public bool IsOwed => false;

			public OrderSlot(OrderSpec spec)
			{
			}
		}

		private readonly List<OrderSlot> _slots;

		private List<OrderSpec> _specs;

		private int _completedCount;

		public List<OrderSpec> Specs => null;

		public int Count => 0;

		public bool IsCompleted => false;

		public OrderSpec SpecAt(int index)
		{
			return default;
		}

		public List<string> DisplayIds()
		{
			return null;
		}

		public List<string> OpenDisplayIds()
		{
			return null;
		}

		public List<int> GetOpenOrderIndices()
		{
			return null;
		}

		public List<int> GetServableIndices()
		{
			return null;
		}

		public bool IsHidden(int index)
		{
			return false;
		}

		public bool IsCompletedAt(int index)
		{
			return false;
		}

		public bool IsShelfReady(int index)
		{
			return false;
		}

		public bool Reveal(int index)
		{
			return false;
		}

		public bool SetShelfReady(int index, bool ready)
		{
			return false;
		}

		public string GetOrderRecipe(int index)
		{
			return null;
		}

		public bool MarkCompleted(int index)
		{
			return false;
		}

		public void Init(List<OrderSpec> required)
		{
		}

		private bool IsValidIndex(int index)
		{
			return false;
		}

		private List<OrderSpec> ItemSpecs(DragItem item)
		{
			return null;
		}

		public bool CanAccept(DragItem item, ICollection<int> blocked = null)
		{
			return false;
		}

		public List<int> GetMatchingIndices(DragItem item, ICollection<int> blocked = null)
		{
			return null;
		}

		public List<int> TryMatch(DragItem item, ICollection<int> blocked = null)
		{
			return null;
		}

		private List<int> ResolveMatches(List<OrderSpec> itemSpecs, ICollection<int> blocked)
		{
			return null;
		}

		private int FindOpenMatch(OrderSpec itemSpec, List<int> exclude, ICollection<int> blocked)
		{
			return 0;
		}
	}
}
