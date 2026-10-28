using Firebase.Analytics;

namespace _GAME.BaseGame;

public static class TrackingManager
{
	public static string LevelLog => null;

	public static void FirebaseLogEvent(string evName, params Parameter[] parameters)
	{
	}

	public static void LogEventIAPShow(string packId, string placement)
	{
	}
}
