using System;
using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class ShelfSnapshot
	{
		private readonly List<PieceSet?> _plateHas = new List<PieceSet?>();

		private readonly List<PieceSet?> _plateLabels = new List<PieceSet?>();

		private readonly List<PieceSet> _orderPieces = new List<PieceSet>();

		private readonly List<int> _plateDishes = new List<int>();

		private readonly List<int> _orderDishes = new List<int>();

		private PieceSet _supply;

		private Func<PieceSet, PieceSet, bool> _canComplete;

		private readonly List<string> _plateSequences = new List<string>();

		private readonly List<string> _orderSequences = new List<string>();

		private Func<int, string, string, bool> _sequenceFits;

		private int[] _assign;

		private bool _dirty;

		private bool _ok;

		public PieceSet Supply => _supply;

		public int OrderCount => _orderPieces.Count;

		public IReadOnlyList<PieceSet> OpenOrders => _orderPieces;

		public void MarkDirty()
		{
			_dirty = true;
		}

		public PieceSet OrderPieces(int index)
		{
			return _orderPieces[index];
		}

		public int OrderDishKey(int index)
		{
			return _orderDishes[index];
		}

		public PieceSet? PlateHas(int index)
		{
			return _plateHas[index];
		}

		public void SetPlateHas(int index, PieceSet? has)
		{
			_plateHas[index] = has;
		}

		public string PlateSequence(int index)
		{
			return _plateSequences[index];
		}

		public void SetPlateSequence(int index, string sequence)
		{
			_plateSequences[index] = sequence;
		}

		public string OrderSequence(int index)
		{
			return _orderSequences[index];
		}

		public int AssignOf(int plateIndex)
		{
			if (plateIndex >= 0 && _assign != null && plateIndex < _assign.Length)
			{
				return _assign[plateIndex];
			}
			return -1;
		}

		public int Solve()
		{
			return ShelfAssignment.Solve(_plateHas, _orderPieces, _plateLabels, _plateDishes, _orderDishes, _supply, _canComplete, _plateSequences, _orderSequences, _sequenceFits, _assign);
		}

		public bool IsOrderCovered(int orderIndex, int plateCount)
		{
			if (plateCount > 0)
			{
				int n = Math.Min(_assign.Length, plateCount);
				for (int i = 0; i < n; i++)
				{
					if (_assign[i] == orderIndex)
					{
						return true;
					}
				}
			}
			return false;
		}

		public int UncoveredOrderCount(int plateCount)
		{
			int uncovered = 0;
			for (int i = 0; i < _orderPieces.Count; i++)
			{
				if (!IsOrderCovered(i, plateCount))
				{
					uncovered++;
				}
			}
			return uncovered;
		}

		public int PushVirtualPlate(PieceSet has, int dishKey, string sequence = "")
		{
			int index = _plateHas.Count;
			_plateHas.Add(has);
			_plateLabels.Add(null);
			_plateDishes.Add(dishKey);
			_plateSequences.Add(sequence ?? string.Empty);
			if (_assign != null && _assign.Length < _plateHas.Count)
			{
				// TODO(unrecovered): reallocation size is not visible in the pseudocode; plate count used as a guess.
				_assign = new int[_plateHas.Count];
			}
			return index;
		}

		public void PopVirtualPlate()
		{
			if (_plateHas.Count == 0)
			{
				return;
			}
			int last = _plateHas.Count - 1;
			_plateHas.RemoveAt(last);
			_plateLabels.RemoveAt(last);
			_plateDishes.RemoveAt(last);
			_plateSequences.RemoveAt(last);
		}

		public bool IsDishNeeded(int dishKey)
		{
			return _orderDishes.Contains(dishKey);
		}

		// Rebuilds the solver input from the current plates, the open servable orders and the grid supply, then marks the snapshot clean.
		public bool Ensure(IReadOnlyList<ServePlate> plates, LevelInfo info, FCustomerLineHandle lineHandle, Func<ServePlate, PieceSet?> plateHas, Func<ServePlate, string> plateSequence)
		{
			if (!_dirty)
			{
				return _ok;
			}
			_ok = false;
			_plateHas.Clear();
			_plateLabels.Clear();
			_orderPieces.Clear();
			_plateDishes.Clear();
			_orderDishes.Clear();
			_plateSequences.Clear();
			_orderSequences.Clear();
			_supply = default;
			if (info == null || lineHandle == null)
			{
				return false;
			}
			_supply = info.Pieces != null ? info.Pieces.GridPieces() : default;
			_canComplete = info.CanStillComplete;
			_sequenceFits = info.SequenceFits;
			List<OrderSpec> orders = lineHandle.GetActiveServableOrderSpecs();
			if (orders != null)
			{
				foreach (OrderSpec spec in orders)
				{
					if (!spec.HasPieces || spec.Pieces.IsEmpty)
					{
						continue;
					}
					_orderPieces.Add(spec.Pieces);
					_orderDishes.Add(info.DishKeyOfOrder(spec));
					_orderSequences.Add(info.SequenceOf(spec.DisplayId));
				}
			}
			if (plates != null)
			{
				for (int i = 0; i < plates.Count; i++)
				{
					ServePlate plate = plates[i];
					bool alive = plate != null;
					_plateLabels.Add(alive ? plate.Order : null);
					_plateHas.Add(plateHas != null && alive ? plateHas(plate) : null);
					_plateDishes.Add(alive ? plate.DishKey : -1);
					_plateSequences.Add(plateSequence != null && alive ? plateSequence(plate) : string.Empty);
				}
				int needed = Math.Max(plates.Count, 8);
				if (_assign == null || _assign.Length < needed)
				{
					_assign = new int[needed];
				}
			}
			_dirty = false;
			_ok = true;
			return true;
		}
	}
}
