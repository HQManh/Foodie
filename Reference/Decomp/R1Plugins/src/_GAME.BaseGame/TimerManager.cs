using System;
using System.Collections.Generic;
using UnityEngine;

namespace _GAME.BaseGame;

public static class TimerManager
{
	public static long SessionTime;

	private static int _callbackTickIndex;

	private static Dictionary<int, Action> _callbackTick;

	private static Dictionary<int, Object> _callbackTickOwner;

	private static bool _tickHooked;

	public static DateTime UtcNow => default(DateTime);

	public static DateTime Now => default(DateTime);

	public static long UnixTimeSeconds => 0L;

	public static long UnixTimeSecondsUtc => 0L;

	public static long UnixTimeMilliseconds => 0L;

	public static long UnixTimeMillisecondsUtc => 0L;

	public static int WeekNow => 0;

	public static int WeekUtcNow => 0;

	public static int GetIsoWeekId(DateTime date)
	{
		return 0;
	}

	public static DateTime GetStartOfCurrentWeek(DayOfWeek startOfWeek = DayOfWeek.Monday)
	{
		return default(DateTime);
	}

	public static DateTime GetStartOfCurrentWeekUtc(DayOfWeek startOfWeek = DayOfWeek.Monday)
	{
		return default(DateTime);
	}

	public static DateTime GetEndOfCurrentWeek(DayOfWeek endOfWeek = DayOfWeek.Sunday)
	{
		return default(DateTime);
	}

	public static DateTime GetEndOfCurrentWeekUtc(DayOfWeek endOfWeek = DayOfWeek.Sunday)
	{
		return default(DateTime);
	}

	public static int AddCallbackTick(Action callback, Object owner = null)
	{
		return 0;
	}

	public static void RemoveCallbackTick(int id)
	{
	}

	private static void HookTick()
	{
	}

	private static void OnTick()
	{
	}

	private static void InvokeCallbackTick()
	{
	}

	private static bool IsCallbackTickDead(int id, Action callback)
	{
		return false;
	}

	[RuntimeInitializeOnLoadMethod(/*Could not decode attribute arguments.*/)]
	private static void ResetStatics()
	{
	}
}
