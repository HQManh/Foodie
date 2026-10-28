using System;

namespace CookingGraph.Execution;

public sealed class CookingExecutionSession : IDisposable
{
	public CookingExecution Execution { get; }

	public CookingFlightCoordinator Flights { get; }

	public bool Paused { get; set; }

	public CookingExecutionSession(CookingExecution execution, ICookingFlightPresentation presentation, double? flightTimeoutSeconds = null)
	{
	}

	public void Advance(double gameplayDelta, double presentationDelta)
	{
	}

	public void Restart(CookingExecutionConfig config = null)
	{
	}

	public void Dispose()
	{
	}
}
