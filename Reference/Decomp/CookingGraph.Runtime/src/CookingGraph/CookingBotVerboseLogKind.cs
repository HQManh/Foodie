namespace CookingGraph;

public enum CookingBotVerboseLogKind
{
	Initialized,
	ConfigurationChanged,
	StateUnavailable,
	NotPlaying,
	PendingReconciled,
	Cooldown,
	WaitingForWorkCompletion,
	WorkBarrierBypassed,
	NoLegalPick,
	DecisionSelected,
	GridCapacityDeferred,
	CommandRejected,
	PickAccepted,
	FailureKnowledgeAccumulated
}
