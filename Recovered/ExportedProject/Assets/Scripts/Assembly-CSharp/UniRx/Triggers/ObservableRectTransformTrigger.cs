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
		}

		public IObservable<Unit> OnRectTransformDimensionsChangeAsObservable()
		{
			return null;
		}

		private void OnRectTransformRemoved()
		{
		}

		public IObservable<Unit> OnRectTransformRemovedAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
