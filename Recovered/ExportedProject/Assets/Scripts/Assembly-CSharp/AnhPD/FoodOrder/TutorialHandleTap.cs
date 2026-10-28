using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class TutorialHandleTap : TutorialHandle
	{
		[SerializeField]
		protected Transform tfHand;

		[SerializeField]
		protected GameObject handPointer;

		private Sequence _seq;

		private Transform _follow;

		protected Tween HandDownTween()
		{
			return null;
		}

		protected Tween HandUpTween()
		{
			return null;
		}

		public override void Show(List<Transform> points)
		{
		}

		public override void Show(List<Vector2> positions)
		{
		}

		private void Update()
		{
		}

		public override void Hide()
		{
		}
	}
}
