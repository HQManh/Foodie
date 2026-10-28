namespace AnhPD.FoodOrder
{
	public readonly struct IconGroup
	{
		public readonly int Start;

		public readonly int Count;

		public readonly PieceSet Pieces;

		public IconGroup(int start, int count, PieceSet pieces)
		{
			Start = 0;
			Count = 0;
			Pieces = default;
		}
	}
}
