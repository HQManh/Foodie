namespace CookingGraph.Execution;

public enum CookingExecutionEventKind
{
	TransferClaimed,
	TransferDeparted,
	TransferArrived,
	MergeStarted,
	SlotFilled,
	DishCompleted,
	TransferRetargeted,
	AssemblyChanged,
	TransferCancelled
}
