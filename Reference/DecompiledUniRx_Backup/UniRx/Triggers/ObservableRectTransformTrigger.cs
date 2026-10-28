using System;
using UnityEngine;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableRectTransformTrigger : ObservableTriggerBase
	{
		private Subject<Unit> onRectTransformDimensionsChange;

		private Subject<Unit> onRectTransformRemoved;

		private void OnRectTransformDimensionsChange()
		{
			if (onRectTransformDimensionsChange != null)
			{
				onRectTransformDimensionsChange.OnNext(Unit.Default);
			}
		}

		public IObservable<Unit> OnRectTransformDimensionsChangeAsObservable()
		{
			if (onRectTransformDimensionsChange == null)
			{
				onRectTransformDimensionsChange = new Subject<Unit>();
			}
			return onRectTransformDimensionsChange;
		}

		private void OnRectTransformRemoved()
		{
			if (onRectTransformRemoved != null)
			{
				onRectTransformRemoved.OnNext(Unit.Default);
			}
		}

		public IObservable<Unit> OnRectTransformRemovedAsObservable()
		{
			if (onRectTransformRemoved == null)
			{
				onRectTransformRemoved = new Subject<Unit>();
			}
			return onRectTransformRemoved;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onRectTransformDimensionsChange != null)
			{
				onRectTransformDimensionsChange.OnCompleted();
			}
			if (onRectTransformRemoved != null)
			{
				onRectTransformRemoved.OnCompleted();
			}
		}
	}
}
