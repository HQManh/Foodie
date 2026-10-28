using UnityEngine;

namespace Utilities;

public static class RandomUtility
{
	public static int GetRandomInt => 0;

	public static int GetHash(int data, int seed)
	{
		return 0;
	}

	public static bool GetRandomBool(int data, int seed)
	{
		return false;
	}

	public static float GetValue01(int data, int seed)
	{
		return 0f;
	}

	public static int GetRange(int minInclusive, int maxExclusive)
	{
		return 0;
	}

	public static float GetRange(float min, float max)
	{
		return 0f;
	}

	public static int GetRange(int minInclusive, int maxExclusive, int data, int seed)
	{
		return 0;
	}

	public static float GetRange(float min, float max, int data, int seed)
	{
		return 0f;
	}

	public static int GetRandomIntAroundFloat(float a)
	{
		return 0;
	}

	public static int GetWeightedRandomIndex(int[] weights)
	{
		return 0;
	}

	public static int GetWeightedRandomIndex(int[] weights, int data, int seed)
	{
		return 0;
	}

	public static int[] GetWeightedRandomListIndexs(int amount, int[] weights, int data, int seed)
	{
		return null;
	}

	public static int GetWeightedRandomIndex(float[] weights)
	{
		return 0;
	}

	public static int[] GetWeightedRandomIndexes(float[] weights, int amount)
	{
		return null;
	}

	public static int[] GetWeightedRandomIndexesUseWeightSort(float[] weights, int amount)
	{
		return null;
	}

	public static int GetWeightedRandomIndex(float[] weights, int data, int seed)
	{
		return 0;
	}

	public static int[] GetWeightedRandomListIndexs(int amount, float[] weights, int data, int seed)
	{
		return null;
	}

	public static int[] GetShuffledIndexArray(int length, int data, int seed)
	{
		return null;
	}

	public static int[] GetShuffledIndexArray(int length)
	{
		return null;
	}

	public static int[] GetDisplacementalShuffledIndexArray(int length, float displacementStrength)
	{
		return null;
	}

	public static int[] GetDisplacementalShuffledIndexArray(int length, float displacementStrength, float randomFrequency)
	{
		return null;
	}

	public static Vector2[] GetRandomPositionsInDividedAreaNormalized(Vector2Int division, Vector2 randomness, int numPoints)
	{
		return null;
	}

	public static Vector2[] GetRandomPositionsInDividedAreaNormalized(Vector2Int division, Vector2 randomness, int numPoints, int data, int seed)
	{
		return null;
	}

	public static Vector2[] GetRandomPositionsInDividedArea(Rect area, Vector2Int division, Vector2 randomness, int numPoints)
	{
		return null;
	}

	public static Vector2 RandomInsideInitCircle(int data, int seed)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}

	public static float GetRandomProgressNormByIndex(int index, int total, float randomness)
	{
		return 0f;
	}

	public static float GetRandomValueInsideRangeByIndex(int index, int total, float min, float max, float randomness)
	{
		return 0f;
	}

	public static float GetRandomValueInsideRangeByIndex(int index, int total, Vector2 range, float randomness)
	{
		return 0f;
	}

	public static float GetRandomAngleInsideRangeByIndex(int index, int total, float angleRange, float randomness)
	{
		return 0f;
	}

	public static float GetRandomWithVariant(float baseValue, float variant)
	{
		return 0f;
	}

	public static int GetRandomWithVariant(int baseValue, int variant)
	{
		return 0;
	}
}
