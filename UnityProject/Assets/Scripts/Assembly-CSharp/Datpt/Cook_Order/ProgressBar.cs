using System;
using System.Runtime.CompilerServices;
using DG.Tweening;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class ProgressBar : PoolingObject
	{
		[SerializeField]
		private Transform maskProgressTf;

		[SerializeField]
		private bool useUnscaledTime;

		private float widthOfMask;

		private float maxSizeValue;

		private float minSizeValue;

		private Tween tweenRunProgress;

		[CompilerGenerated]
		private Action m_OnCompleted;

		public event Action OnCompleted
		{
			[CompilerGenerated]
			add
			{
				m_OnCompleted = (Action)Delegate.Combine(m_OnCompleted, value);
			}
			[CompilerGenerated]
			remove
			{
				m_OnCompleted = (Action)Delegate.Remove(m_OnCompleted, value);
			}
		}

		private void Awake()
		{
			if (maskProgressTf != null)
			{
				widthOfMask = maskProgressTf.localScale.x;
				maxSizeValue = widthOfMask;
				minSizeValue = 0f;
				return;
			}
		}

		public override void Despawn()
		{
			base.Despawn();
			OnHidden();
		}

		public void OnAppear(Action onAppeared = null)
		{
			// TODO(unrecovered): DOScale tween of this transform to the static Vector3 at DAT_0918cbd0->0xb8 with a callback that invokes onAppeared; DOTween and the static owner are not in stubs.
		}

		public void OnHidden()
		{
			// TODO(unrecovered): DOScale tween back to the static Vector3 at DAT_0918cbd0->0xb8 and resets maskProgressTf.localScale using the static y/z components (owner not in stubs).
		}

		public void AddProgress(float percent)
		{
			// TODO(unrecovered): kills tweenRunProgress through DG.Tweening.TweenExtensions and tweens with DOVirtual.Float calling SetScaleX; the static epsilon/owner at DAT_0917f008 and FUN_063be1d4 (tween setter) have no stub equivalents.
		}

		public void StartIncrease(float duration = 2f, Action onComplete = null)
		{
			// TODO(unrecovered): builds a DOVirtual.Float tween with an ease (FUN_04d95e8c/FUN_04d956bc tween setters) and a callback invoking m_OnCompleted; the tween setters have no stub equivalents.
		}

		private void SetScaleX(float x)
		{
			maskProgressTf.localScale = new Vector3(Mathf.Clamp(x, minSizeValue, maxSizeValue), 1f, 1f);
			// TODO(unrecovered): when x <= minSizeValue + epsilon, m_OnCompleted is invoked; the epsilon comes from the static float at DAT_09187e98->0xb8 (owner not in stubs).
		}
	}
}
