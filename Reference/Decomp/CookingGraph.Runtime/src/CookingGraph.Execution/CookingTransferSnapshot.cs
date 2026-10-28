using System;

namespace CookingGraph.Execution;

public sealed class CookingTransferSnapshot
{
	public Guid RunId { get; }

	public long Id { get; }

	public CookingUnit Unit { get; }

	public CookingEndpoint Source { get; }

	public CookingEndpoint Target { get; }

	public long? WaveId { get; }

	public double Offset { get; }

	public double? ReleasedAt { get; }

	public double? DepartedAt { get; }

	public CookingTransferPhase Phase => CookingTransferPhase.Waiting;

	internal CookingTransferSnapshot(Guid runId, long id, CookingUnit unit, CookingTransferRequest request, long? waveId, double offset, double? releasedAt, double? departedAt)
	{
	}
}
