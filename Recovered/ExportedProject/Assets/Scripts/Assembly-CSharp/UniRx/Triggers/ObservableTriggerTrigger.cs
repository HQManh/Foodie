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
		}

		public IObservable<Collider> OnTriggerEnterAsObservable()
		{
			return null;
		}

		private void OnTriggerExit(Collider other)
		{
		}

		public IObservable<Collider> OnTriggerExitAsObservable()
		{
			return null;
		}

		private void OnTriggerStay(Collider other)
		{
		}

		public IObservable<Collider> OnTriggerStayAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
