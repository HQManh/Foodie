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
			if (onBecameInvisible != null) onBecameInvisible.OnNext(Unit.Default);
		}

		public IObservable<Unit> OnBecameInvisibleAsObservable()
		{
			if (onBecameInvisible == null) onBecameInvisible = new Subject<Unit>();
			return onBecameInvisible;
		}

		private void OnBecameVisible()
		{
			if (onBecameVisible != null) onBecameVisible.OnNext(Unit.Default);
		}

		public IObservable<Unit> OnBecameVisibleAsObservable()
		{
			if (onBecameVisible == null) onBecameVisible = new Subject<Unit>();
			return onBecameVisible;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onBecameInvisible != null) onBecameInvisible.OnCompleted();
			if (onBecameVisible != null) onBecameVisible.OnCompleted();
		}
	}
}
