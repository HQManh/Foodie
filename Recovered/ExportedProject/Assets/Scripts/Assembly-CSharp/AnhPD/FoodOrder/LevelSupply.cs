using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class LevelSupply
	{
		private readonly HashSet<string> _ingredients;

		private readonly HashSet<string> _stations;

		public IReadOnlyCollection<string> Ingredients => null;

		public IReadOnlyCollection<string> Stations => null;

		public LevelPieceBook Pieces { get; }

		public bool HasIngredient(string id)
		{
			return false;
		}

		public bool HasStation(string id)
		{
			return false;
		}

		public List<string> StationList()
		{
			return null;
		}

		public static LevelSupply Build(RecipeConfigSO recipe, IEnumerable<string> seedIds)
		{
			return null;
		}

		private void Expand(List<RecipeConfig> recipes)
		{
		}

		private bool HasAllIngredients(CombinationComponent[] components)
		{
			return false;
		}
	}
}
