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
		}

		public IObservable<PointerEventData> OnPointerDownAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
