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
			Transform first = (points != null && points.Count > 0) ? points[0] : null;
			Transform anchor = first != null ? first : transform;
			Show(new List<Vector2> { (Vector2)anchor.position });
			_follow = first;
		}

		public override void Show(List<Vector2> positions)
		{
			_follow = null;
			transform.position = positions[0];
			if (_seq != null)
			{
				_seq.Kill();
			}
			_seq = DOTween.Sequence();
			_seq.AppendCallback(() =>
			{
				Vector3 e = tfHand.localEulerAngles;
				e.z = 0f;
				tfHand.localEulerAngles = e;
			});
			_seq.Append(HandDownTween());
			_seq.AppendInterval(0.2f);
			_seq.AppendCallback(() => handPointer.SetActive(false));
			_seq.Append(HandUpTween());
			_seq.SetLoops(-1);
			_seq.SetUpdate(true);
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
