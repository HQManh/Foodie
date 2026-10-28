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
		}

		public IObservable<PointerEventData> OnInitializePotentialDragAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
