using System;

namespace AnhPD.FoodOrder
{
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

		public bool IsValid => false;

		public OrderSpec(string displayId, string baseId, PieceSet pieces, bool hasPieces, string recipe = null, int customerIndex = -1, int dishIndex = -1, bool isMystery = false)
		{
			DisplayId = null;
			BaseId = null;
			Pieces = default;
			HasPieces = false;
			Recipe = null;
			CustomerIndex = 0;
			DishIndex = 0;
			IsMystery = false;
		}

		public OrderSpec(string displayId, string baseId)
		{
			DisplayId = null;
			BaseId = null;
			Pieces = default;
			HasPieces = false;
			Recipe = null;
			CustomerIndex = 0;
			DishIndex = 0;
			IsMystery = false;
		}

		public OrderSpec WithRecipe(string recipe)
		{
			return default;
		}

		public OrderSpec WithSource(int customerIndex, int dishIndex, bool isMystery = false)
		{
			return default;
		}

		public bool Matches(OrderSpec item)
		{
			return false;
		}

		public bool Equals(OrderSpec other)
		{
			return false;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}

		public override string ToString()
		{
			return null;
		}
	}
}
