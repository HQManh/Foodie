using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace _GAME.Utils;

public static class Helper
{
	public static bool IsNullOrEmpty<T>(this IList<T> list)
	{
		return false;
	}

	public static void AddElements<T>(this List<T> list, params T[] elements)
	{
	}

	public static T GetRandomElement<T>(this List<T> list)
	{
		return default(T);
	}

	public static List<T> GetRandomListWithUniqueElements<T>(List<T> list, int numberOfElements)
	{
		return null;
	}

	public static List<T> GetNewListFromListWithEndIndex<T>(List<T> list, int index)
	{
		return null;
	}

	public static void ShuffleList<T>(List<T> list)
	{
	}

	public static List<T> Copy<T>(this List<T> src, List<T> dst = null)
	{
		return null;
	}

	public static Dictionary<TA, TB> Copy<TA, TB>(this Dictionary<TA, TB> src)
	{
		return null;
	}

	public static Quaternion RandomRotation()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Quaternion);
	}

	public static Transform GetObjectTransform<T>(T obj)
	{
		return null;
	}

	public static RectTransform GetObjectRectTransform<T>(T obj)
	{
		return null;
	}

	public static List<Transform> GetObjectTransforms<T>(List<T> list)
	{
		return null;
	}

	public static Transform GetRandomTransform(List<Transform> transforms)
	{
		return null;
	}

	public static Vector3 GetObjectPosition<T>(T obj)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	public static List<Vector3> GetObjectPositions<T>(List<T> list)
	{
		return null;
	}

	public static List<Quaternion> GetObjectRotations<T>(List<T> list)
	{
		return null;
	}

	public static void SetObjectPosition(MonoBehaviour monoObject, Vector3 position)
	{
	}

	public static void SetObjectPosition(MonoBehaviour monoObject, Transform transform, float height)
	{
	}

	public static void SetObjectPositions<T>(List<T> objects, List<Transform> points, float height)
	{
	}

	public static void SetObjectRandomPositions<T>(List<T> objects, List<Transform> points, float height)
	{
	}

	public static void SetObjectPositions(List<Transform> objectTransforms, List<Transform> points, float height)
	{
	}

	public static void SetObjectRotations(List<Transform> objectTransforms, List<Quaternion> quaternions)
	{
	}

	public static string ToHex(this Color color, bool includeAlpha = true)
	{
		return null;
	}

	public static string ToHex(this Color32 c, bool includeAlpha = true)
	{
		return null;
	}

	public static Color ToColor(this string hex)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Color);
	}

	public static void SetActive(this Image image, bool active)
	{
	}

	public static void SetActive(this List<Image> images, bool active)
	{
	}

	public static bool ActiveSelf(this Image image)
	{
		return false;
	}

	public static void SetSprite(this Image image, Sprite sprite)
	{
	}

	public static void SetSprite(this List<Image> images, Sprite sprite)
	{
	}

	public static void SetActive(this Transform transform, bool active)
	{
	}

	public static void SetActive(this List<Transform> transforms, bool active)
	{
	}

	public static bool ActiveSelf(this Transform transform)
	{
		return false;
	}

	public static void SetActive(this RectTransform rectTransform, bool active)
	{
	}

	public static void SetActive(this List<RectTransform> rectTransforms, bool active)
	{
	}

	public static bool ActiveSelf(this RectTransform rectTransform)
	{
		return false;
	}

	public static void CopySizePos(this RectTransform srcRect, RectTransform dstRect)
	{
	}

	public static void ScrollToTop(this ScrollRect scrollRect)
	{
	}

	public static void SetActive(this ParticleSystem particle, bool active)
	{
	}

	public static void SetActive(this List<ParticleSystem> particles, bool active)
	{
	}

	public static bool ActiveSelf(this ParticleSystem particle)
	{
		return false;
	}

	public static void InvokeAndClean(this Action action)
	{
	}

	public static void InvokeAndClean(this List<Action> actions)
	{
	}

	public static void InvokeAndClean(this UnityAction action)
	{
	}

	public static void InvokeAndClean(this List<UnityAction> actions)
	{
	}

	public static void SetActive(this SpriteRenderer spriteRenderer, bool active)
	{
	}

	public static void SetActive(this List<SpriteRenderer> spriteRenderers, bool active)
	{
	}

	public static bool ActiveSelf(this SpriteRenderer spriteRenderer)
	{
		return false;
	}

	public static void SetSortingOrder(this List<SpriteRenderer> spriteRenderers, int sortingOrder)
	{
	}

	public static void SetSortingLayer(this SpriteRenderer sprt, string sortingLayer, int sortingOrder)
	{
	}

	public static void SetActive(this CanvasGroup canvasGroup, bool active, float alpha = 1f)
	{
	}

	public static void SetAlpha(this CanvasGroup canvasGroup, float alpha)
	{
	}

	public static void SetActive(this List<CanvasGroup> canvasGroups, bool active, float alpha = 1f)
	{
	}

	public static void SetAlpha(this List<CanvasGroup> canvasGroups, float alpha)
	{
	}

	public static bool ActiveSelf(this CanvasGroup canvasGroup)
	{
		return false;
	}

	public static float GetAngleFromTwoPositions(Transform from, Transform to)
	{
		return 0f;
	}

	public static void SetEulerAnglesZAxis(this Transform self, float z)
	{
	}

	public static void SetRotationFromTwoTransforms(this Transform self, Transform from, Transform to)
	{
	}

	public static float GetNormalizedAngle(float angle)
	{
		return 0f;
	}
}
