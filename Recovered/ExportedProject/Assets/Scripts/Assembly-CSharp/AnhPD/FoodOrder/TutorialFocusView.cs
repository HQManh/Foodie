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
		private bool fitOverlayToCamera;

		[SerializeField]
		private float defaultShrinkDuration;

		[SerializeField]
		private float shrinkFromScale;

		[SerializeField]
		private float fadeInDuration;

		[SerializeField]
		private float fadeInAlpha;

		private Transform _follow;

		private Vector2 _followOffset;

		private Tween _scaleTween;

		private Tween _fadeTween;

		public bool HasFocus { get; private set; }

		public Vector2 WorldCenter { get; private set; }

		public Vector2 WorldSize { get; private set; }

		private Camera Cam => null;

		private void Awake()
		{
		}

		public void Focus(Vector2 worldCenter, Vector2 worldSize, float shrinkDuration = -1f)
		{
		}

		public void Focus(Transform follow, Vector2 worldSize, Vector2 offset = default(Vector2), float shrinkDuration = -1f)
		{
		}

		private void Begin(Vector2 worldCenter, Vector2 worldSize, float shrinkDuration, Transform follow, Vector2 offset)
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

		private void MoveMask(Vector2 worldCenter)
		{
		}

		private Vector3 MaskScaleFor(Vector2 worldSize)
		{
			return default;
		}

		private void FadeOverlay(float alpha, float duration, TweenCallback onComplete = null)
		{
		}

		private void FitOverlay()
		{
		}
	}
}
