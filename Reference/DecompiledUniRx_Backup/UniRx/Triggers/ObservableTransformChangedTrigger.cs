using System;
using UnityEngine;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableTransformChangedTrigger : ObservableTriggerBase
	{
		private Subject<Unit> onBeforeTransformParentChanged;

		private Subject<Unit> onTransformParentChanged;

		private Subject<Unit> onTransformChildrenChanged;

		private void OnBeforeTransformParentChanged()
		{
			if (onBeforeTransformParentChanged != null)
			{
				onBeforeTransformParentChanged.OnNext(Unit.Default);
			}
		}

		public IObservable<Unit> OnBeforeTransformParentChangedAsObservable()
		{
			if (onBeforeTransformParentChanged == null)
			{
				onBeforeTransformParentChanged = new Subject<Unit>();
			}
			return onBeforeTransformParentChanged;
		}

		private void OnTransformParentChanged()
		{
			if (onTransformParentChanged != null)
			{
				onTransformParentChanged.OnNext(Unit.Default);
			}
		}

		public IObservable<Unit> OnTransformParentChangedAsObservable()
		{
			if (onTransformParentChanged == null)
			{
				onTransformParentChanged = new Subject<Unit>();
			}
			return onTransformParentChanged;
		}

		private void OnTransformChildrenChanged()
		{
			if (onTransformChildrenChanged != null)
			{
				onTransformChildrenChanged.OnNext(Unit.Default);
			}
		}

		public IObservable<Unit> OnTransformChildrenChangedAsObservable()
		{
			if (onTransformChildrenChanged == null)
			{
				onTransformChildrenChanged = new Subject<Unit>();
			}
			return onTransformChildrenChanged;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onBeforeTransformParentChanged != null)
			{
				onBeforeTransformParentChanged.OnCompleted();
			}
			if (onTransformParentChanged != null)
			{
				onTransformParentChanged.OnCompleted();
			}
			if (onTransformChildrenChanged != null)
			{
				onTransformChildrenChanged.OnCompleted();
			}
		}
	}
}
