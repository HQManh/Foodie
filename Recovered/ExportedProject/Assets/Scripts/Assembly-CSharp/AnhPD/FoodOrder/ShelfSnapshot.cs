using System;
using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class ShelfSnapshot
	{
		private readonly List<PieceSet?> _plateHas;

		private readonly List<PieceSet?> _plateLabels;

		private readonly List<PieceSet> _orderPieces;

		private readonly List<int> _plateDishes;

		private readonly List<int> _orderDishes;

		private PieceSet _supply;

		private Func<PieceSet, PieceSet, bool> _canComplete;

		private readonly List<string> _plateSequences;

		private readonly List<string> _orderSequences;

		private Func<int, string, string, bool> _sequenceFits;

		private int[] _assign;

		private bool _dirty;

		private bool _ok;

		public PieceSet Supply => default;

		public int OrderCount => 0;

		public IReadOnlyList<PieceSet> OpenOrders => null;

		public void MarkDirty()
		{
		}

		public PieceSet OrderPieces(int index)
		{
			return default;
		}

		public int OrderDishKey(int index)
		{
			return 0;
		}

		public PieceSet? PlateHas(int index)
		{
			return null;
		}

		public void SetPlateHas(int index, PieceSet? has)
		{
		}

		public string PlateSequence(int index)
		{
			return null;
		}

		public void SetPlateSequence(int index, string sequence)
		{
		}

		public string OrderSequence(int index)
		{
			return null;
		}

		public int AssignOf(int plateIndex)
		{
			return 0;
		}

		public int Solve()
		{
			return 0;
		}

		public bool IsOrderCovered(int orderIndex, int plateCount)
		{
			return false;
		}

		public int UncoveredOrderCount(int plateCount)
		{
			return 0;
		}

		public int PushVirtualPlate(PieceSet has, int dishKey, string sequence = "")
		{
			return 0;
		}

		public void PopVirtualPlate()
		{
		}

		public bool IsDishNeeded(int dishKey)
		{
			return false;
		}

		public bool Ensure(IReadOnlyList<ServePlate> plates, LevelInfo info, FCustomerLineHandle lineHandle, Func<ServePlate, PieceSet?> plateHas, Func<ServePlate, string> plateSequence)
		{
			return false;
		}
	}
}
