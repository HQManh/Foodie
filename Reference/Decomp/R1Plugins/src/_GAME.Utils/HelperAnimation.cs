using System.Collections.Generic;
using UnityEngine;

namespace _GAME.Utils;

public static class HelperAnimation
{
	public static void SetActive(this Animator animator, bool active)
	{
	}

	public static void SetActive(this List<Animator> animators, bool active)
	{
	}

	public static bool ActiveSelf(this Animator animator)
	{
		return false;
	}

	public static Vector3 Position(this Animator animator)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	public static void SetPosition(this Animator animator, Vector3 position)
	{
	}

	public static void ResetAndSetTrigger(this Animator animator, string name)
	{
	}

	public static void ResetAndSetTrigger(this List<Animator> animators, string name)
	{
	}
}
