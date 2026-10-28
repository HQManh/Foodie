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
			if (onCollisionEnter2D != null)
			{
				onCollisionEnter2D.OnNext(coll);
			}
		}

		public IObservable<Collision2D> OnCollisionEnter2DAsObservable()
		{
			if (onCollisionEnter2D == null)
			{
				onCollisionEnter2D = new Subject<Collision2D>();
			}
			return onCollisionEnter2D;
		}

		private void OnCollisionExit2D(Collision2D coll)
		{
			if (onCollisionExit2D != null)
			{
				onCollisionExit2D.OnNext(coll);
			}
		}

		public IObservable<Collision2D> OnCollisionExit2DAsObservable()
		{
			if (onCollisionExit2D == null)
			{
				onCollisionExit2D = new Subject<Collision2D>();
			}
			return onCollisionExit2D;
		}

		private void OnCollisionStay2D(Collision2D coll)
		{
			if (onCollisionStay2D != null)
			{
				onCollisionStay2D.OnNext(coll);
			}
		}

		public IObservable<Collision2D> OnCollisionStay2DAsObservable()
		{
			if (onCollisionStay2D == null)
			{
				onCollisionStay2D = new Subject<Collision2D>();
			}
			return onCollisionStay2D;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onCollisionEnter2D != null)
			{
				onCollisionEnter2D.OnCompleted();
			}
			if (onCollisionExit2D != null)
			{
				onCollisionExit2D.OnCompleted();
			}
			if (onCollisionStay2D != null)
			{
				onCollisionStay2D.OnCompleted();
			}
		}
	}
}
