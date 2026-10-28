using System.Collections.Generic;
using UnityEngine.Events;
using UnityEngine.UI;

namespace _GAME.Utils;

public static class HelperButton
{
	public static void SetActive(this Button button, bool active)
	{
	}

	public static void SetActive(this List<Button> buttons, bool active)
	{
	}

	public static bool ActiveSelf(this Button button)
	{
		return false;
	}

	public static void Interactable(this Button button, bool enable)
	{
	}

	public static void Interactable(this List<Button> buttons, bool enable)
	{
	}

	public static void AddOnClickListener(this Button button, UnityAction action)
	{
	}

	public static void AddOnClickListener(this List<Button> buttons, UnityAction action)
	{
	}

	public static void ShowScale(this Button btn, float beginValue = 0f, float scaleValue = 1.1f, float endValue = 1f)
	{
	}

	public static void HideScale(this Button btn, float beginValue = 1f, float scaleValue = 1.1f, float endValue = 0f)
	{
	}
}
