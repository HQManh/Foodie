using UnityEngine;

namespace _GAME;

public static class R1Features
{
	private static readonly R1Event[] ReleasedEvents;

	public static bool IsRunning { get; set; }

	public static bool IsTurnedOff { get; set; }

	public static bool IsEventEnabled(R1Event e)
	{
		return false;
	}

	[RuntimeInitializeOnLoadMethod(/*Could not decode attribute arguments.*/)]
	private static void ResetStatics()
	{
	}
}
