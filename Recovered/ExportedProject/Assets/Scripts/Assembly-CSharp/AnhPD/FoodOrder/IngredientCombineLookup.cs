using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class IngredientCombineLookup
	{
		private Dictionary<CombineKey, string> _lookup;

		private HashSet<string> _combinableIds;

		public IngredientCombineLookup(List<RecipeConfig> recipes)
		{
		}

		private void BuildLookup(List<RecipeConfig> recipes)
		{
		}

		private bool TryGetIngredientPair(RecipeCombineConfig comb, out string ing1, out string ing2)
		{
			ing1 = null;
			ing2 = null;
			return false;
		}

		public bool TryGetResult(string id1, string id2, out string result)
		{
			result = null;
			return false;
		}

		public bool HasAnyCombine(string id)
		{
			return false;
		}
	}
}
