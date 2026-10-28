using System;
using System.Collections.Generic;
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
		private float totalMoveDistance;

		[SerializeField]
		private float maxDistancePerFrame;

		public Action<float> onWipe;

		public Action<float> onTooFast;

		private Vector2 _lastPos;

		private bool _isOverlapping;

		private float _moveDistance;

		public Vector2 HandStartPosition => default;

		protected override void Awake()
		{
		}

		private void Fold(bool isFolded)
		{
		}

		private void UpdateRate()
		{
		}

		protected override void MouseDrag()
		{
		}

		public void Restart()
		{
		}

		public List<Vector2> GetRandomTargetPoints(int count)
		{
			return null;
		}
	}
}
