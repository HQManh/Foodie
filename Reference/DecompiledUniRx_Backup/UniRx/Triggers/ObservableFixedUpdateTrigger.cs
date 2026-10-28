using System;
using UnityEngine;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableFixedUpdateTrigger : ObservableTriggerBase
	{
		private Subject<Unit> fixedUpdate;

		private void FixedUpdate()
		{
			if (fixedUpdate != null)
			{
				fixedUpdate.OnNext(Unit.Default);
			}
		}

		public IObservable<Unit> FixedUpdateAsObservable()
		{
			if (fixedUpdate == null)
			{
				fixedUpdate = new Subject<Unit>();
			}
			return fixedUpdate;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (fixedUpdate != null)
			{
				fixedUpdate.OnCompleted();
			}
		}
	}
}
