using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableScrollTrigger : ObservableTriggerBase, IEventSystemHandler, IScrollHandler
	{
		private Subject<PointerEventData> onScroll;

		void IScrollHandler.OnScroll(PointerEventData eventData)
		{
		}

		public IObservable<PointerEventData> OnScrollAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
