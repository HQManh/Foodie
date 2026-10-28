using System;

namespace _GAME.Utils;

public class HelperEnum
{
	public static T GetRandomEnum<T>() where T : Enum
	{
		return default(T);
	}

	public static T GetRandomEnum<T>(int minInclusive) where T : Enum
	{
		return default(T);
	}

	public static T GetRandomEnum<T>(int minInclusive, int maxExclusive) where T : Enum
	{
		return default(T);
	}

	public static T[] GetEnumList<T>() where T : Enum
	{
		return null;
	}

	public static int GetEnumLength<T>() where T : Enum
	{
		return 0;
	}
}
