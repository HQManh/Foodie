using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

namespace _GAME.Utils;

public static class HelperTextMeshPro
{
	public static void SetActive(this TextMeshProUGUI text, bool active)
	{
	}

	public static void SetActive(this List<TextMeshProUGUI> texts, bool active)
	{
	}

	public static bool ActiveSelf(this TextMeshProUGUI text)
	{
		return false;
	}

	public static Vector3 Position(this TextMeshProUGUI text)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	public static void SetPosition(this TextMeshProUGUI text, Vector3 position)
	{
	}

	public static void SetActive(this TMP_InputField inputField, bool active)
	{
	}

	public static void SetActive(this List<TMP_InputField> inputFields, bool active)
	{
	}

	public static bool ActiveSelf(this TMP_InputField inputField)
	{
		return false;
	}

	public static Vector3 Position(this TMP_InputField inputField)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	public static void SetPosition(this TMP_InputField inputField, Vector3 position)
	{
	}

	public static void SetText(this TMP_InputField inputField, string text)
	{
	}

	public static void SetText(this List<TextMeshProUGUI> listText, string value)
	{
	}

	public static void AddOnValueChangedListener(this TMP_InputField inputField, UnityAction<string> action)
	{
	}

	public static void AddOnValueChangedListener(this List<TMP_InputField> inputFields, UnityAction<string> action)
	{
	}
}
