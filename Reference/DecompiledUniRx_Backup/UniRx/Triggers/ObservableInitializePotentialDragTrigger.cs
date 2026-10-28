using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableInitializePotentialDragTrigger : ObservableTriggerBase, IEventSystemHandler, IInitializePotentialDragHandler
	{
		private Subject<PointerEventData> onInitializePotentialDrag;

		void IInitializePotentialDragHandler.OnInitializePotentialDrag(PointerEventData eventData)
		{
			if (onInitializePotentialDrag != null)
			{
				onInitializePotentialDrag.OnNext(eventData);
			}
		}

		public IObservable<PointerEventData> OnInitializePotentialDragAsObservable()
		{
			if (onInitializePotentialDrag == null)
			{
				onInitializePotentialDrag = new Subject<PointerEventData>();
			}
			return onInitializePotentialDrag;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onInitializePotentialDrag != null)
			{
				onInitializePotentialDrag.OnCompleted();
			}
		}
	}
}
