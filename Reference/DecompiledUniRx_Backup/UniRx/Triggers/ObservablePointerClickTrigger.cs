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
			if (onPointerClick != null)
			{
				onPointerClick.OnNext(eventData);
			}
		}

		public IObservable<PointerEventData> OnPointerClickAsObservable()
		{
			if (onPointerClick == null)
			{
				onPointerClick = new Subject<PointerEventData>();
			}
			return onPointerClick;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onPointerClick != null)
			{
				onPointerClick.OnCompleted();
			}
		}
	}
}
