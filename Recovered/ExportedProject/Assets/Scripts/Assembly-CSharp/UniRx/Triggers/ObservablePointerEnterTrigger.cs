using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservablePointerEnterTrigger : ObservableTriggerBase, IEventSystemHandler, IPointerEnterHandler
	{
		private Subject<PointerEventData> onPointerEnter;

		void IPointerEnterHandler.OnPointerEnter(PointerEventData eventData)
		{
		}

		public IObservable<PointerEventData> OnPointerEnterAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
