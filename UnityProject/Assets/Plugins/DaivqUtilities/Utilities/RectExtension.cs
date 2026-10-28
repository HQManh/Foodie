using UnityEngine;

namespace Utilities
{

public static class RectExtension
{
	public static float ClampX(this Rect rect, float value)
	{
		return 0f;
	}

	public static float ClampY(this Rect rect, float value)
	{
		return 0f;
	}

	public static Vector2 Clamp(this Rect rect, Vector2 value)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}

	public static Vector2 ClampOutside(this Rect rect, Vector2 value)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}

	public static Vector3 Clamp(this Rect rect, Vector3 value)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	public static bool IsContain(this Rect rect, Vector2 position)
	{
		return false;
	}

	public static bool IsNotContain(this Rect rect, Vector2 position)
	{
		return false;
	}

	public static Vector2 GetRandomInside(this Rect rect)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}

	public static Vector2 GetRandomInside(this Rect rect, int seed, Vector2Int data)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}

	public static void DrawGizmo(this Rect rect, Color color)
	{
	}

	public static Vector2 Repeat(this Rect rect, Vector2 value)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}

	public static Rect Expand(this Rect rect, Vector2 expandSize)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Rect);
	}

	public static Rect Expand(this Rect rect, float expandX, float expandY)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Rect);
	}

	public static Rect Shrink(this Rect rect, Vector2 shrinkSize)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Rect);
	}

	public static Rect Shrink(this Rect rect, float shrinkX, float shrinkY)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Rect);
	}

	public static void SetLeft(this RectTransform @this, float val)
	{
	}

	public static void SetRight(this RectTransform @this, float val)
	{
	}

	public static void SetTop(this RectTransform @this, float val)
	{
	}

	public static void SetBottom(this RectTransform @this, float val)
	{
	}

	public static void Set4Bounds(this RectTransform @this, float left, float right, float top, float bottom)
	{
	}

	public static float GetLeft(this RectTransform @this)
	{
		return 0f;
	}

	public static float GetRight(this RectTransform @this)
	{
		return 0f;
	}

	public static float GetTop(this RectTransform @this)
	{
		return 0f;
	}

	public static float GetBottom(this RectTransform @this)
	{
		return 0f;
	}

	public static Vector2[] GetCorners(this Rect @this)
	{
		return null;
	}

	public static Vector2[] GetCorners(this Rect @this, float rotateAngle)
	{
		return null;
	}

	public static Rect CalculateNewBoundingRectByRotation(this Rect @this, float rotateAngle)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Rect);
	}
}
}
