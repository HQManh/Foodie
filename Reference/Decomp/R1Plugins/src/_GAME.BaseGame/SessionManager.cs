using UnityEngine;

namespace _GAME.BaseGame;

public static class SessionManager
{
	public static bool IsShowedEventSale2026;

	public static bool IsPlayingLevel => false;

	public static int SessionCount => 0;

	[RuntimeInitializeOnLoadMethod(/*Could not decode attribute arguments.*/)]
	private static void ResetStatics()
	{
	}
}
