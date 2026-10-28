using System;
using System.Collections.Generic;
using UnityEngine;

namespace AnhPD
{
	public static class APDUtilities
	{
		public static void MoveX(this Transform tfMove, float x, float duration = 1f, bool isDisable = true, float delay = 0f, Action action = null)
		{
		}

		public static void MoveY(this Transform tfMove, float y, float duration = 1f, bool isDisable = true, float delay = 0f, Action action = null)
		{
		}

		public static void MoveYLiner(this Transform tfMove, float y, float duration = 1f, bool isDisable = true, float delay = 0f, Action action = null)
		{
		}

		public static void Appear(this Transform tfAppear, float strength = 0.1f)
		{
		}

		public static void FallAppear(this Transform tfAppear, float strength = 0.1f, float height = 0.5f, float duration = 0.2f, Action action = null, float delay = 0f)
		{
		}

		public static void FallAppearLocal(this Transform tfAppear, float strength = 0.1f, float height = 1f, float duration = 0.2f, Action action = null, float delay = 0f)
		{
		}

		public static void TossAppear(this Transform tfAppear, float strength = 0.1f, float height = 0.5f, float duration = 0.2f, Action action = null, float delay = 0f)
		{
		}

		public static void Floating(this Transform tf, float height = -0.01f, float duration = 2f)
		{
		}

		public static void FloatingLocal(this Transform tf, float height = -0.01f, float duration = 2f)
		{
		}

		public static Transform GetNearestTransform(Transform tf, List<Transform> list)
		{
			return null;
		}

		public static int GetNearestTransformIndex(Transform tf, List<Transform> list)
		{
			return 0;
		}

		public static void ReplaceByTarget(this Transform tf, Transform target, float duration = 0.3f, Action action = null)
		{
		}

		public static void SetAlpha(this SpriteRenderer sr, float alpha)
		{
		}

		public static string GetFirstNChars(string value, int n)
		{
			return null;
		}

		public static (string, string) SplitByKey(string value, string key)
		{
			return default;
		}
	}
}
