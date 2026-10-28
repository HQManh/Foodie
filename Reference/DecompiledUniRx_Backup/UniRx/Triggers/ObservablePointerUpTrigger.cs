using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservablePointerUpTrigger : ObservableTriggerBase, IEventSystemHandler, IPointerUpHandler
	{
		private Subject<PointerEventData> onPointerUp;

		void IPointerUpHandler.OnPointerUp(PointerEventData eventData)
		{
			if (onPointerUp != null)
			{
				onPointerUp.OnNext(eventData);
			}
		}

		public IObservable<PointerEventData> OnPointerUpAsObservable()
		{
			if (onPointerUp == null)
			{
				onPointerUp = new Subject<PointerEventData>();
			}
			return onPointerUp;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onPointerUp != null)
			{
				onPointerUp.OnCompleted();
			}
		}
	}
}
