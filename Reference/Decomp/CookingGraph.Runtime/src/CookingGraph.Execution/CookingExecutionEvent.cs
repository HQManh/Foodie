using System;

namespace CookingGraph.Execution;

public readonly struct CookingExecutionEvent
{
	public CookingExecutionEventKind Kind { get; }

	public Guid RunId { get; }

	public long TransferId { get; }

	public CookingEndpoint Target { get; }

	public double Time { get; }

	internal CookingExecutionEvent(CookingExecutionEventKind kind, Guid run, long transfer, CookingEndpoint target, double time)
	{
		Kind = CookingExecutionEventKind.TransferClaimed;
		RunId = default(Guid);
		TransferId = 0L;
		Target = default(CookingEndpoint);
		Time = 0.0;
	}
}
