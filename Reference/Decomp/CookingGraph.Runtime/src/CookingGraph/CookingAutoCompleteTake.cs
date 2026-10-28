using CookingGraph.Execution;

namespace CookingGraph;

public sealed class CookingAutoCompleteTake
{
	public int Slot { get; }

	public int Ingredient { get; }

	public CookingAutoCompleteSource Source { get; }

	public long Participant { get; }

	public CookingEndpoint At { get; }

	public long Transfer { get; }

	public bool Ended { get; }

	internal CookingAutoCompleteTake(int slot, int ingredient, CookingAutoCompleteSource source, long participant, CookingEndpoint at, long transfer, bool ended)
	{
	}
}
