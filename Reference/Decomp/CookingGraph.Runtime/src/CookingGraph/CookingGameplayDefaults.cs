namespace CookingGraph;

public sealed class CookingGameplayDefaults
{
	public bool ForceOnDemand { get; }

	public bool PrioritizeMergeSelection { get; }

	public bool PrioritizeProcessSelection { get; }

	public bool AtomicReplan { get; }

	public int MaxActiveCustomers { get; }

	public float CustomerSpaceWidth { get; }

	public float CustomerAvatarWidth { get; }

	public float CustomerDishColumnWidth { get; }

	public int CustomerHalfDishesPerColumn { get; }

	public int CustomerPreviewCount { get; }

	public float WeatherPatienceMultiplier { get; }

	public int DefaultStaffClearCount { get; }

	public int DefaultDirtyStackLimit { get; }

	public int SaveMeBagCapacity { get; }

	public int SaveMeShuffleDepth { get; }

	internal CookingGameplayDefaults(CookingExecutionProfile p)
	{
	}
}
