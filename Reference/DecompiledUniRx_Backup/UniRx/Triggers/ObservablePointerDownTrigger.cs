using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservablePointerDownTrigger : ObservableTriggerBase, IEventSystemHandler, IPointerDownHandler
	{
		private Subject<PointerEventData> onPointerDown;

		void IPointerDownHandler.OnPointerDown(PointerEventData eventData)
		{
			if (onPointerDown != null)
			{
				onPointerDown.OnNext(eventData);
			}
		}

		public IObservable<PointerEventData> OnPointerDownAsObservable()
		{
			if (onPointerDown == null)
			{
				onPointerDown = new Subject<PointerEventData>();
			}
			return onPointerDown;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onPointerDown != null)
			{
				onPointerDown.OnCompleted();
			}
		}
	}
}
