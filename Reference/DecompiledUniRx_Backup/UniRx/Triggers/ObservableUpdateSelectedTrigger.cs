using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableUpdateSelectedTrigger : ObservableTriggerBase, IEventSystemHandler, IUpdateSelectedHandler
	{
		private Subject<BaseEventData> onUpdateSelected;

		void IUpdateSelectedHandler.OnUpdateSelected(BaseEventData eventData)
		{
			if (onUpdateSelected != null) onUpdateSelected.OnNext(eventData);
		}

		public IObservable<BaseEventData> OnUpdateSelectedAsObservable()
		{
			if (onUpdateSelected == null) onUpdateSelected = new Subject<BaseEventData>();
			return onUpdateSelected;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onUpdateSelected != null) onUpdateSelected.OnCompleted();
		}
	}
}
