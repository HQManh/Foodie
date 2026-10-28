using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableBeginDragTrigger : ObservableTriggerBase, IEventSystemHandler, IBeginDragHandler
	{
		private Subject<PointerEventData> onBeginDrag;

		void IBeginDragHandler.OnBeginDrag(PointerEventData eventData)
		{
			if (onBeginDrag != null)
			{
				onBeginDrag.OnNext(eventData);
			}
		}

		public IObservable<PointerEventData> OnBeginDragAsObservable()
		{
			if (onBeginDrag == null)
			{
				onBeginDrag = new Subject<PointerEventData>();
			}
			return onBeginDrag;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onBeginDrag != null)
			{
				onBeginDrag.OnCompleted();
			}
		}
	}
}
