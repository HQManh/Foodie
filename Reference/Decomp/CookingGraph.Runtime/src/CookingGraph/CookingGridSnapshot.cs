using System.Collections.Generic;

namespace CookingGraph;

public sealed class CookingGridSnapshot
{
	public int Index { get; }

	public bool Usable { get; }

	public BotGridItemKind Kind { get; }

	public IReadOnlyList<long> RawUnitIds { get; }

	public IReadOnlyList<CookingGridEffectSnapshot> Effects { get; }

	internal CookingGridSnapshot(int index, bool usable, BotGridItemKind kind, long[] raw, CookingGridEffectSnapshot[] effects)
	{
	}
}
