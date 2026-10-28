using System;

namespace _GAME.Utils;

public static class HelperTime
{
	private static readonly DateTime UnixTimeBegin;

	public static long GetTimeBetweenDays(this DateTime time, int days = 1)
	{
		return 0L;
	}

	public static long ToUnixTimeSeconds(this DateTime time)
	{
		return 0L;
	}

	public static long ToUnixTimeMilliseconds(this DateTime time)
	{
		return 0L;
	}

	public static DateTime ToDateTimeUtc(this long unixTime)
	{
		return default(DateTime);
	}

	public static DateTime ToDateTimeLocal(this long unixTime)
	{
		return default(DateTime);
	}

	public static DateTime UnixTimeSecondToDateTime(this long unixTime)
	{
		return default(DateTime);
	}

	public static DateTime UnixTimeMillisecondsToDateTime(this long unixTime)
	{
		return default(DateTime);
	}

	public static int GetWeekOfYear(this DateTime date)
	{
		return 0;
	}

	public static long TimeLeftEndWeekSecond(this DateTime time)
	{
		return 0L;
	}

	public static string FormatTimeCounter(this TimeSpan timeSpan)
	{
		return null;
	}

	public static string FormatTimeCounter(this long totalSecond)
	{
		return null;
	}

	public static string FormatTimePrettyShort(this TimeSpan timeSpan)
	{
		return null;
	}

	public static string FormatTimePrettyShort(this int totalSecond)
	{
		return null;
	}

	public static string FormatTimePrettyShort(this long totalSecond)
	{
		return null;
	}

	public static string FormatTimePrettyFull(this TimeSpan timeSpan)
	{
		return null;
	}

	public static string FormatTimePrettyFull(this long totalSecond)
	{
		return null;
	}
}
