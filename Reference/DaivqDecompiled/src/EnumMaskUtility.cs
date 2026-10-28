using System;
using System.Collections.Generic;

public static class EnumMaskUtility
{
	public static bool IsEnumPositive(int mask, int enumValue)
	{
		return false;
	}

	public static void SetPositive(ref int mask, int enumValue)
	{
	}

	public static void SetNegative(ref int mask, int enumValue)
	{
	}

	public static List<T> GetEnumValues<T>(int mask) where T : Enum
	{
		return null;
	}

	public static void ForeachEnum<T>(int mask, Action<T, bool> onIterate) where T : Enum
	{
	}

	public static T GetRandomEnum<T>(int mask, T defaultValue) where T : Enum
	{
		return default(T);
	}
}
