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
		}

		public void OnFadeOut(Action onComplete = null)
		{
		}

		public override void Despawn()
		{
		}

		public void ShowHandTutClick()
		{
		}

		public void StopTut()
		{
		}

		public void ShowHandTutBetweenTwoPoints(Transform startPoint, Transform endPoint, float duration = 1f)
		{
		}

		public void MoveInCircle(Transform center, float radius = 0.5f, float duration = 2f)
		{
		}
	}
}
