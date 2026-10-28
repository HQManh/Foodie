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
		}

		public IObservable<BaseEventData> OnUpdateSelectedAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
