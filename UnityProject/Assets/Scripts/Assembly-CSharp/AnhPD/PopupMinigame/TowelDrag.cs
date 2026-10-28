using System;
using System.Collections.Generic;
using AnhPD;
using UnityEngine;

namespace AnhPD.PopupMinigame
{
	public class TowelDrag : MinigameDragItem
	{
		[SerializeField]
		private SpriteRenderer[] towelWet;

		[SerializeField]
		private Collider2D targetColl;

		[SerializeField]
		private GameObject folded;

		[SerializeField]
		private GameObject unfolded;

		[SerializeField]
		private float totalMoveDistance = 20f;

		[SerializeField]
		private float maxDistancePerFrame = 2f;

		public Action<float> onWipe;

		public Action<float> onTooFast;

		private Vector2 _lastPos;

		private bool _isOverlapping;

		private float _moveDistance;

		public Vector2 HandStartPosition => Tf.position;

		protected override void Awake()
		{
			base.Awake();
			onMouseDown.AddListener(() => Fold(false));
			onRewind.AddListener(() => Fold(true));
		}

		private void Fold(bool isFolded)
		{
			folded.SetActive(isFolded);
			unfolded.SetActive(!isFolded);
		}

		private void UpdateRate()
		{
			float rate = _moveDistance / totalMoveDistance;
			onWipe?.Invoke(rate);
			for (int i = 0; i < towelWet.Length; i++)
			{
				towelWet[i].SetAlpha(rate);
			}
		}

		protected override void MouseDrag()
		{
			// TODO(unrecovered): drag tracking uses base MinigameDragItem private helpers (ClampPosition) and the mouse position argument layout is not recoverable from the stub signature.
		}

		public void Restart()
		{
			_isOverlapping = false;
			_moveDistance = 0f;
			isReady = true;
			Rewind();
		}

		public List<Vector2> GetRandomTargetPoints(int count)
		{
			List<Vector2> points = new List<Vector2>(count);
			if (targetColl == null)
			{
				return points;
			}
			Bounds bounds = targetColl.bounds;
			Vector3 c = bounds.center;
			Vector3 e = bounds.extents;
			for (int i = 0; i < count; i++)
			{
				float x = c.x;
				float y = c.y;
				int tries = 20;
				bool overlap;
				do
				{
					x = UnityEngine.Random.Range(c.x - e.x, c.x + e.x);
					y = UnityEngine.Random.Range(c.y - e.y, c.y + e.y);
					overlap = targetColl.OverlapPoint(new Vector2(x, y));
				}
				while (!overlap && --tries != 0);
				if (!overlap)
				{
					x = c.x;
					y = c.y;
				}
				points.Add(new Vector2(x, y));
			}
			return points;
		}
	}
}
