using System.Collections.Generic;

namespace CookingGraph;

public sealed class CookingToolLaneSnapshot
{
	public int Tool { get; }

	public int Lane { get; }

	public bool Cooking { get; }

	public bool HoldingOutput { get; }

	public double Elapsed { get; }

	public double Duration { get; }

	public int Output { get; }

	public IReadOnlyList<int> FlatSlots { get; }

	internal CookingToolLaneSnapshot(int tool, int lane, bool cooking, bool holding, double elapsed, double duration, int output, int[] slots)
	{
	}
}
