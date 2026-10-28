using System;
using UnityEngine;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableVisibleTrigger : ObservableTriggerBase
	{
		private Subject<Unit> onBecameInvisible;

		private Subject<Unit> onBecameVisible;

		private void OnBecameInvisible()
		{
		}

		public IObservable<Unit> OnBecameInvisibleAsObservable()
		{
			return null;
		}

		private void OnBecameVisible()
		{
		}

		public IObservable<Unit> OnBecameVisibleAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
