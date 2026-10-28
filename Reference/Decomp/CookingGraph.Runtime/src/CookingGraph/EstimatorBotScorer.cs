using System;
using System.Collections.Generic;
using CookingGraph.Execution;

namespace CookingGraph;

internal sealed class EstimatorBotScorer
{
	private sealed class ProcessStep
	{
		public IngredientNodeAsset output;

		public readonly List<IngredientNodeAsset> inputs;

		public int amount;
	}

	private sealed class PreviewSlot
	{
		public bool isBase;

		public bool required;

		public readonly List<IngredientNodeAsset> options;
	}

	private sealed class DemandUnit
	{
		public IngredientNodeAsset target;

		public int customerIndex;

		public float priority;

		public bool multiInput;

		public bool ready;

		public Dictionary<IngredientNodeAsset, float> requirements;
	}

	private sealed class DemandClaim
	{
		public float units;

		public float priority;

		public int customerIndex;

		public bool ready;
	}

	private struct PickupValue
	{
		public float score;

		public int customerIndex;

		public bool ready;
	}

	private struct CandidateValue
	{
		public float score;

		public int customerIndex;

		public bool fromFront;

		public bool ready;
	}

	private readonly CookingGraphAsset _graph;

	private readonly CookingRuntimeSettings _runtimeSettings;

	private CookingServingMode _servingMode;

	private EstimatorBotSettings _settings;

	private CookingBotFailureKnowledge _failureKnowledge;

	private readonly Dictionary<IngredientNodeAsset, ProcessStep> _producer;

	private readonly Dictionary<IngredientNodeAsset, ProcessStep> _consumer;

	private readonly List<ProcessStep> _processSteps;

	private readonly Dictionary<IngredientNodeAsset, Dictionary<IngredientNodeAsset, float>> _requirements;

	private readonly Dictionary<IngredientNodeAsset, int> _depths;

	private readonly Dictionary<IngredientNodeAsset, bool> _multiInputRoutes;

	private readonly Dictionary<IngredientNodeAsset, int> _terminalYields;

	private readonly Dictionary<CompositeNodeAsset, List<PreviewSlot>> _previewSlots;

	private readonly HashSet<IngredientNodeAsset> _servable;

	private static readonly List<DemandClaim> EmptyClaims;

	public EstimatorBotScorer(CookingGraphAsset graph, EstimatorBotSettings settings, CookingBotFailureKnowledge failureKnowledge = null, CookingRuntimeSettings runtimeSettings = null, CookingServingMode? servingMode = null)
	{
	}

	public void SetSettings(EstimatorBotSettings settings)
	{
	}

	public void SetServingMode(CookingServingMode servingMode)
	{
	}

	public void SetFailureKnowledge(CookingBotFailureKnowledge knowledge)
	{
	}

	public BotDecision Decide(BotGameState state, ISet<string> reservedItemIds, IEnumerable<BotCommittedIngredientState> optimisticCommitted, Random random, float intelligent, ISet<BotPickupOption> allowedOptions = null)
	{
		return null;
	}

	internal HashSet<BotPickupOption> WorkBarrierEscapeOptions(BotGameState state, ISet<string> reservedItemIds, IEnumerable<BotCommittedIngredientState> optimisticCommitted)
	{
		return null;
	}

	private void AdvanceSingleInputProcesses(Dictionary<IngredientNodeAsset, float> inventory)
	{
	}

	private static bool HasAnyInput(ProcessStep step, IReadOnlyDictionary<IngredientNodeAsset, float> inventory)
	{
		return false;
	}

	private static int AvailableBatches(ProcessStep step, IReadOnlyDictionary<IngredientNodeAsset, float> inventory)
	{
		return 0;
	}

	private static bool UsesRandomChoice(float intelligent, Random random)
	{
		return false;
	}

	private Dictionary<IngredientNodeAsset, PickupValue> BuildPickupValues(BotGameState state, ISet<string> reservedItemIds, IEnumerable<BotCommittedIngredientState> optimisticCommitted, bool gridTight)
	{
		return null;
	}

