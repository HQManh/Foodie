namespace CookingGraph;

public sealed class CookingQueueMove
{
	public long ItemId { get; }

	public int Column { get; }

	public int FromRow { get; }

	public int ToRow { get; }

	internal CookingQueueMove(long id, int column, int from, int to)
	{
	}
}
