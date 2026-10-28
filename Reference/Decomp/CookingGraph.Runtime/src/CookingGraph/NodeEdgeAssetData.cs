using System;

namespace CookingGraph;

[Serializable]
public sealed class NodeEdgeAssetData
{
	public CookingNodeAsset from;

	public CookingNodeAsset to;
}
