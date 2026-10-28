using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class TutorialTalkCharacterPunch : TutorialTalkCharacterView
	{
		[SerializeField]
		private Transform punchTarget;

		[SerializeField]
		private Vector3 punchScale;

		[SerializeField]
		private float punchDuration;

		[SerializeField]
		private int vibrato;

		[SerializeField]
		private float elasticity;

		private Tween _punchTween;

		private Transform Target => null;

		private void Reset()
		{
		}

		public override void PlayTalk()
		{
		}

		private void OnDisable()
		{
		}
	}
}
