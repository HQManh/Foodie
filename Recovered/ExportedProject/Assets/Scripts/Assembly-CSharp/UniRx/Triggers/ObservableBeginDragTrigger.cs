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
		}

		public IObservable<PointerEventData> OnBeginDragAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
