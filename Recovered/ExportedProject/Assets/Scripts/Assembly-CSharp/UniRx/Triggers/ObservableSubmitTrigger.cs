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
		}

		public IObservable<BaseEventData> OnSubmitAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
