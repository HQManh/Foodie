using System.Collections.Generic;
using CakeOrder;
using CookingGraph;

namespace AnhPD.FoodOrder.Autoplay
{
	public sealed class GraphNodeIdMap
	{
		private readonly Dictionary<string, IngredientNodeAsset> _pickupableByLegacyId;

		private readonly Dictionary<string, IngredientNodeAsset> _servableByLegacyId;

		public readonly List<string> Unmapped;

		public int PickupableCount => 0;

		public int ServableCount => 0;

		public bool IsEmpty => false;

		public static GraphNodeIdMap Build(RecipeConfigSO recipe, MapIngredientLookupTable lookup)
		{
			return null;
		}

		public IngredientNodeAsset PickupableNodeOf(string legacyId)
		{
			return null;
		}

		public IngredientNodeAsset ServableNodeOf(string legacyId)
		{
			return null;
		}

		public IngredientNodeAsset NodeOf(string legacyId)
		{
			return null;
		}

		public bool IsServableId(string legacyId)
		{
			return false;
		}

		public void ReportUnmapped(string legacyId)
		{
		}

		public string Describe()
		{
			return null;
		}
	}
}
