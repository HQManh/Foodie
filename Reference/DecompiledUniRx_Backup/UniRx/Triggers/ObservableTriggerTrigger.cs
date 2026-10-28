using System;
using UnityEngine;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableTriggerTrigger : ObservableTriggerBase
	{
		private Subject<Collider> onTriggerEnter;

		private Subject<Collider> onTriggerExit;

		private Subject<Collider> onTriggerStay;

		private void OnTriggerEnter(Collider other)
		{
			if (onTriggerEnter != null) onTriggerEnter.OnNext(other);
		}

		public IObservable<Collider> OnTriggerEnterAsObservable()
		{
			if (onTriggerEnter == null) onTriggerEnter = new Subject<Collider>();
			return onTriggerEnter;
		}

		private void OnTriggerExit(Collider other)
		{
			if (onTriggerExit != null) onTriggerExit.OnNext(other);
		}

		public IObservable<Collider> OnTriggerExitAsObservable()
		{
			if (onTriggerExit == null) onTriggerExit = new Subject<Collider>();
			return onTriggerExit;
		}

		private void OnTriggerStay(Collider other)
		{
			if (onTriggerStay != null) onTriggerStay.OnNext(other);
		}

		public IObservable<Collider> OnTriggerStayAsObservable()
		{
			if (onTriggerStay == null) onTriggerStay = new Subject<Collider>();
			return onTriggerStay;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onTriggerEnter != null) onTriggerEnter.OnCompleted();
			if (onTriggerExit != null) onTriggerExit.OnCompleted();
			if (onTriggerStay != null) onTriggerStay.OnCompleted();
		}
	}
}
