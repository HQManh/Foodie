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
		}

		public IObservable<PointerEventData> OnDragAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
