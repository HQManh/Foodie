using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class TutorialTalkCharacterPunch : TutorialTalkCharacterView
	{
		[SerializeField]
		private Transform punchTarget;

		[SerializeField]
		private Vector3 punchScale = new Vector3(0.1f, 0.1f, 0f);

		[SerializeField]
		private float punchDuration = 0.3f;

		[SerializeField]
		private int vibrato = 2;

		[SerializeField]
		private float elasticity = 0.5f;

		private Tween _punchTween;

		private Transform Target => punchTarget != null ? punchTarget : transform;

		private void Reset()
		{
			punchTarget = transform;
		}

		public override void PlayTalk()
		{
			Transform target = Target;
			if (target == null)
			{
				return;
			}
			if (_punchTween != null)
			{
				_punchTween.Kill(true);
			}
			_punchTween = target.DOPunchScale(punchScale, punchDuration, vibrato, elasticity).SetUpdate(true);
		}

		private void OnDisable()
		{
			if (_punchTween != null)
			{
				_punchTween.Kill(true);
			}
		}
	}
}
