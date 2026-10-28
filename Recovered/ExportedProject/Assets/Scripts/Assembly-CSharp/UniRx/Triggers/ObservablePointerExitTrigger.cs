using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservablePointerExitTrigger : ObservableTriggerBase, IEventSystemHandler, IPointerExitHandler
	{
		private Subject<PointerEventData> onPointerExit;

		void IPointerExitHandler.OnPointerExit(PointerEventData eventData)
		{
		}

		public IObservable<PointerEventData> OnPointerExitAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
