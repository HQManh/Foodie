using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class ProcessEdgeAssetData
{
	public ToolNodeAsset from;

	public IngredientNodeAsset to;

	public List<ProcessInputAssetData> inputs;

	public int amount;

	public bool auto;

	public string entryMode;

	public OptionalFloat duration;

	public List<ToolNodeAsset> chainTools;
}
