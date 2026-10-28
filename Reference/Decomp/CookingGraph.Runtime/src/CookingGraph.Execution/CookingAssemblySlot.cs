using System.Collections.Generic;

namespace CookingGraph.Execution;

public sealed class CookingAssemblySlot
{
	public int Ingredient { get; }

	public int Composite { get; }

	public string GroupPath { get; }

	public double MergeDuration { get; }

	public IReadOnlyList<int> WaitFor { get; }

	public CookingAssemblySlot(int ingredient, int composite, double mergeDuration, IEnumerable<int> waitFor = null, string groupPath = "")
	{
	}
}
