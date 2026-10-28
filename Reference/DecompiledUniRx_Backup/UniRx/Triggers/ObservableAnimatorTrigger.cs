using System;
using UnityEngine;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableAnimatorTrigger : ObservableTriggerBase
	{
		private Subject<int> onAnimatorIK;

		private Subject<Unit> onAnimatorMove;

		private void OnAnimatorIK(int layerIndex)
		{
			if (onAnimatorIK != null)
			{
				onAnimatorIK.OnNext(layerIndex);
			}
		}

		public IObservable<int> OnAnimatorIKAsObservable()
		{
			if (onAnimatorIK == null)
			{
				onAnimatorIK = new Subject<int>();
			}
			return onAnimatorIK;
		}

		private void OnAnimatorMove()
		{
			if (onAnimatorMove != null)
			{
				onAnimatorMove.OnNext(Unit.Default);
			}
		}

		public IObservable<Unit> OnAnimatorMoveAsObservable()
		{
			if (onAnimatorMove == null)
			{
				onAnimatorMove = new Subject<Unit>();
			}
			return onAnimatorMove;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onAnimatorIK != null)
			{
				onAnimatorIK.OnCompleted();
			}
			if (onAnimatorMove != null)
			{
				onAnimatorMove.OnCompleted();
			}
		}
	}
}
