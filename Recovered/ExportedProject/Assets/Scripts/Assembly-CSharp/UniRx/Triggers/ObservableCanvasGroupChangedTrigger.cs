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
		}

		public IObservable<Unit> OnCanvasGroupChangedAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
