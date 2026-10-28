using System.Collections.Generic;

namespace CookingGraph.Execution;

public sealed class CookingInventorySnapshot
{
	public CookingEndpoint Address { get; }

	public int Capacity { get; }

	public IReadOnlyList<CookingUnit> Units { get; }

	public IReadOnlyList<long> ClaimedUnitIds { get; }

	internal CookingInventorySnapshot(CookingEndpoint address, int capacity, CookingUnit[] units, long[] claimed)
	{
	}
}
