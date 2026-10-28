using System.Collections.Generic;
using UnityEngine;

namespace _GAME.Bridge;

public static class R1RemoteConfig
{
	public const string EnableKey = "r1plugin_enable";

	public const string TeamEnableSendHeartKey = "r1plugin_team_enable_send_heart";

	private static readonly Dictionary<string, bool> CachedBools;

	public static bool Enable => false;

	public static bool TeamEnableSendHeart => false;

	public static bool IsReady => false;

	public static bool GetBool(string key, bool defaultValue)
	{
		return false;
	}

	public static int GetInt(string key, int defaultValue)
	{
		return 0;
	}

	public static void ClearCache()
	{
	}

	[RuntimeInitializeOnLoadMethod(/*Could not decode attribute arguments.*/)]
	private static void ResetStatics()
	{
	}
}
