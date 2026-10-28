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
			if (tfHand == null)
			{
				return null;
			}
			Vector3 e = tfHand.localEulerAngles;
			Tween tween = tfHand.DOLocalRotate(new Vector3(0f, e.y, 90f), 0.3f);
			tween.OnComplete(() =>
			{
				if (handPointer != null)
				{
					handPointer.SetActive(true);
				}
			});
			return tween;
		}

		protected Tween HandUpTween()
		{
			if (tfHand == null)
			{
				return null;
			}
			Vector3 e = tfHand.localEulerAngles;
			Tween tween = tfHand.DOLocalRotate(new Vector3(0f, e.y, 0f), 0.3f);
			tween.OnComplete(() =>
			{
				if (handPointer != null)
				{
					handPointer.SetActive(false);
				}
			});
			return tween;
		}

		public override void Show(List<Transform> points)
		{
			// TODO(unrecovered): decompiled body reads an extra stack argument for the Vector2 y component; not recoverable
		}

		public override void Show(List<Vector2> positions)
		{
			// TODO(unrecovered): decompiled body uses a second argument slot that has no counterpart in the stub; sequence wiring not recoverable
		}

		private void Update()
		{
			if (_follow == null)
			{
				return;
			}
			transform.position = _follow.position;
		}

		public override void Hide()
		{
			_follow = null;
			if (_seq != null)
			{
				_seq.Complete();
				_seq.Kill();
			}
			gameObject.SetActive(false);
		}
	}
}
