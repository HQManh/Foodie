using System;
using UnityEngine;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableCollision2DTrigger : ObservableTriggerBase
	{
		private Subject<Collision2D> onCollisionEnter2D;

		private Subject<Collision2D> onCollisionExit2D;

		private Subject<Collision2D> onCollisionStay2D;

		private void OnCollisionEnter2D(Collision2D coll)
		{
		}

		public IObservable<Collision2D> OnCollisionEnter2DAsObservable()
		{
			return null;
		}

		private void OnCollisionExit2D(Collision2D coll)
		{
		}

		public IObservable<Collision2D> OnCollisionExit2DAsObservable()
		{
			return null;
		}

		private void OnCollisionStay2D(Collision2D coll)
		{
		}

		public IObservable<Collision2D> OnCollisionStay2DAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
