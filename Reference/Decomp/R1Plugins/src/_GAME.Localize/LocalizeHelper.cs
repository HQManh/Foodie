using System.Collections.Generic;
using TMPro;
using UnityEngine.UI;

namespace _GAME.Localize;

public static class LocalizeHelper
{
	public static string OrNoName(this string name)
	{
		return null;
	}

	public static string OrNoTeam(this string name)
	{
		return null;
	}

	public static void SetTextLocalized(this Text text, string key, params string[] param)
	{
	}

	public static void SetTextLocalizedByKey(this Text text, string key, params string[] param)
	{
	}

	public static void SetTextLocalized(this TextMeshProUGUI text, string key, params string[] param)
	{
	}

	public static void SetTextLocalizedByKey(this TextMeshProUGUI text, string key, params string[] param)
	{
	}

	public static void SetTextLocalizedOrFallback(this TextMeshProUGUI text, string key, string fallbackKey, params string[] param)
	{
	}

	public static void SetTextLocalized(this List<TextMeshProUGUI> listText, string key, params string[] param)
	{
	}

	public static void SetTextLocalizedOrFallback(this List<TextMeshProUGUI> listText, string key, string fallbackKey, params string[] param)
	{
	}

	public static void SetTextLocalizedByKey(this List<TextMeshProUGUI> listText, string key, params string[] param)
	{
	}
}
