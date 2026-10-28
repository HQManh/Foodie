using System;
using System.Collections.Generic;

namespace CookingGraph.Execution;

public sealed class CookingFlightCoordinator : IDisposable
{
	private sealed class Active
	{
		internal CookingTransferSnapshot Flight;

		internal ICookingFlightMotion Motion;

		internal double Started;

		internal bool Acknowledged;
	}

	private readonly CookingExecution execution;

	private readonly ICookingFlightPresentation presentation;

	private readonly Dictionary<long, Active> active;

	private readonly Queue<Active> arrivals;

	private readonly Dictionary<long, string> faults;

	private Guid run;

	private double elapsed;

	private bool disposed;

	private bool pumping;

	private readonly double? timeoutOverride;

	public double TimeoutSeconds => 0.0;

	public IReadOnlyDictionary<long, string> Faults => null;

	public int ActiveMotionCount => 0;

	public bool IsIdle => false;

	public CookingFlightCoordinator(CookingExecution execution, ICookingFlightPresentation presentation, double? timeoutSeconds = null)
	{
	}

	public void Pump(double presentationDelta)
	{
	}

	public bool Retry(long flightId)
	{
		return false;
	}

	public void SkipReadyTravel()
	{
	}

	private void Acknowledge(Active entry)
	{
	}

	private void DrainArrivals()
	{
	}

	private void Cancel(long id)
	{
	}

	private void CancelAll()
	{
	}

	public void Dispose()
	{
	}
}
