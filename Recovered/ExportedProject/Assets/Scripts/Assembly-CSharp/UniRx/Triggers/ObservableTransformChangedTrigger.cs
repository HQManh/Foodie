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
		}

		public IObservable<Unit> OnBeforeTransformParentChangedAsObservable()
		{
			return null;
		}

		private void OnTransformParentChanged()
		{
		}

		public IObservable<Unit> OnTransformParentChangedAsObservable()
		{
			return null;
		}

		private void OnTransformChildrenChanged()
		{
		}

		public IObservable<Unit> OnTransformChildrenChangedAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
