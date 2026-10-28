using System.Collections.Generic;

namespace CookingGraph;

public static class CookingGraphPreservation
{
	public static List<IngredientNodeAsset> IngredientsFor(CookingGraphAsset graph, ToolNodeAsset tool)
	{
		return null;
	}

	public static List<ToolNodeAsset> ToolsFor(CookingGraphAsset graph, IngredientNodeAsset ingredient)
	{
		return null;
	}

	public static Dictionary<ToolNodeAsset, List<IngredientNodeAsset>> BuildLookup(CookingGraphAsset graph)
	{
		return null;
	}

	private static void Collect(CookingGraphAsset graph, CookingNodeAsset node, ICollection<IngredientNodeAsset> result, ISet<IngredientNodeAsset> seen, ISet<CookingNodeAsset> visiting)
	{
	}
}
