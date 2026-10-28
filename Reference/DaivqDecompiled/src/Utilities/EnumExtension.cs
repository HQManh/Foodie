using System;

namespace Utilities;

public static class EnumExtension
{
	public static bool IsOneOf<T>(this T self, params T[] values) where T : Enum
	{
		return false;
	}

	public static bool IsNotOf<T>(this T self, params T[] values) where T : Enum
	{
		return false;
	}
}
