using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class RandomOrderLookup
	{
		public const int MaxOrders = 3;

		private readonly List<string> _ids;

		public RandomOrderLookup(List<RecipeComponent> ingredients)
		{
			_ids = new List<string>();
			if (ingredients == null)
			{
				return;
			}
			foreach (RecipeComponent ingredient in ingredients)
			{
				if (ingredient != null && !string.IsNullOrEmpty(ingredient.id))
				{
					_ids.Add(ingredient.id);
				}
			}
		}

		public string GetRandomIngredientId()
		{
			if (_ids.Count == 0)
			{
				return string.Empty; /* literal recovered by guess */
			}
			return _ids[UnityEngine.Random.Range(0, _ids.Count)];
		}

		public List<string> GetRandomListIngredientId()
		{
			List<string> result = new List<string>();
			if (_ids.Count == 0)
			{
				return result;
			}
			int count = UnityEngine.Random.Range(1, MaxOrders + 1);
			for (int i = 0; i < count; i++)
			{
				result.Add(_ids[UnityEngine.Random.Range(0, _ids.Count)]);
			}
			return result;
		}
	}
}
