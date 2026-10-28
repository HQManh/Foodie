using System;
using UnityEngine;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableUpdateTrigger : ObservableTriggerBase
	{
		private Subject<Unit> update;

		private void Update()
		{
			if (update != null) update.OnNext(Unit.Default);
		}

		public IObservable<Unit> UpdateAsObservable()
		{
			if (update == null) update = new Subject<Unit>();
			return update;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (update != null) update.OnCompleted();
		}
	}
}
