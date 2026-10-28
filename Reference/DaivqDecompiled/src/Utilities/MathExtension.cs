using System;
using DG.Tweening;
using UnityEngine;

namespace Utilities;

public static class MathExtension
{
	private const float AVG_FRAME_RATE = 50f;

	private const float c1 = 1.70158f;

	private const float c2 = 2.5949094f;

	private const float c3 = 2.70158f;

	private const float c4 = (float)Math.PI * 2f / 3f;

	private const float c5 = (float)Math.PI * 4f / 9f;

	private const float n1 = 7.5625f;

	private const float d1 = 2.75f;

	public static Vector2 GetPerpendicular(this Vector2 v)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}

	public static float ShortestAngleFromRightVector(this Vector2 vector2)
	{
		return 0f;
	}

	public static float SignedAngleFromRightVector(this Vector2 vector2)
	{
		return 0f;
	}

	public static float ModularClamp(float val, float min, float max, float rangemin = -180f, float rangemax = 180f)
	{
		return 0f;
	}

	public static void LerpTo(this ref float current, float target, float speed)
	{
	}

	public static void LerpToWithUnscaledTime(this ref float current, float target, float speed)
	{
	}

	public static void LerpTo(this ref Vector2 current, Vector2 target, float speed)
	{
	}

	public static void LerpTo(this ref Vector3 current, Vector3 target, float speed)
	{
	}

	public static void LerpTo(this ref Quaternion current, Quaternion target, float speed)
	{
	}

	public static void LerpToWithUnscaledTime(this ref Vector2 current, Vector2 target, float speed)
	{
	}

	public static void LerpToWithUnscaledTime(this ref Vector3 current, Vector3 target, float speed)
	{
	}

	public static void LerpToWithUnscaledTime(this ref Quaternion current, Quaternion target, float speed)
	{
	}

	public static float EvaluateEase(Ease ease, float x)
	{
		return 0f;
	}
}
