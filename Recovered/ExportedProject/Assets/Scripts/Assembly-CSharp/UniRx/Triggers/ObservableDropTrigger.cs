using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableDropTrigger : ObservableTriggerBase, IEventSystemHandler, IDropHandler
	{
		private Subject<PointerEventData> onDrop;

		void IDropHandler.OnDrop(PointerEventData eventData)
		{
		}

		public IObservable<PointerEventData> OnDropAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
