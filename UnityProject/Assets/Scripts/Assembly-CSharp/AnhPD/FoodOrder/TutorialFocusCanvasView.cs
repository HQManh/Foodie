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
				if (view == null)
				{
					return true;
				}
				return !view.ContainsScreenPoint(sp);
			}
		}

		[SerializeField]
		private Image overlay;

		[SerializeField]
		private Image hole;

		[SerializeField]
		private Camera worldCamera;

		[SerializeField]
		private float defaultShrinkDuration = 0.35f;

		[SerializeField]
		private float shrinkFromScale = 2.5f;

		[SerializeField]
		private float fadeInDuration = 0.2f;

		[SerializeField]
		[Range(0f, 1f)]
		private float fadeInAlpha = 0.7f;

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

		private RectTransform Root => _rootCached != null ? _rootCached : (_rootCached = transform as RectTransform);

		private CanvasGroup Group => _groupCached != null ? _groupCached : (_groupCached = GetComponent<CanvasGroup>());

		// GetComponentInParent is a guess for the unnamed helper used by the decompile.
		private Canvas Canvas => _canvasCached != null ? _canvasCached : (_canvasCached = GetComponentInParent<Canvas>());

		public bool HasFocus { get; private set; }

		public RectTransform Hole => hole != null ? hole.rectTransform : null;

		public Vector2 WorldCenter
		{
			get
			{
				if (hole == null)
				{
					return default;
				}
				Vector2 screen = RectTransformUtility.WorldToScreenPoint(Cam, Hole.position);
				Camera wc = WorldCam;
				if (wc != null)
				{
					return wc.ScreenToWorldPoint(screen);
				}
				return screen;
			}
		}

		private Camera Cam => Canvas == null || Canvas.renderMode == RenderMode.ScreenSpaceOverlay ? null : Canvas.worldCamera;

		private Camera WorldCam => worldCamera != null ? worldCamera : Camera.main;

		private void Awake()
		{
			if (overlay == null || hole == null)
			{
				Debug.LogError("TutorialFocusCanvasView: overlay or hole is missing", this);
				enabled = false;
				return;
			}
			if (overlay.transform == transform || overlay.transform.parent != transform || hole.transform.parent != transform)
			{
				Debug.LogError("TutorialFocusCanvasView: overlay and hole must be direct children", this);
			}
			SetupStencil();
			overlay.raycastTarget = true;
			hole.raycastTarget = false;
			if (overlay.GetComponent<HoleRaycastFilter>() == null)
			{
				HoleRaycastFilter filter = overlay.gameObject.AddComponent<HoleRaycastFilter>();
				filter.view = this;
			}
			if (Hole != null)
			{
				Hole.pivot = new Vector2(0.5f, 0.5f);
				Hole.anchorMax = new Vector2(0.5f, 0.5f);
				Hole.anchorMin = new Vector2(0.5f, 0.5f);
				HideImmediate();
			}
		}

		private void SetupStencil()
		{
			// TODO(unrecovered): shader name and stencil material property-name literals are DAT_ refs with no text; cannot recover
		}

		public void Focus(Vector2 worldCenter, Vector2 worldSize, float shrinkDuration = -1f)
		{
			WorldRectToLocal(worldCenter, worldSize, out Vector2 center, out Vector2 size);
			Begin(center, size, shrinkDuration);
		}

		public void Focus(Transform follow, Vector2 worldSize, Vector2 offset = default(Vector2), float shrinkDuration = -1f)
		{
			// TODO(unrecovered): Transform overload args are scrambled in the decompile (x-only position read, reused float slot); center calc ambiguous
		}

		public void Focus(RectTransform target, Vector2 padding = default(Vector2), float shrinkDuration = -1f)
		{
			if (target == null)
			{
				Clear(0.2f);
				return;
			}
			RectToLocal(target, out Vector2 center, out Vector2 size);
			Begin(center, new Vector2(padding.x * 2f + size.x, padding.y * 2f + size.y), shrinkDuration);
			_followRect = target;
			_followPadding = padding;
		}

		public void FocusScreen(Vector2 screenCenter, Vector2 screenSize, float shrinkDuration = -1f)
		{
			Vector2 min = ScreenToLocal(screenCenter - screenSize * 0.5f);
			Vector2 max = ScreenToLocal(screenCenter + screenSize * 0.5f);
			Begin((min + max) * 0.5f, max - min, shrinkDuration);
		}

		private void Begin(Vector2 center, Vector2 size, float shrinkDuration)
		{
			gameObject.SetActive(true);
			_followRect = null;
			_followWorld = null;
			HasFocus = true;
			if (overlay != null)
			{
				overlay.gameObject.SetActive(true);
			}
			if (hole != null)
			{
				hole.gameObject.SetActive(true);
			}
			RectTransform rect = Hole;
			if (rect == null)
			{
				Debug.LogError("TutorialFocusCanvasView: hole rect is missing", this);
				return;
			}
			rect.anchoredPosition = center;
			rect.sizeDelta = size;
			if (shrinkDuration < 0f)
			{
				shrinkDuration = defaultShrinkDuration;
			}
			if (_scaleTween != null)
			{
				_scaleTween.Kill();
			}
			rect.localScale = Vector3.one * shrinkFromScale;
			_scaleTween = rect.DOScale(1f, shrinkDuration).SetUpdate(true);
			FadeTo(fadeInAlpha, fadeInDuration);
		}

		public void Clear(float duration = 0.2f, bool deactivate = false)
		{
			HasFocus = false;
			_followRect = null;
			_followWorld = null;
			if (_scaleTween != null)
			{
				_scaleTween.Kill();
			}
			FadeTo(0f, duration, () =>
			{
				HideImmediate();
				if (deactivate)
				{
					gameObject.SetActive(false);
				}
			});
		}

		public void HideImmediate()
		{
			HasFocus = false;
			_followRect = null;
			_followWorld = null;
			if (_scaleTween != null)
			{
				_scaleTween.Kill();
			}
			if (_fadeTween != null)
			{
				_fadeTween.Kill();
			}
			CanvasGroup group = Group;
			if (group != null)
			{
				group.alpha = 0f;
				group.blocksRaycasts = false;
				if (overlay != null)
				{
					overlay.gameObject.SetActive(false);
					if (hole != null)
					{
						hole.gameObject.SetActive(false);
					}
				}
			}
		}

		public bool ContainsScreenPoint(Vector2 screenPoint)
		{
			if (!HasFocus || Hole == null)
			{
				return false;
			}
			return RectTransformUtility.RectangleContainsScreenPoint(Hole, screenPoint, Cam);
		}

		private void LateUpdate()
		{
			if (!HasFocus)
			{
				return;
			}
			Vector2 center;
			Vector2 size;
			if (_followWorld == null)
			{
				if (_followRect == null)
				{
					return;
				}
				RectToLocal(_followRect, out center, out size);
				size += _followPadding * 2f;
			}
			else
			{
				Vector3 p = _followWorld.position;
				WorldRectToLocal(new Vector2(p.x + _followOffset.x, p.y + _followOffset.y), _worldSize, out center, out size);
			}
			RectTransform rect = Hole;
			if (rect == null)
			{
				return;
			}
			rect.anchoredPosition = center;
			rect.sizeDelta = size;
		}

		private void WorldRectToLocal(Vector2 worldCenter, Vector2 worldSize, out Vector2 center, out Vector2 size)
		{
			Vector2 min = WorldToLocal(worldCenter - worldSize * 0.5f);
			Vector2 max = WorldToLocal(worldCenter + worldSize * 0.5f);
			center = (min + max) * 0.5f;
			size = new Vector2(Mathf.Abs(max.x - min.x), Mathf.Abs(max.y - min.y));
		}

		private Vector2 WorldToLocal(Vector2 world)
		{
			Camera wc = WorldCam;
			Vector2 screen = wc != null ? (Vector2)wc.WorldToScreenPoint(world) : world;
			return ScreenToLocal(screen);
		}

		private void RectToLocal(RectTransform target, out Vector2 center, out Vector2 size)
		{
			Vector3[] corners = new Vector3[4];
			target.GetWorldCorners(corners);
			Camera cam = Cam;
			Vector2 min = new Vector2(float.MaxValue, float.MaxValue);
			Vector2 max = new Vector2(-float.MaxValue, -float.MaxValue);
			for (int i = 0; i < 4; i++)
			{
				Vector2 local = ScreenToLocal(RectTransformUtility.WorldToScreenPoint(cam, corners[i]));
				min = Vector2.Min(min, local);
				max = Vector2.Max(max, local);
			}
			center = (min + max) * 0.5f;
			size = max - min;
		}

		private Vector2 ScreenToLocal(Vector2 screenPoint)
		{
			RectTransformUtility.ScreenPointToLocalPointInRectangle(Root, screenPoint, Cam, out Vector2 local);
			return local;
		}

		private void FadeTo(float alpha, float duration, TweenCallback onComplete = null)
		{
			if (_fadeTween != null)
			{
				_fadeTween.Kill();
			}
			CanvasGroup group = Group;
			if (group == null)
			{
				Debug.LogError("TutorialFocusCanvasView: CanvasGroup is missing", this);
				return;
			}
			group.blocksRaycasts = alpha > 0f;
			if (duration <= 0f)
			{
				group.alpha = alpha;
				if (onComplete != null)
				{
					onComplete();
				}
				return;
			}
			_fadeTween = group.DOFade(alpha, duration).SetUpdate(true);
			if (onComplete != null)
			{
				_fadeTween.OnComplete(onComplete);
			}
		}
	}
}
