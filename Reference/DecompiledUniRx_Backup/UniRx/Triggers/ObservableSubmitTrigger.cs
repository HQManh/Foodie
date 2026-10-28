using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableSubmitTrigger : ObservableTriggerBase, IEventSystemHandler, ISubmitHandler
	{
		private Subject<BaseEventData> onSubmit;

		void ISubmitHandler.OnSubmit(BaseEventData eventData)
		{
			if (onSubmit != null)
			{
				onSubmit.OnNext(eventData);
			}
		}

		public IObservable<BaseEventData> OnSubmitAsObservable()
		{
			if (onSubmit == null)
			{
				onSubmit = new Subject<BaseEventData>();
			}
			return onSubmit;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onSubmit != null)
			{
				onSubmit.OnCompleted();
			}
		}
	}
}