	private Dictionary<IngredientNodeAsset, PickupValue> BuildPreviewClaims(BotGameState state, int activeCount)
	{
		return null;
	}

	private float ActiveFailurePriority(int customerIndex, IngredientNodeAsset ingredient)
	{
		return 0f;
	}

	private float PreviewFailurePriority(int customerIndex)
	{
		return 0f;
	}

	internal static string IngredientKnowledgeName(IngredientNodeAsset ingredient)
	{
		return null;
	}

	private CandidateValue ScoreCandidate(BotPickupOption candidate, BotGameState state, IReadOnlyDictionary<IngredientNodeAsset, PickupValue> values, int dirty, bool gridTight, int depth, ISet<string> reservedItemIds)
	{
		return default(CandidateValue);
	}

	internal int EstimateFootprint(BotPickupOption option, BotGameState state)
	{
		return 0;
	}

	internal int EstimateCommittedFootprint(IEnumerable<BotCommittedIngredientState> ingredients)
	{
		return 0;
	}

	internal int EstimateProjectedFootprint(IEnumerable<BotCommittedIngredientState> stateCommitted, IEnumerable<BotCommittedIngredientState> optimisticPending, BotPickupOption candidate, BotGameState state)
	{
		return 0;
	}

	private static Dictionary<IngredientNodeAsset, float> CommittedInventory(IEnumerable<BotCommittedIngredientState> ingredients)
	{
		return null;
	}

	private int EstimatePipelineFootprint(Dictionary<IngredientNodeAsset, float> source)
	{
		return 0;
	}

	private IEnumerable<IngredientNodeAsset> IngredientsOf(BotPickupOption option, BotGameState state)
	{
		return null;
	}

	private Dictionary<IngredientNodeAsset, float> QueueSupply(BotGameState state, ISet<string> reservedItemIds)
	{
		return null;
	}

	private Dictionary<IngredientNodeAsset, float> RawRequirements(IngredientNodeAsset ingredient, HashSet<IngredientNodeAsset> visiting)
	{
		return null;
	}

	private int ProductionDepth(IngredientNodeAsset ingredient, HashSet<IngredientNodeAsset> visiting)
	{
		return 0;
	}

	private bool HasMultiInputRoute(IngredientNodeAsset ingredient, HashSet<IngredientNodeAsset> visiting)
	{
		return false;
	}

	private int TerminalYield(IngredientNodeAsset ingredient)
	{
		return 0;
	}

	private int ResolveTerminalYield(IngredientNodeAsset ingredient, HashSet<IngredientNodeAsset> visiting)
	{
		return 0;
	}

	private List<PreviewSlot> SlotsOf(CompositeNodeAsset composite)
	{
		return null;
	}

	private void WalkComposite(CompositeNodeAsset composite, bool isBase, bool rootToppingRequired, List<PreviewSlot> output, HashSet<CookingNodeAsset> visiting)
	{
	}

	private void WalkSlotNode(CookingNodeAsset node, bool isBase, bool rootToppingRequired, List<PreviewSlot> output, HashSet<CookingNodeAsset> visiting)
	{
	}

	private void BuildIndex()
	{
	}

	private static IEnumerable<string> ConsumedIds(BotPickupOption option)
	{
		return null;
	}

	private static bool IsVisiblyEligible(BotPickupOption option, BotGameState state)
	{
		return false;
	}

	private static bool IsBlockedStatus(BotQueueItemStatus status)
	{
		return false;
	}

	private static int FirstCustomer(BotGameState state)
	{
		return 0;
	}

	private void AddRequirements(Dictionary<IngredientNodeAsset, float> target, IngredientNodeAsset ingredient, float scale)
	{
	}

	private static float Amount(IReadOnlyDictionary<IngredientNodeAsset, float> values, IngredientNodeAsset ingredient)
	{
		return 0f;
	}

	private static void Add(Dictionary<IngredientNodeAsset, float> values, IngredientNodeAsset ingredient, float amount)
	{
	}
}
