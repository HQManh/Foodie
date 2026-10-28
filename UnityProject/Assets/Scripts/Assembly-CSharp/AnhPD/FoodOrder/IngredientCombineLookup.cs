using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class IngredientCombineLookup
	{
		private Dictionary<CombineKey, string> _lookup;

		private HashSet<string> _combinableIds;

		public IngredientCombineLookup(List<RecipeConfig> recipes)
		{
			BuildLookup(recipes);
		}

		private void BuildLookup(List<RecipeConfig> recipes)
		{
			_lookup = new Dictionary<CombineKey, string>();
			_combinableIds = new HashSet<string>();
			foreach (RecipeConfig recipe in recipes)
			{
				string resultId = recipe.resultId;
				foreach (RecipeCombineConfig combination in recipe.combinations)
				{
					if (TryGetIngredientPair(combination, out var ing, out var ing2))
					{
						CombineKey key = new CombineKey(ing, ing2);
						_combinableIds.Add(ing);
						_combinableIds.Add(ing2);
						if (!_lookup.ContainsKey(key))
						{
							_lookup.Add(key, resultId);
						}
						else
						{
							UnityEngine.Debug.LogWarning("Duplicate combine: " + ing + " + " + ing2); /* literal recovered by guess */
						}
					}
				}
			}
		}

		private bool TryGetIngredientPair(RecipeCombineConfig comb, out string ing1, out string ing2)
		{
			ing1 = null;
			ing2 = null;
			CombinationComponent[] components = comb.components;
			if (components.Length < 1)
			{
				return false;
			}
			int i;
			for (i = 0; i < components.Length; i++)
			{
				CombinationComponent combinationComponent = components[i];
				if (combinationComponent.type != CombinationComponentType.Ingredient)
				{
					return false;
				}
				switch (i)
				{
				case 0:
					ing1 = combinationComponent.id;
					continue;
				case 1:
					ing2 = combinationComponent.id;
					continue;
				}
				return false;
			}
			return i == 2;
		}

		public bool TryGetResult(string id1, string id2, out string result)
		{
			CombineKey key = new CombineKey(id1, id2);
			return _lookup.TryGetValue(key, out result);
		}

		public bool HasAnyCombine(string id)
		{
			if (string.IsNullOrEmpty(id))
			{
				return false;
			}
			return _combinableIds.Contains(id);
		}
	}
}
