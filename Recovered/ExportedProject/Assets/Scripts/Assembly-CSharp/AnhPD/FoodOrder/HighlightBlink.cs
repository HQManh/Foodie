using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class HighlightBlink : Highlight
	{
		[SerializeField]
		private Transform root;

		[SerializeField]
		private Material silhouetteMaterial;

		[SerializeField]
		private float width;

		[SerializeField]
		private float duration;

		[Range(0f, 1f)]
		[SerializeField]
		private float minAlpha;

		[Range(0f, 1f)]
		[SerializeField]
		private float maxAlpha;

		[SerializeField]
		private int sortingOffset;

		[SerializeField]
		private bool use8Directions;

		[SerializeField]
		private List<SpriteRenderer> copies;

		private const string CopyName = "_outlineCopy";

		private static readonly Vector2[] Dirs;

		private Tween _tween;

		private bool _isRunning;

		private void Awake()
		{
		}

		public override void Show(bool isSpeedUp = false)
		{
		}

		public void BlinkOnce(float cycleDuration = 0f)
		{
		}

		private void StartBlink(float stepDuration, int loops)
		{
		}

		public override void PreShow()
		{
		}

		public override void Hide()
		{
		}

		private void OnDestroy()
		{
		}

		private bool EnsureCopies()
		{
			return false;
		}

		private bool HasBakedCopies()
		{
			return false;
		}

		public void BuildCopies()
		{
		}

		private SpriteRenderer CreateCopy(SpriteRenderer src, Vector2 worldOffset)
		{
			return null;
		}

		private void SetCopiesActive(bool active)
		{
		}

		private void ApplyAlpha(float a)
		{
		}

		private void ClearCopies()
		{
		}

		private static void DestroyCopy(GameObject go)
		{
		}
	}
}
