using System.Collections.Generic;

namespace CookingGraph;

internal static class CookingSelectionRules
{
	internal static bool Allows(CookingGraphAsset graph, IEnumerable<IngredientNodeAsset> selected)
	{
		return false;
	}
}
