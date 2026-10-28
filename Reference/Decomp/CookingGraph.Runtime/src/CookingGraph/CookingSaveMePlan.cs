using System;
using System.Collections.Generic;

namespace CookingGraph;

public sealed class CookingSaveMePlan
{
	public Guid RunId { get; }

	public long Revision { get; }

	public CookingLoseReason Reason { get; }

	public IReadOnlyList<int> Cells { get; }

	public IReadOnlyList<int> Customers { get; }

	public IReadOnlyList<long> Participants { get; }

	internal CookingSaveMePlan(Guid run, long revision, CookingLoseReason reason, IEnumerable<int> cells, IEnumerable<int> customers, IEnumerable<long> units)
	{
	}
}
