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
			if (onMove != null)
			{
				onMove.OnNext(eventData);
			}
		}

		public IObservable<AxisEventData> OnMoveAsObservable()
		{
			if (onMove == null)
			{
				onMove = new Subject<AxisEventData>();
			}
			return onMove;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onMove != null)
			{
				onMove.OnCompleted();
			}
		}
	}
}
