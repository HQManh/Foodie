namespace CookingGraph;

public readonly struct CookingProcessSettings
{
	public float Duration { get; }

	public bool Auto { get; }

	public int OutputAmount { get; }

	internal CookingProcessSettings(float duration, bool auto, int amount)
	{
		Duration = 0f;
		Auto = false;
		OutputAmount = 0;
	}
}
