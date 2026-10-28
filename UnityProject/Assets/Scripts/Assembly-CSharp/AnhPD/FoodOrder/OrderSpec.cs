using System;

namespace AnhPD.FoodOrder
{
	// Recovered from AnhPD.FoodOrder.OrderSpec$$* (Ghidra). Layout: DisplayId, BaseId, Pieces, HasPieces, Recipe, CustomerIndex, DishIndex, IsMystery.
	public readonly struct OrderSpec : IEquatable<OrderSpec>
	{
		public readonly string DisplayId;

		public readonly string BaseId;

		public readonly PieceSet Pieces;

		public readonly bool HasPieces;

		public readonly string Recipe;

		public readonly int CustomerIndex;

		public readonly int DishIndex;

		public readonly bool IsMystery;

		public bool IsValid => !string.IsNullOrEmpty(DisplayId);

		public OrderSpec(string displayId, string baseId, PieceSet pieces, bool hasPieces, string recipe = null, int customerIndex = -1, int dishIndex = -1, bool isMystery = false)
		{
			DisplayId = displayId;
			BaseId = baseId;
			Pieces = pieces;
			HasPieces = hasPieces;
			Recipe = recipe;
			CustomerIndex = customerIndex;
			DishIndex = dishIndex;
			IsMystery = isMystery;
		}

		public OrderSpec(string displayId, string baseId)
			: this(displayId, baseId, default, false)
		{
		}

		public OrderSpec WithRecipe(string recipe)
		{
			return new OrderSpec(DisplayId, BaseId, Pieces, HasPieces, recipe, CustomerIndex, DishIndex, IsMystery);
		}

		public OrderSpec WithSource(int customerIndex, int dishIndex, bool isMystery = false)
		{
			return new OrderSpec(DisplayId, BaseId, Pieces, HasPieces, Recipe, customerIndex, dishIndex, isMystery);
		}

		// Two piece-based specs match on base id and pieces; otherwise they match on display id.
		public bool Matches(OrderSpec item)
		{
			if (HasPieces && item.HasPieces)
			{
				return BaseId == item.BaseId && Pieces == item.Pieces;
			}
			return DisplayId == item.DisplayId;
		}

		public bool Equals(OrderSpec other)
		{
			return DisplayId == other.DisplayId
				&& BaseId == other.BaseId
				&& Pieces == other.Pieces
				&& HasPieces == other.HasPieces
				&& Recipe == other.Recipe;
		}

		public override bool Equals(object obj)
		{
			return obj is OrderSpec other && Equals(other);
		}

		public override int GetHashCode()
		{
			return HashCode.Combine(DisplayId, BaseId, Pieces, HasPieces, Recipe);
		}

		public override string ToString()
		{
			if (!HasPieces)
			{
				return DisplayId;
			}
			return string.Format("{0} [{1}]", BaseId, Pieces);
		}
	}
}
