namespace CakeOrder.InGame;

public readonly struct OrderRecipe
{
	public readonly int Dish;

	public readonly int[] Pieces;

	public bool IsValid => false;

	public OrderRecipe(int dish, int[] pieces)
	{
		Dish = 0;
		Pieces = null;
	}
}
