using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableEndDragTrigger : ObservableTriggerBase, IEventSystemHandler, IEndDragHandler
	{
		private Subject<PointerEventData> onEndDrag;

		void IEndDragHandler.OnEndDrag(PointerEventData eventData)
		{
		}

		public IObservable<PointerEventData> OnEndDragAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
