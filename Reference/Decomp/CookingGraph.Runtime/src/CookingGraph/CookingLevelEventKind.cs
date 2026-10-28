namespace CookingGraph;

public enum CookingLevelEventKind
{
	Picked,
	QueueChanged,
	ToolStarted,
	ToolCompleted,
	CustomerArrived,
	CustomerServed,
	CustomerTimedOut,
	DirtyAdded,
	DirtyCleared,
	BoosterUsed,
	Saved,
	Won,
	Lost,
	BagReleased,
	CustomerRevived,
	RescueCompleted,
	PlateMoved
}
