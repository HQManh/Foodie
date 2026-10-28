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
			if (onCollisionEnter != null)
			{
				onCollisionEnter.OnNext(collision);
			}
		}

		public IObservable<Collision> OnCollisionEnterAsObservable()
		{
			if (onCollisionEnter == null)
			{
				onCollisionEnter = new Subject<Collision>();
			}
			return onCollisionEnter;
		}

		private void OnCollisionExit(Collision collisionInfo)
		{
			if (onCollisionExit != null)
			{
				onCollisionExit.OnNext(collisionInfo);
			}
		}

		public IObservable<Collision> OnCollisionExitAsObservable()
		{
			if (onCollisionExit == null)
			{
				onCollisionExit = new Subject<Collision>();
			}
			return onCollisionExit;
		}

		private void OnCollisionStay(Collision collisionInfo)
		{
			if (onCollisionStay != null)
			{
				onCollisionStay.OnNext(collisionInfo);
			}
		}

		public IObservable<Collision> OnCollisionStayAsObservable()
		{
			if (onCollisionStay == null)
			{
				onCollisionStay = new Subject<Collision>();
			}
			return onCollisionStay;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onCollisionEnter != null)
			{
				onCollisionEnter.OnCompleted();
			}
			if (onCollisionExit != null)
			{
				onCollisionExit.OnCompleted();
			}
			if (onCollisionStay != null)
			{
				onCollisionStay.OnCompleted();
			}
		}
	}
}
