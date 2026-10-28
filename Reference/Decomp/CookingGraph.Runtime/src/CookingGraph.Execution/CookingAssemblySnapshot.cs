using System.Collections.Generic;

namespace CookingGraph.Execution;

public sealed class CookingAssemblySnapshot
{
	public CookingEndpoint Address { get; }

	public IReadOnlyList<CookingAssemblySlot> Slots { get; }

	public IReadOnlyList<bool> Filled { get; }

	public IReadOnlyList<bool> Claimed { get; }

	public IReadOnlyList<double?> MergeProgress { get; }

	public bool Complete => false;

	internal CookingAssemblySnapshot(CookingEndpoint address, CookingAssemblySlot[] slots, bool[] filled, bool[] claimed, double?[] progress)
	{
	}
}
