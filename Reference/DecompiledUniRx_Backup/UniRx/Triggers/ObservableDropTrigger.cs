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
			if (onDrop != null)
			{
				onDrop.OnNext(eventData);
			}
		}

		public IObservable<PointerEventData> OnDropAsObservable()
		{
			if (onDrop == null)
			{
				onDrop = new Subject<PointerEventData>();
			}
			return onDrop;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onDrop != null)
			{
				onDrop.OnCompleted();
			}
		}
	}
}
