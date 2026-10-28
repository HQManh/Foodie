using System;
using UnityEngine;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableEnableTrigger : ObservableTriggerBase
	{
		private Subject<Unit> onEnable;

		private Subject<Unit> onDisable;

		private void OnEnable()
		{
		}

		public IObservable<Unit> OnEnableAsObservable()
		{
			return null;
		}

		private void OnDisable()
		{
		}

		public IObservable<Unit> OnDisableAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
