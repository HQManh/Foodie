using System.Collections.Generic;
using CookingGraph.Execution;

namespace CookingGraph;

public sealed class CookingLevelSnapshot
{
	public CookingExecutionSnapshot Execution { get; }

	public long Revision { get; }

	public CookingLevelStatus Status { get; }

	public CookingLoseReason LoseReason { get; }

	public IReadOnlyList<CookingQueueSnapshot> Queue { get; }

	public IReadOnlyList<CookingCustomerSnapshot> Customers { get; }

	public IReadOnlyList<CookingCustomerSnapshot> Previews { get; }

	public IReadOnlyList<CookingToolLaneSnapshot> Tools { get; }

	public IReadOnlyList<CookingGridSnapshot> Grid { get; }

	internal CookingLevelSnapshot(CookingExecutionSnapshot execution, long revision, CookingLevelStatus status, CookingLoseReason reason, CookingQueueSnapshot[] queue, CookingCustomerSnapshot[] customers, CookingCustomerSnapshot[] previews, CookingToolLaneSnapshot[] tools, CookingGridSnapshot[] grid)
	{
	}
}
