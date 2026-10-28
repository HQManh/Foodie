using System;
using UnityEngine;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableLateUpdateTrigger : ObservableTriggerBase
	{
		private Subject<Unit> lateUpdate;

		private void LateUpdate()
		{
			if (lateUpdate != null)
			{
				lateUpdate.OnNext(Unit.Default);
			}
		}

		public IObservable<Unit> LateUpdateAsObservable()
		{
			if (lateUpdate == null)
			{
				lateUpdate = new Subject<Unit>();
			}
			return lateUpdate;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (lateUpdate != null)
			{
				lateUpdate.OnCompleted();
			}
		}
	}
}
