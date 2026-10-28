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
			Begin(worldCenter, worldSize, shrinkDuration, null, Vector2.zero);
		}

		public void Focus(Transform follow, Vector2 worldSize, Vector2 offset = default(Vector2), float shrinkDuration = -1f)
		{
			Vector3 p = follow.position;
			Begin(new Vector2(p.x + offset.x, p.y + offset.y), worldSize, shrinkDuration, follow, offset);
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
			// reconstructed: the mask sprite is scaled so its bounds cover worldSize
			Vector2 spriteSize = (mask != null && mask.sprite != null) ? (Vector2)mask.sprite.bounds.size : Vector2.one;
			float sx = spriteSize.x > 0.0001f ? worldSize.x / spriteSize.x : worldSize.x;
			float sy = spriteSize.y > 0.0001f ? worldSize.y / spriteSize.y : worldSize.y;
			return new Vector3(sx, sy, 1f);
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
			// reconstructed: stretch the overlay so it covers the whole orthographic view
			Camera cam = Cam;
			if (overlay == null || cam == null || !cam.orthographic)
			{
				return;
			}
			float height = cam.orthographicSize * 2f;
			float width = height * cam.aspect;
			Transform ot = overlay.transform;
			Vector3 cp = cam.transform.position;
			ot.position = new Vector3(cp.x, cp.y, ot.position.z);
			if (overlay.drawMode != SpriteDrawMode.Simple)
			{
				overlay.size = new Vector2(width, height);
				return;
			}
			if (overlay.sprite != null)
			{
				Vector3 b = overlay.sprite.bounds.size;
				if (b.x > 0.0001f && b.y > 0.0001f)
				{
					ot.localScale = new Vector3(width / b.x, height / b.y, 1f);
				}
			}
		}
	}
}
