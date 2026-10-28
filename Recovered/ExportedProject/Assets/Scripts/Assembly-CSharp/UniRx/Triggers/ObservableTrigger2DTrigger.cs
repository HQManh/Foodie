using System;
using UnityEngine;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableTrigger2DTrigger : ObservableTriggerBase
	{
		private Subject<Collider2D> onTriggerEnter2D;

		private Subject<Collider2D> onTriggerExit2D;

		private Subject<Collider2D> onTriggerStay2D;

		private void OnTriggerEnter2D(Collider2D other)
		{
		}

		public IObservable<Collider2D> OnTriggerEnter2DAsObservable()
		{
			return null;
		}

		private void OnTriggerExit2D(Collider2D other)
		{
		}

		public IObservable<Collider2D> OnTriggerExit2DAsObservable()
		{
			return null;
		}

		private void OnTriggerStay2D(Collider2D other)
		{
		}

		public IObservable<Collider2D> OnTriggerStay2DAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
