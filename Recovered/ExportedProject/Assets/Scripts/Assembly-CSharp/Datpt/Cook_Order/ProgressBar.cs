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
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		private void Awake()
		{
		}

		public override void Despawn()
		{
		}

		public void OnAppear(Action onAppeared = null)
		{
		}

		public void OnHidden()
		{
		}

		public void AddProgress(float percent)
		{
		}

		public void StartIncrease(float duration = 2f, Action onComplete = null)
		{
		}

		private void SetScaleX(float x)
		{
		}
	}
}
