using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class CookingIdTables
{
	public List<IngredientNodeAsset> ingredient;

	public List<CompositeNodeAsset> composite;

	public List<GroupNodeAsset> group;

	public List<ToolNodeAsset> tool;

	public List<DirtyNodeAsset> dirty;
}
