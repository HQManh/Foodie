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
		}

		public IObservable<Unit> UpdateAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
