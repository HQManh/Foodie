using System;

namespace CookingGraph;

[Serializable]
public sealed class PreservationEdgeAssetData
{
	public ToolNodeAsset from;

	public CookingNodeAsset to;
}
