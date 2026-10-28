using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class ConveyorLockoutCheck
	{
		private readonly List<ConveyorSlot> _front = new List<ConveyorSlot>();

		private readonly HashSet<ConveyorSlot> _live = new HashSet<ConveyorSlot>();

		public void Collect(ConveyorGrid grid, List<IngredientConveyorItem> locked)
		{
			locked.Clear();
			_front.Clear();
			_live.Clear();
			foreach (ConveyorSlot slot in grid.Slots)
			{
				if (!(slot.Item != null) || !slot.IsAtFrontRow)
				{
					continue;
				}
				_front.Add(slot);
				if (slot.Item.FreezeTurns < 1 && slot.IsPickable)
				{
					_live.Add(slot);
				}
			}
			if (_live.Count == _front.Count)
			{
				return;
			}
			bool settled;
			do
			{
				settled = true;
				foreach (ConveyorSlot slot2 in _front)
				{
					if (!_live.Contains(slot2) && CanThaw(grid, slot2) && CanGather(grid, slot2.Chain))
					{
						_live.Add(slot2);
						settled = false;
					}
				}
			}
			while (!settled);
			foreach (ConveyorSlot slot3 in _front)
			{
				if (_live.Contains(slot3))
				{
					continue;
				}
				AddOnce(locked, slot3.Item);
				if (slot3.Chain == null)
				{
					continue;
				}
				foreach (ConveyorSlot member in slot3.Chain.Members)
				{
					if (member.Item != null)
					{
						AddOnce(locked, member.Item);
					}
				}
			}
		}

		private bool CanThaw(ConveyorGrid grid, ConveyorSlot slot)
		{
			if (slot.Item.FreezeTurns > 0 && (!grid.AreAdjacent(slot.Col, slot.Col - 1) || !IsColumnLive(grid, slot.Col - 1, slot.Chain)))
			{
				if (!grid.AreAdjacent(slot.RightCol, slot.RightCol + 1))
				{
					return false;
				}
				return IsColumnLive(grid, slot.RightCol + 1, slot.Chain);
			}
			return true;
		}

		private bool CanGather(ConveyorGrid grid, ConveyorChain chain)
		{
			if (chain == null || chain.IsReady)
			{
				return true;
			}
			foreach (ConveyorSlot member in chain.Members)
			{
				if (!(member.Item != null))
				{
					continue;
				}
				if (member.IsAtFrontRow)
				{
					if (!CanThaw(grid, member))
					{
						return false;
					}
					continue;
				}
				for (int col = member.Col; col <= member.RightCol; col++)
				{
					if (!IsColumnLive(grid, col, chain))
					{
						return false;
					}
				}
			}
			return true;
		}

		private bool IsColumnLive(ConveyorGrid grid, int col, ConveyorChain except)
		{
			if (col >= 0 && col < grid.ColumnCount)
			{
				ConveyorSlot front = grid.FrontSlotAt(col);
				if (front != null && front.Item != null)
				{
					if (except != null && front.Chain == except)
					{
						return false;
					}
					return _live.Contains(front);
				}
				return true;
			}
			return false;
		}

		private static void AddOnce(List<IngredientConveyorItem> list, IngredientConveyorItem item)
		{
			if (!list.Contains(item))
			{
				list.Add(item);
			}
		}
	}
}
