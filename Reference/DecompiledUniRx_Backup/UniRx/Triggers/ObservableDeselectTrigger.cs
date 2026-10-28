using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableDeselectTrigger : ObservableTriggerBase, IEventSystemHandler, IDeselectHandler
	{
		private Subject<BaseEventData> onDeselect;

		void IDeselectHandler.OnDeselect(BaseEventData eventData)
		{
			if (onDeselect != null)
			{
				onDeselect.OnNext(eventData);
			}
		}

		public IObservable<BaseEventData> OnDeselectAsObservable()
		{
			if (onDeselect == null)
			{
				onDeselect = new Subject<BaseEventData>();
			}
			return onDeselect;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onDeselect != null)
			{
				onDeselect.OnCompleted();
			}
		}
	}
}
