using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableSelectTrigger : ObservableTriggerBase, IEventSystemHandler, ISelectHandler
	{
		private Subject<BaseEventData> onSelect;

		void ISelectHandler.OnSelect(BaseEventData eventData)
		{
			if (onSelect != null)
			{
				onSelect.OnNext(eventData);
			}
		}

		public IObservable<BaseEventData> OnSelectAsObservable()
		{
			if (onSelect == null)
			{
				onSelect = new Subject<BaseEventData>();
			}
			return onSelect;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onSelect != null)
			{
				onSelect.OnCompleted();
			}
		}
	}
}
