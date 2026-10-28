using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class GridAssemblyData
{
	public CompositeNodeAsset composite;

	public IngredientNodeAsset output;

	public int anchor;

	public List<GridAssemblyPartData> parts;
}
