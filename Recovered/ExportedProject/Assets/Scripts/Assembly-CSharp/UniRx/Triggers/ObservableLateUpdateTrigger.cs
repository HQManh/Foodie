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
		}

		public IObservable<Unit> LateUpdateAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
