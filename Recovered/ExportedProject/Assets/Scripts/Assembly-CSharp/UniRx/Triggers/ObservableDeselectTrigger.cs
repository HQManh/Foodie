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
		}

		public IObservable<BaseEventData> OnDeselectAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
