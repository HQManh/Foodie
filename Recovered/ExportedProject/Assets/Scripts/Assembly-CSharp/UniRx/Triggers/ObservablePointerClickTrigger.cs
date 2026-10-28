using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservablePointerClickTrigger : ObservableTriggerBase, IEventSystemHandler, IPointerClickHandler
	{
		private Subject<PointerEventData> onPointerClick;

		void IPointerClickHandler.OnPointerClick(PointerEventData eventData)
		{
		}

		public IObservable<PointerEventData> OnPointerClickAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
