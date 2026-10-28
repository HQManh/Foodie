using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class GridAssemblyPartData
{
	public IngredientNodeAsset ingredient;

	public CompositeNodeAsset mergeOwner;

	public string path;

	public List<int> waitFor;
}
