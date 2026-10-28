namespace CookingGraph;

public enum CookingBotFailureReason
{
	Unknown,
	GridOverflow,
	DirtyOverflow,
	CustomerTimeout,
	OutOfIngredient,
	Deadlock,
	IterationLimit
}
