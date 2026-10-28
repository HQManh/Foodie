namespace CookingGraph.Execution;

public sealed class CookingExecutionConfig
{
	public bool DelayGridWaves { get; }

	public bool DelayToolWaves { get; }

	public bool DelayPickWaves { get; }

	public bool InstantTravel { get; }

	public double WaveStartDelay { get; }

	public double MemberStagger { get; }

	public bool StaggerGridMembers { get; }

	public bool StaggerToolMembers { get; }

	public bool StaggerPickMembers { get; }

	public bool PickResetsWaveDelay { get; }

	public double PickResetDelay { get; }

	public double InitialWaveDelay { get; }

	public double QueueItemStagger { get; }

	public double FlightTimeoutSeconds { get; }

	public double MaxSessionStepSeconds { get; }

	public bool AcceptArrivalsWhilePaused { get; }

	public CookingServingMode ServingMode { get; }

	public bool DirectServeBaseOnly { get; }

	public bool QueueHoldBlocksLane { get; }

	public bool IndependentBagUnits { get; }

	internal bool WholeDish => false;

	public CookingExecutionConfig(bool instantTravel = false, bool delayGridWaves = true, bool delayToolWaves = true, double waveStartDelay = 0.5, double memberStagger = 0.05, bool staggerGridMembers = true, bool staggerToolMembers = true, bool staggerPickMembers = true, bool delayPickWaves = false, bool pickResetsWaveDelay = true, double? pickResetDelay = null, double initialWaveDelay = 0.0, double queueItemStagger = 0.024, double flightTimeoutSeconds = 10.0, double maxSessionStepSeconds = 0.1, bool acceptArrivalsWhilePaused = true, CookingServingMode servingMode = CookingServingMode.PerPiece, bool directServeBaseOnly = true, bool queueHoldBlocksLane = true, bool independentBagUnits = false)
	{
	}

	internal bool IsGated(CookingWaveType type)
	{
		return false;
	}

	internal double StaggerFor(CookingWaveType type)
	{
		return 0.0;
	}
}
