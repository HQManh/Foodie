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
			if (onCancel != null)
			{
				onCancel.OnNext(eventData);
			}
		}

		public IObservable<BaseEventData> OnCancelAsObservable()
		{
			if (onCancel == null)
			{
				onCancel = new Subject<BaseEventData>();
			}
			return onCancel;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onCancel != null)
			{
				onCancel.OnCompleted();
			}
		}
	}
}
