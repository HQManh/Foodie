using System.Collections.Generic;
using UnityEngine;

namespace _GAME.Utils;

public static class HelperGameObject
{
	public static void SetActive(this List<GameObject> objs, bool active)
	{
	}

	public static void SetActive(this GameObject[] objs, bool active)
	{
	}

	public static void SetPosition(this GameObject obj, Vector3 position)
	{
	}

	public static void SetLocalPosition(this GameObject obj, Vector3 position)
	{
	}

	public static float PosX(this GameObject obj)
	{
		return 0f;
	}

	public static float PosY(this GameObject obj)
	{
		return 0f;
	}

	public static float PosZ(this GameObject obj)
	{
		return 0f;
	}

	public static float PosX(this Transform obj)
	{
		return 0f;
	}

	public static float PosY(this Transform obj)
	{
		return 0f;
	}

	public static float PosZ(this Transform obj)
	{
		return 0f;
	}

	public static void SetPosZ(this GameObject obj, float posZ)
	{
	}

	public static void SetLocalPosZ(this GameObject obj, float posZ)
	{
	}

	public static void SetPosZ(this Transform obj, float posZ)
	{
	}

	public static void SetLocalPosZ(this Transform obj, float posZ)
	{
	}
}
