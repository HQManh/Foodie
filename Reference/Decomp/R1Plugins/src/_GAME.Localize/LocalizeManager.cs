using UnityEngine;
using _GAME.Utils;

namespace _GAME.Localize;

public class LocalizeManager : SingletonManager<LocalizeManager>
{
	public const string Table = "UI_Common";

	public const string KeyPrefix = "r1plugin_";

	public static bool Initialized => false;

	public static string TableKey(string key)
	{
		return null;
	}

	[RuntimeInitializeOnLoadMethod(/*Could not decode attribute arguments.*/)]
	private static void HookLocaleChanged()
	{
	}

	public static string GetTextByLanguageByKey(string key, params string[] newParams)
	{
		return null;
	}

	public static string GetTextOrNullByKey(string key, params string[] newParams)
	{
		return null;
	}

	private static string ApplyParams(string text, string[] newParams)
	{
		return null;
	}
}
