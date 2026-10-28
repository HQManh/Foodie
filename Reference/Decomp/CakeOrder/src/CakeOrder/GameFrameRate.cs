namespace CakeOrder;

public static class GameFrameRate
{
	public static readonly int[] Options;

	public static int Saved => 0;

	public static bool HasPlayerChosen => false;

	public static void ApplySaved()
	{
	}

	public static void Apply(int fps)
	{
	}

	public static void Save(int fps)
	{
	}

	public static bool IsSupported(int fps)
	{
		return false;
	}

	public static int Nearest(int fps)
	{
		return 0;
	}
}
