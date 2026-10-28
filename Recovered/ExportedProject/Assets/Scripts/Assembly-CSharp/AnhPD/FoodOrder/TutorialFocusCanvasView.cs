using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	[RequireComponent(typeof(RectTransform), typeof(CanvasGroup))]
	public class TutorialFocusCanvasView : MonoBehaviour
	{
		private class HoleRaycastFilter : MonoBehaviour, ICanvasRaycastFilter
		{
			public TutorialFocusCanvasView view;

			public bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera)
			{
				return false;
			}
		}

		[SerializeField]
		private Image overlay;

		[SerializeField]
		private Image hole;

		[SerializeField]
		private Camera worldCamera;

		[SerializeField]
		private float defaultShrinkDuration;

		[SerializeField]
		private float shrinkFromScale;

		[SerializeField]
		private float fadeInDuration;

		[SerializeField]
		[Range(0f, 1f)]
		private float fadeInAlpha;

		private const int StencilRef = 1;

		private RectTransform _rootCached;

		private CanvasGroup _groupCached;

		private Canvas _canvasCached;

		private RectTransform _followRect;

		private Vector2 _followPadding;

		private Transform _followWorld;

		private Vector2 _followOffset;

		private Vector2 _worldSize;

		private Tween _scaleTween;

		private Tween _fadeTween;

		private RectTransform Root => null;

		private CanvasGroup Group => null;

		private Canvas Canvas => null;

		public bool HasFocus { get; private set; }

		public RectTransform Hole => null;

		public Vector2 WorldCenter => default;

		private Camera Cam => null;

		private Camera WorldCam => null;

		private void Awake()
		{
		}

		private void SetupStencil()
		{
		}

		public void Focus(Vector2 worldCenter, Vector2 worldSize, float shrinkDuration = -1f)
		{
		}

		public void Focus(Transform follow, Vector2 worldSize, Vector2 offset = default(Vector2), float shrinkDuration = -1f)
		{
		}

		public void Focus(RectTransform target, Vector2 padding = default(Vector2), float shrinkDuration = -1f)
		{
		}

		public void FocusScreen(Vector2 screenCenter, Vector2 screenSize, float shrinkDuration = -1f)
		{
		}

		private void Begin(Vector2 center, Vector2 size, float shrinkDuration)
		{
		}

		public void Clear(float duration = 0.2f, bool deactivate = false)
		{
		}

		public void HideImmediate()
		{
		}

		public bool ContainsScreenPoint(Vector2 screenPoint)
		{
			return false;
		}

		private void LateUpdate()
		{
		}

		private void WorldRectToLocal(Vector2 worldCenter, Vector2 worldSize, out Vector2 center, out Vector2 size)
		{
			center = default;
			size = default;
		}

		private Vector2 WorldToLocal(Vector2 world)
		{
			return default;
		}

		private void RectToLocal(RectTransform target, out Vector2 center, out Vector2 size)
		{
			center = default;
			size = default;
		}

		private Vector2 ScreenToLocal(Vector2 screenPoint)
		{
			return default;
		}

		private void FadeTo(float alpha, float duration, TweenCallback onComplete = null)
		{
		}
	}
}
