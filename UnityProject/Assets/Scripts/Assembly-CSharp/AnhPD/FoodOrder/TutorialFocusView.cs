using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class TutorialFocusView : MonoBehaviour
	{
		[SerializeField]
		private SpriteRenderer overlay;

		[SerializeField]
		private SpriteMask mask;

		[SerializeField]
		private Camera worldCamera;

		[SerializeField]
		private bool fitOverlayToCamera = true;

		[SerializeField]
		private float defaultShrinkDuration = 0.35f;

		[SerializeField]
		private float shrinkFromScale = 2.5f;

		[SerializeField]
		private float fadeInDuration = 0.2f;

		[SerializeField]
		private float fadeInAlpha = 0.7f;

		private Transform _follow;

		private Vector2 _followOffset;

		private Tween _scaleTween;

		private Tween _fadeTween;

		public bool HasFocus { get; private set; }

		public Vector2 WorldCenter { get; private set; }

		public Vector2 WorldSize { get; private set; }

		private Camera Cam => worldCamera != null ? worldCamera : Camera.main;

		private void Awake()
		{
			if (overlay != null && mask != null)
			{
				overlay.maskInteraction = SpriteMaskInteraction.VisibleOutsideMask;
				HideImmediate();
				return;
			}
			Debug.LogError("TutorialFocusView: overlay or mask is missing", this);
			enabled = false;
		}

		public void Focus(Vector2 worldCenter, Vector2 worldSize, float shrinkDuration = -1f)
		{
			// TODO(unrecovered): decompiled body passes only one argument to Begin; size and shrink are not recoverable
		}

		public void Focus(Transform follow, Vector2 worldSize, Vector2 offset = default(Vector2), float shrinkDuration = -1f)
		{
			// TODO(unrecovered): Transform overload args are scrambled in the decompile (x-only position read, reused float slot); center calc ambiguous
		}

		private void Begin(Vector2 worldCenter, Vector2 worldSize, float shrinkDuration, Transform follow, Vector2 offset)
		{
			gameObject.SetActive(true);
			_follow = follow;
			_followOffset = offset;
			HasFocus = true;
			WorldCenter = worldCenter;
			WorldSize = worldSize;
			if (overlay != null)
			{
				overlay.gameObject.SetActive(true);
			}
			if (mask != null)
			{
				mask.gameObject.SetActive(true);
			}
			if (fitOverlayToCamera)
			{
				FitOverlay();
			}
			MoveMask(worldCenter);
			Vector3 scale = MaskScaleFor(worldSize);
			if (shrinkDuration < 0f)
			{
				shrinkDuration = defaultShrinkDuration;
			}
			if (_scaleTween != null)
			{
				_scaleTween.Kill();
			}
			if (mask != null)
			{
				Transform mt = mask.transform;
				mt.localScale = scale * shrinkFromScale;
				_scaleTween = mt.DOScale(scale, shrinkDuration).SetUpdate(true);
				FadeOverlay(fadeInAlpha, fadeInDuration);
			}
		}

		public void Clear(float duration = 0.2f, bool deactivate = false)
		{
			_follow = null;
			HasFocus = false;
			if (_scaleTween != null)
			{
				_scaleTween.Kill();
			}
			FadeOverlay(0f, duration, () =>
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
			_follow = null;
			HasFocus = false;
			if (_scaleTween != null)
			{
				_scaleTween.Kill();
			}
			if (_fadeTween != null)
			{
				_fadeTween.Kill();
			}
			if (overlay != null)
			{
				overlay.gameObject.SetActive(false);
				if (mask != null)
				{
					mask.gameObject.SetActive(false);
				}
			}
		}

		public bool ContainsScreenPoint(Vector2 screenPoint)
		{
			if (!HasFocus)
			{
				return false;
			}
			Camera cam = Cam;
			if (cam == null)
			{
				return false;
			}
			Vector3 world = cam.ScreenToWorldPoint(new Vector3(screenPoint.x, screenPoint.y, 0f));
			if (Mathf.Abs(world.x - WorldCenter.x) > WorldSize.x * 0.5f)
			{
				return false;
			}
			// decompiled code compares the raw screen y against the world center here
			return Mathf.Abs(screenPoint.y - WorldCenter.y) <= WorldSize.y * 0.5f;
		}

		private void LateUpdate()
		{
			if (!HasFocus || _follow == null)
			{
				return;
			}
			Vector3 p = _follow.position;
			WorldCenter = new Vector2(p.x + _followOffset.x, p.y + _followOffset.y);
			MoveMask(WorldCenter);
		}

		private void MoveMask(Vector2 worldCenter)
		{
			if (mask == null)
			{
				return;
			}
			Transform t = mask.transform;
			t.position = new Vector3(worldCenter.x, worldCenter.y, t.position.z);
		}

		private Vector3 MaskScaleFor(Vector2 worldSize)
		{
			// TODO(unrecovered): decompiled body is NEON float-op garbage; sprite-bounds to scale mapping not recoverable
			return default;
		}

		private void FadeOverlay(float alpha, float duration, TweenCallback onComplete = null)
		{
			if (_fadeTween != null)
			{
				_fadeTween.Kill();
			}
			if (overlay == null)
			{
				return;
			}
			Color c = overlay.color;
			if (duration <= 0f)
			{
				overlay.color = new Color(c.r, c.g, c.b, alpha);
				if (onComplete != null)
				{
					onComplete();
				}
				return;
			}
			_fadeTween = DOVirtual.Float(c.a, alpha, duration, v => overlay.color = new Color(c.r, c.g, c.b, v)).SetUpdate(true);
			if (onComplete != null)
			{
				_fadeTween.OnComplete(onComplete);
			}
		}

		private void FitOverlay()
		{
			// TODO(unrecovered): sprite bounds / ortho camera scale branch uses NEON intrinsics and a draw-mode switch; not reliably recovered
		}
	}
}
