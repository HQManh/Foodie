using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class RandomOrderLookup
	{
		public const int MaxOrders = 3;

		private readonly List<string> _ids;

		public RandomOrderLookup(List<RecipeComponent> ingredients)
		{
		}

		public string GetRandomIngredientId()
		{
			return null;
		}

		public List<string> GetRandomListIngredientId()
		{
			return null;
		}
	}
}
