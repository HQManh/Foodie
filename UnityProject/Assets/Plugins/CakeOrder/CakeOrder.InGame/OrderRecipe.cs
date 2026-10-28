namespace CakeOrder.InGame
{
	public readonly struct OrderRecipe
	{
		public readonly int Dish;

		public readonly int[] Pieces;

		public bool IsValid => Pieces != null && Pieces.Length > 0;

		public OrderRecipe(int dish, int[] pieces)
		{
			Dish = dish;
			Pieces = pieces;
		}
	}
}
