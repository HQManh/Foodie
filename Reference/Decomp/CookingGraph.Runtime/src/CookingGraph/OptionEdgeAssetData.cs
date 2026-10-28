using System;

namespace CookingGraph;

[Serializable]
public sealed class OptionEdgeAssetData
{
	public GroupNodeAsset from;

	public CookingNodeAsset to;

	public OptionalInt maxQuantity;
}
