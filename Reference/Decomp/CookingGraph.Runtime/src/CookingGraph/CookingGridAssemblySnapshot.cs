using CookingGraph.Execution;

namespace CookingGraph;

public sealed class CookingGridAssemblySnapshot
{
	public int GridCell { get; }

	public int Output { get; }

	public long MarkerId { get; }

	public CookingAssemblySnapshot Assembly { get; }

	internal CookingGridAssemblySnapshot(int cell, int output, long marker, CookingAssemblySnapshot assembly)
	{
	}
}
