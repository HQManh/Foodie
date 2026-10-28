using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableMoveTrigger : ObservableTriggerBase, IEventSystemHandler, IMoveHandler
	{
		private Subject<AxisEventData> onMove;

		void IMoveHandler.OnMove(AxisEventData eventData)
		{
		}

		public IObservable<AxisEventData> OnMoveAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
