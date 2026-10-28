using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class LevelSupply
	{
		private readonly HashSet<string> _ingredients = new HashSet<string>();

		private readonly HashSet<string> _stations = new HashSet<string>();

		public IReadOnlyCollection<string> Ingredients => _ingredients;

		public IReadOnlyCollection<string> Stations => _stations;

		public LevelPieceBook Pieces { get; } = new LevelPieceBook();

		public bool HasIngredient(string id)
		{
			if (string.IsNullOrEmpty(id))
			{
				return false;
			}
			return _ingredients.Contains(id);
		}

		public bool HasStation(string id)
		{
			if (string.IsNullOrEmpty(id))
			{
				return false;
			}
			return _stations.Contains(id);
		}

		public List<string> StationList()
		{
			return new List<string>(_stations);
		}

		public static LevelSupply Build(RecipeConfigSO recipe, IEnumerable<string> seedIds)
		{
			LevelSupply levelSupply = new LevelSupply();
			if (seedIds != null)
			{
				foreach (string seedId in seedIds)
				{
					if (!string.IsNullOrEmpty(seedId))
					{
						levelSupply._ingredients.Add(seedId);
					}
				}
			}
			if (recipe != null && recipe.recipes != null)
			{
				levelSupply.Expand(recipe.recipes);
			}
			return levelSupply;
		}

		private void Expand(List<RecipeConfig> recipes)
		{
			bool changed;
			do
			{
				changed = false;
				foreach (RecipeConfig recipe in recipes)
				{
					if (recipe == null || recipe.combinations == null)
					{
						continue;
					}
					foreach (RecipeCombineConfig combination in recipe.combinations)
					{
						if (combination == null || combination.components == null || !HasAllIngredients(combination.components))
						{
							continue;
						}
						changed |= _ingredients.Add(recipe.resultId);
						CombinationComponent[] components = combination.components;
						for (int i = 0; i < components.Length; i++)
						{
							if (components[i].type == CombinationComponentType.Station)
							{
								changed |= _stations.Add(components[i].id);
							}
						}
					}
				}
			}
			while (changed);
		}

		private bool HasAllIngredients(CombinationComponent[] components)
		{
			for (int i = 0; i < components.Length; i++)
			{
				if (components[i].type == CombinationComponentType.Ingredient && !_ingredients.Contains(components[i].id))
				{
					return false;
				}
			}
			return true;
		}
	}
}
