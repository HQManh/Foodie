using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableDragTrigger : ObservableTriggerBase, IEventSystemHandler, IDragHandler
	{
		private Subject<PointerEventData> onDrag;

		void IDragHandler.OnDrag(PointerEventData eventData)
		{
			if (onDrag != null)
			{
				onDrag.OnNext(eventData);
			}
		}

		public IObservable<PointerEventData> OnDragAsObservable()
		{
			if (onDrag == null)
			{
				onDrag = new Subject<PointerEventData>();
			}
			return onDrag;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onDrag != null)
			{
				onDrag.OnCompleted();
			}
		}
	}
}
