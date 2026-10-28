using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class BotSaveMeBagState
{
	public string bagId;

	public List<BotSaveMeBagItemState> items;
}
