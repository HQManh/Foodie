namespace AnhPD.FoodOrder
{
	public class IngredientState
	{
		public string id;

		public int amount;

		public IngredientState(string id, int amount = 1)
		{
			this.id = id;
			this.amount = ((amount < 2) ? 1 : amount);
		}

		public IngredientState WithAmount(int amount)
		{
			return new IngredientState(id, amount);
		}

		public override string ToString()
		{
			if (amount > 1)
			{
				return string.Format("{0} x{1}", id, amount);
			}
			return id;
		}
	}
}
