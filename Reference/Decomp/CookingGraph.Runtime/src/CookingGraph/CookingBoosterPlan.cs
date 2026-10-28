using System;
using System.Collections.Generic;

namespace CookingGraph;

public sealed class CookingBoosterPlan
{
	public Guid RunId { get; }

	public long Revision { get; }

	public CookingBooster Booster { get; }

	public int Column { get; }

	public int Row { get; }

	public int Customer { get; }

	public int Dish { get; }

	public IReadOnlyList<long> Participants { get; }

	public IReadOnlyList<CookingQueueMove> QueueMoves { get; }

	internal CookingBoosterPlan(Guid run, long revision, CookingBooster booster, int column, int row, int customer, int dish, IEnumerable<long> participants, IEnumerable<CookingQueueMove> moves)
	{
	}
}
