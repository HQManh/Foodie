using System;
using System.Collections.Generic;
using CookingGraph.Execution;

namespace CookingGraph;

public sealed class CookingLevelSession : IDisposable
{
	private sealed class HoldToken : IDisposable
	{
		private Action release;

		internal HoldToken(Action release)
		{
		}

		public void Dispose()
		{
		}
	}

	private readonly ICookingFlightPresentation presentation;

	private bool disposed;

	private readonly HashSet<object> holds;

	public CookingLevelSimulation Simulation { get; private set; }

	public CookingFlightCoordinator Flights { get; private set; }

	public bool Paused { get; set; }

	public bool IsHeld => false;

	public IDisposable Hold()
	{
		return null;
	}

	public CookingLevelSession(CookingLevelSimulation simulation, ICookingFlightPresentation presentation)
	{
	}

	private void Bind(CookingLevelSimulation simulation)
	{
	}

	public void Advance(double gameplayDelta, double patienceDelta, double presentationDelta)
	{
	}

	public void Restart(CookingLevelSimulation replacement)
	{
	}

	public void Dispose()
	{
	}
}
