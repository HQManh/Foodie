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
		}

		public IObservable<Unit> FixedUpdateAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
