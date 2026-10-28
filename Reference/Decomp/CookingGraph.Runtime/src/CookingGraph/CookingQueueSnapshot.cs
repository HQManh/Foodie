using System.Collections.Generic;

namespace CookingGraph;

public sealed class CookingQueueSnapshot
{
	public long Id { get; }

	public int Column { get; }

	public int Row { get; }

	public int Ingredient { get; }

	public int Amount { get; }

	public int Group { get; }

	public QueueGroupKind? GroupKind { get; }

	public int FreezeRemaining { get; }

	public bool Hidden { get; }

	public bool Sweeper { get; }

	public IReadOnlyList<int> KeyColors { get; }

	internal CookingQueueSnapshot(long id, int x, int y, int ingredient, int amount, int group, QueueGroupKind? kind, int frozen, bool hidden, bool sweeper, int[] keyColors)
	{
	}
}
