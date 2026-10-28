namespace Klak.Math;

public struct XXHash
{
	private const uint PRIME32_1 = 2654435761u;

	private const uint PRIME32_2 = 2246822519u;

	private const uint PRIME32_3 = 3266489917u;

	private const uint PRIME32_4 = 668265263u;

	private const uint PRIME32_5 = 374761393u;

	private static int _counter;

	public int seed;

	public static XXHash RandomHash => default(XXHash);

	private static uint rotl32(uint x, int r)
	{
		return 0u;
	}

	public static uint GetHash(int data, int seed)
	{
		return 0u;
	}

	public static int Mod(int x, int m)
	{
		return 0;
	}

	public static float GetValue01(int data, int seed)
	{
		return 0f;
	}

	public static int GetRange(int data, int min, int max, int seed)
	{
		return 0;
	}

	public static float GetRange(int data, float min, float max, int seed)
	{
		return 0f;
	}

	public XXHash(int seed)
	{
		this.seed = 0;
	}

	public uint GetHash(int data)
	{
		return 0u;
	}

	public int Range(int max, int data)
	{
		return 0;
	}

	public int Range(int min, int max, int data)
	{
		return 0;
	}

	public float Value01(int data)
	{
		return 0f;
	}

	public float Range(float min, float max, int data)
	{
		return 0f;
	}
}
