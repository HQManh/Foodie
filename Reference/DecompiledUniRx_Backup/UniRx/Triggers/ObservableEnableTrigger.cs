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
			if (onEnable != null)
			{
				onEnable.OnNext(Unit.Default);
			}
		}

		public IObservable<Unit> OnEnableAsObservable()
		{
			if (onEnable == null)
			{
				onEnable = new Subject<Unit>();
			}
			return onEnable;
		}

		private void OnDisable()
		{
			if (onDisable != null)
			{
				onDisable.OnNext(Unit.Default);
			}
		}

		public IObservable<Unit> OnDisableAsObservable()
		{
			if (onDisable == null)
			{
				onDisable = new Subject<Unit>();
			}
			return onDisable;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onEnable != null)
			{
				onEnable.OnCompleted();
			}
			if (onDisable != null)
			{
				onDisable.OnCompleted();
			}
		}
	}
}
