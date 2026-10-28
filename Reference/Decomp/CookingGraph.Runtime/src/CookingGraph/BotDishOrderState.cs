using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class BotDishOrderState
{
	public CompositeNodeAsset orderable;

	public List<BotOrderSlotState> slots;
}
