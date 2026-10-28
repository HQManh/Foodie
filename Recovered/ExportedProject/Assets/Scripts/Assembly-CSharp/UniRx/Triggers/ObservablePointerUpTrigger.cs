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
		}

		public IObservable<PointerEventData> OnPointerUpAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
