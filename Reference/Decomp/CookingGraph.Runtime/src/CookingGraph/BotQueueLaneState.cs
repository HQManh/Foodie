using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class BotQueueLaneState
{
	public List<BotQueueItemState> items;
}
