using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableCancelTrigger : ObservableTriggerBase, IEventSystemHandler, ICancelHandler
	{
		private Subject<BaseEventData> onCancel;

		void ICancelHandler.OnCancel(BaseEventData eventData)
		{
		}

		public IObservable<BaseEventData> OnCancelAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
