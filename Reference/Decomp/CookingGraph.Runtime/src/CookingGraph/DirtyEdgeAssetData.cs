using System;

namespace CookingGraph;

[Serializable]
public sealed class DirtyEdgeAssetData
{
	public CompositeNodeAsset from;

	public DirtyNodeAsset to;
}
