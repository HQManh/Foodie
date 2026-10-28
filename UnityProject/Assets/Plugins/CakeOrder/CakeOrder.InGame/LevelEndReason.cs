namespace CakeOrder.InGame
{

public enum LevelEndReason
{
	Unknown,
	LevelCompleted,
	GridOverflow,
	DirtyOverflow,
	OutOfIngredient,
	CustomerTimeout,
	OutOfServeSlots,
	BeltDeadlock,
	OutOfHearts,
	ChallengeTimeout,
	ChallengeConditionFailed,
	ManualQuit,
	Restart,
	Skip,
	Cheat
}
}
