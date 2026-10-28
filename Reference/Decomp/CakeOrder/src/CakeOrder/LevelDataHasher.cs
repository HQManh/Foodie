namespace CakeOrder;

public static class LevelDataHasher
{
	public const string EmptyHash = "0000000000000000";

	private const ulong FnvOffsetBasis = 14695981039346656037uL;

	private const ulong FnvPrime = 1099511628211uL;

	private const char FieldSeparator = '|';

	public static string ComputeHash(CakeLevelInitData initData)
	{
		return null;
	}

	public static string ComputeHash(string customerData, string gridData, string queueData)
	{
		return null;
	}

	private static ulong Accumulate(ulong hash, string value)
	{
		return 0uL;
	}

	private static ulong Accumulate(ulong hash, char c)
	{
		return 0uL;
	}

	private static string ToHex(ulong value)
	{
		return null;
	}
}
