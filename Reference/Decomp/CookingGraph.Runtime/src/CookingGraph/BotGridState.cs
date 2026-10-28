using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class BotGridState
{
	public List<BotGridCellState> cells;
}
