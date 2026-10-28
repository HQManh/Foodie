using System.Collections.Generic;

namespace CookingGraph;

public sealed class CookingCustomerSnapshot
{
	public int Index { get; }

	public string Owner { get; }

	public bool Staff { get; }

	public bool Boss { get; }

	public double Patience { get; }

	public double InitialPatience { get; }

	public double Width { get; }

	public double EatingRemaining { get; }

	public IReadOnlyList<int> Composites { get; }

	internal CookingCustomerSnapshot(int index, string owner, bool staff, bool boss, double patience, double initial, double width, double eating, int[] composites)
	{
	}
}
