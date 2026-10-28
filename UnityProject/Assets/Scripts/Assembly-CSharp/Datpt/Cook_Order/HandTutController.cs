using System;
using DG.Tweening;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class HandTutController : PoolingObject
	{
		[SerializeField]
		private SpriteRenderer handSprRdr;

		[SerializeField]
		private ParticleSystem touchVfx;

		private Tween tweenMoveCircle;

		private Sequence tweenClickTut;

		public void OnFadeIn()
		{
			// TODO(unrecovered): the pseudocode drives DOTween fade tweens and callbacks whose helper signatures are not in the stubs.
		}

		public void OnFadeOut(Action onComplete = null)
		{
			// TODO(unrecovered): the pseudocode drives DOTween fade tweens and callbacks whose helper signatures are not in the stubs.
		}

		public override void Despawn()
		{
			// TODO(unrecovered): the pseudocode kills tweens and callbacks through DOTween helpers whose signatures are not in the stubs.
		}

		public void ShowHandTutClick()
		{
			// TODO(unrecovered): the pseudocode builds a DOTween click-tutorial sequence through helpers whose signatures are not in the stubs.
		}

		public void StopTut()
		{
			// TODO(unrecovered): the pseudocode kills the tutorial tweens through DOTween helpers whose signatures are not in the stubs.
		}

		public void ShowHandTutBetweenTwoPoints(Transform startPoint, Transform endPoint, float duration = 1f)
		{
			// TODO(unrecovered): the pseudocode builds a DOTween move sequence through helpers whose signatures are not in the stubs.
		}

		public void MoveInCircle(Transform center, float radius = 0.5f, float duration = 2f)
		{
			// TODO(unrecovered): the pseudocode builds a DOTween circular tween with callbacks through helpers whose signatures are not in the stubs.
		}
	}
}
