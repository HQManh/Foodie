namespace AnhPD.FoodOrder
{
	public class IngredientState
	{
		public string id;

		public int amount;

		public IngredientState(string id, int amount = 1)
		{
		}

		public IngredientState WithAmount(int amount)
		{
			return null;
		}

		public override string ToString()
		{
			return null;
		}
	}
}
