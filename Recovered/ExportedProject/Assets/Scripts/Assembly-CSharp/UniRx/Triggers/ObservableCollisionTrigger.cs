using System;
using UnityEngine;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableCollisionTrigger : ObservableTriggerBase
	{
		private Subject<Collision> onCollisionEnter;

		private Subject<Collision> onCollisionExit;

		private Subject<Collision> onCollisionStay;

		private void OnCollisionEnter(Collision collision)
		{
		}

		public IObservable<Collision> OnCollisionEnterAsObservable()
		{
			return null;
		}

		private void OnCollisionExit(Collision collisionInfo)
		{
		}

		public IObservable<Collision> OnCollisionExitAsObservable()
		{
			return null;
		}

		private void OnCollisionStay(Collision collisionInfo)
		{
		}

		public IObservable<Collision> OnCollisionStayAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
