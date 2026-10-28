using System;
using System.Collections.Generic;

namespace CookingGraph.Execution;

public sealed class CookingExecutionSnapshot
{
	public Guid RunId { get; }

	public double Time { get; }

	public IReadOnlyList<CookingInventorySnapshot> Inventories { get; }

	public IReadOnlyList<CookingTransferSnapshot> Transfers { get; }

	public IReadOnlyList<CookingAssemblySnapshot> Assemblies { get; }

	internal CookingExecutionSnapshot(Guid run, double time, CookingInventorySnapshot[] inventories, CookingTransferSnapshot[] transfers, CookingAssemblySnapshot[] assemblies)
	{
	}
}
