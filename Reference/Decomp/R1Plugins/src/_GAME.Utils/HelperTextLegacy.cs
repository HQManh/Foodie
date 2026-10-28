using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace _GAME.Utils;

public static class HelperTextLegacy
{
	public static void SetActive(this Text text, bool active)
	{
	}

	public static void SetActive(this List<Text> texts, bool active)
	{
	}

	public static bool ActiveSelf(this Text text)
	{
		return false;
	}

	public static Vector3 Position(this Text text)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	public static void SetPosition(this Text text, Vector3 position)
	{
	}

	public static void SetText(this Text text, string value)
	{
	}

	public static void SetActive(this InputField inputField, bool active)
	{
	}

	public static void SetActive(this List<InputField> inputFields, bool active)
	{
	}

	public static bool ActiveSelf(this InputField inputField)
	{
		return false;
	}

	public static Vector3 Position(this InputField inputField)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	public static void SetPosition(this InputField inputField, Vector3 position)
	{
	}

	public static void SetText(this InputField inputField, string text)
	{
	}

	public static void AddOnValueChangedListener(this InputField inputField, UnityAction<string> action)
	{
	}

	public static void AddOnValueChangedListener(this List<InputField> inputFields, UnityAction<string> action)
	{
	}
}
