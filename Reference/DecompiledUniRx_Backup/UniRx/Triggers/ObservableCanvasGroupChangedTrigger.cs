using System;
using UnityEngine;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableCanvasGroupChangedTrigger : ObservableTriggerBase
	{
		private Subject<Unit> onCanvasGroupChanged;

		private void OnCanvasGroupChanged()
		{
			if (onCanvasGroupChanged != null)
			{
				onCanvasGroupChanged.OnNext(Unit.Default);
			}
		}

		public IObservable<Unit> OnCanvasGroupChangedAsObservable()
		{
			if (onCanvasGroupChanged == null)
			{
				onCanvasGroupChanged = new Subject<Unit>();
			}
			return onCanvasGroupChanged;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onCanvasGroupChanged != null)
			{
				onCanvasGroupChanged.OnCompleted();
			}
		}
	}
}
