using CookingGraph.Execution;
using UnityEngine;

namespace CookingGraph;

[CreateAssetMenu(menuName = "Cooking Graph/Profiles/Execution Profile", fileName = "CookingExecutionProfile")]
public sealed class CookingExecutionProfile : ScriptableObject
{
	[Header("Wave starts (simulation seconds)")]
	[Min(0f)]
	public float waveStartDelay;

	[Min(0f)]
	public float initialWaveDelay;

	public bool delayGridWaves;

	public bool delayToolWaves;

	[Tooltip("Off preserves the web rule that Pick waves always bypass the start gate.")]
	public bool delayPickWaves;

	public bool pickResetsWaveDelay;

	[Tooltip("When off, an accepted pick resets the deadline using waveStartDelay.")]
	public bool overridePickResetDelay;

	[Min(0f)]
	public float pickResetDelay;

	[Header("Members within a merge wave (independent of start gates)")]
	[Min(0f)]
	public float mergeMemberStagger;

	public bool staggerGridMembers;

	public bool staggerToolMembers;

	public bool staggerPickMembers;

	[Header("Non-serving queue pieces, including unpacked amounts")]
	[Tooltip("Per accepted pick batch, in dispatch order. Serving Pick flights use their wave offset instead; no double delay.")]
	public bool staggerQueueItems;

	[Min(0f)]
	public float queueItemStagger;

	[Header("Flight lifecycle and session")]
	[Tooltip("Skip physical travel after scheduled departure. Logical stagger/merge time still applies.")]
	public bool instantTravel;

	[Min(0.001f)]
	public float flightTimeoutSeconds;

	[Min(0.001f)]
	public float maxSessionStepSeconds;

	[Tooltip("On matches web pause: existing flight receipts can start paused merge timers. Off holds receipts and watchdog time until resumed; project tweens still require their own pause hook.")]
	public bool acceptArrivalsWhilePaused;

	[Header("Serving behavior")]
	[Tooltip("Rank eligible serving targets by lowest remaining customer time, then completion. Does not change eligibility.")]
	public bool prioritizeMergeSelection;

	[Tooltip("Rank eligible waiting tool inputs by customer urgency, merge readiness, base demand and arrival order. Direct pickups are unchanged.")]
	public bool prioritizeProcessSelection;

	[Tooltip("Per piece (default, and what every earlier package version did): each ingredient serves as soon as it exists. Whole dish: a dish is captured only once every slot has a source. Select Whole dish on a SEPARATE override profile; leave the default profile on Per piece.")]
	public CookingServingMode servingMode;

	[Tooltip("Whole dish only: only a base slot may be covered by a piece leaving a tool or the queue; a completing topping lands on the grid first.")]
	public bool directServeBaseOnly;

	[Tooltip("Whole dish only: a direct queue serve keeps its lane blocked until it departs. Staggered pickups always hold their slot until the last piece departs.")]
	public bool queueHoldBlocksLane;

	[Tooltip("Atomic-moment flow (default). A pick's pieces, or one serving wave, land as one moment; at every moment, commitments not yet started are re-planned (waiting lanes, waiting serves, plates at rest), and per-piece serving ranks the least patient customer first, then the order closest to done. Off keeps the earlier flow.")]
	public bool atomicReplan;

	[Header("Level simulation")]
	[Tooltip("Require active customer demand for every recipe, including auto recipes.")]
	public bool forceOnDemand;

	[Min(1f)]
	public int maxActiveCustomers;

	[Min(0f)]
	public float customerSpaceWidth;

	[Min(0f)]
	public float customerAvatarWidth;

	[Min(0.001f)]
	public float customerDishColumnWidth;

	[Min(1f)]
	public int customerHalfDishesPerColumn;

	[Min(0f)]
	public int customerPreviewCount;

	[Tooltip("Multiplier for weather-sensitive customer patience in non-Normal weather.")]
	[Min(0f)]
	public float weatherPatienceMultiplier;

	[Min(0f)]
	public int defaultStaffClearCount;

	[Min(1f)]
	public int defaultDirtyStackLimit;

	[Min(0f)]
	public int saveMeBagCapacity;

	[Min(0f)]
	public int saveMeShuffleDepth;

	private static CookingExecutionProfile fallback;

	public static CookingExecutionProfile Default => null;

	public CookingExecutionConfig CreateConfig()
	{
		return null;
	}
}
