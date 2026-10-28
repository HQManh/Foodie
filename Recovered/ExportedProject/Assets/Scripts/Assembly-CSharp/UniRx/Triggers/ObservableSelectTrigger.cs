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
		}

		public IObservable<BaseEventData> OnSelectAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
