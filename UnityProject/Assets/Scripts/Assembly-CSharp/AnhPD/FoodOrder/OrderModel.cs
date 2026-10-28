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

			public bool IsOwed => State != SlotState.Completed;

			public OrderSlot(OrderSpec spec)
			{
				Spec = spec;
				State = spec.IsMystery ? SlotState.Hidden : SlotState.Open;
			}
		}

		private readonly List<OrderSlot> _slots = new List<OrderSlot>();

		private List<OrderSpec> _specs = new List<OrderSpec>();

		private int _completedCount;

		public List<OrderSpec> Specs => _specs;

		public int Count => _slots.Count;

		public bool IsCompleted => _completedCount == _slots.Count;

		public OrderSpec SpecAt(int index)
		{
			if (IsValidIndex(index))
			{
				return _slots[index].Spec;
			}
			return default;
		}

		public List<string> DisplayIds()
		{
			return OrderSpecExtensions.ToDisplayIds(_specs);
		}

		public List<string> OpenDisplayIds()
		{
			List<string> ids = new List<string>();
			foreach (OrderSlot slot in _slots)
			{
				if (slot.IsOwed)
				{
					ids.Add(slot.Spec.DisplayId);
				}
			}
			return ids;
		}

		public List<int> GetOpenOrderIndices()
		{
			List<int> indices = new List<int>();
			for (int i = 0; i < _slots.Count; i++)
			{
				if (_slots[i].IsOwed)
				{
					indices.Add(i);
				}
			}
			return indices;
		}

		public List<int> GetServableIndices()
		{
			List<int> indices = new List<int>();
			for (int i = 0; i < _slots.Count; i++)
			{
				if (_slots[i].State == SlotState.Open)
				{
					indices.Add(i);
				}
			}
			return indices;
		}

		public bool IsHidden(int index)
		{
			return IsValidIndex(index) && _slots[index].State == SlotState.Hidden;
		}

		public bool IsCompletedAt(int index)
		{
			return IsValidIndex(index) && _slots[index].State == SlotState.Completed;
		}

		public bool IsShelfReady(int index)
		{
			return IsValidIndex(index) && _slots[index].ShelfReady;
		}

		public bool Reveal(int index)
		{
			if (!IsHidden(index))
			{
				return false;
			}
			_slots[index].State = SlotState.Open;
			return true;
		}

		public bool SetShelfReady(int index, bool ready)
		{
			if (!IsValidIndex(index))
			{
				return false;
			}
			OrderSlot slot = _slots[index];
			if (slot.State != SlotState.Open || slot.ShelfReady == ready)
			{
				return false;
			}
			slot.ShelfReady = ready;
			return true;
		}

		public string GetOrderRecipe(int index)
		{
			return SpecAt(index).Recipe;
		}

		public bool MarkCompleted(int index)
		{
			if (!IsValidIndex(index))
			{
				return false;
			}
			OrderSlot slot = _slots[index];
			if (!slot.IsOwed)
			{
				return false;
			}
			slot.State = SlotState.Completed;
			_completedCount++;
			return true;
		}

		public void Init(List<OrderSpec> required)
		{
			if (required == null)
			{
				required = new List<OrderSpec>();
			}
			_specs = required;
			_slots.Clear();
			foreach (OrderSpec spec in _specs)
			{
				_slots.Add(new OrderSlot(spec));
			}
			_completedCount = 0;
		}

		private bool IsValidIndex(int index)
		{
			return index >= 0 && index < _slots.Count;
		}

		private List<OrderSpec> ItemSpecs(DragItem item)
		{
			return MessyController.Ins.Info.GetItemOrderSpecs(item);
		}

		public bool CanAccept(DragItem item, ICollection<int> blocked = null)
		{
			return ResolveMatches(ItemSpecs(item), blocked) != null;
		}

		public List<int> GetMatchingIndices(DragItem item, ICollection<int> blocked = null)
		{
			return ResolveMatches(ItemSpecs(item), blocked) ?? new List<int>();
		}

		public List<int> TryMatch(DragItem item, ICollection<int> blocked = null)
		{
			List<int> matches = ResolveMatches(ItemSpecs(item), blocked);
			if (matches == null)
			{
				return new List<int>();
			}
			foreach (int index in matches)
			{
				MarkCompleted(index);
			}
			return matches;
		}

		private List<int> ResolveMatches(List<OrderSpec> itemSpecs, ICollection<int> blocked)
		{
			if (itemSpecs == null || itemSpecs.Count == 0)
			{
				return null;
			}
			List<int> matches = new List<int>(itemSpecs.Count);
			foreach (OrderSpec itemSpec in itemSpecs)
			{
				int index = FindOpenMatch(itemSpec, matches, blocked);
				if (index < 0)
				{
					return null;
				}
				matches.Add(index);
			}
			return matches;
		}

		private int FindOpenMatch(OrderSpec itemSpec, List<int> exclude, ICollection<int> blocked)
		{
			for (int i = 0; i < _slots.Count; i++)
			{
				OrderSlot slot = _slots[i];
				if (slot.State != SlotState.Open || exclude.Contains(i))
				{
					continue;
				}
				if (blocked != null && blocked.Contains(i))
				{
					continue;
				}
				if (slot.Spec.Matches(itemSpec))
				{
					return i;
				}
			}
			return -1;
		}
	}
}
