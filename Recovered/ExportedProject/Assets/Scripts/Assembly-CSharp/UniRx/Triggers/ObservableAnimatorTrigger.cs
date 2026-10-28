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
		}

		public IObservable<int> OnAnimatorIKAsObservable()
		{
			return null;
		}

		private void OnAnimatorMove()
		{
		}

		public IObservable<Unit> OnAnimatorMoveAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
