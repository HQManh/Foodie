using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class BotPreviewOrderState
{
	public int customerIndex;

	public bool isStaff;

	public bool isBoss;

	public List<CompositeNodeAsset> dishes;
}
