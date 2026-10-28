using System;

namespace UniRx.Operators
{
	internal class WithLatestFromObservable<TLeft, TRight, TResult> : OperatorObservableBase<TResult>
	{
		private class WithLatestFrom : OperatorObserverBase<TResult, TResult>
		{
			private class LeftObserver : IObserver<TLeft>
			{
				private readonly WithLatestFrom parent;

				public LeftObserver(WithLatestFrom parent)
				{
				}

				public void OnNext(TLeft value)
				{
				}

				public void OnError(Exception error)
				{
				}

				public void OnCompleted()
				{
				}
			}

			private class RightObserver : IObserver<TRight>
			{
				private readonly WithLatestFrom parent;

				private readonly IDisposable selfSubscription;

				public RightObserver(WithLatestFrom parent, IDisposable subscription)
				{
				}

				public void OnNext(TRight value)
				{
				}

				public void OnError(Exception error)
				{
				}

				public void OnCompleted()
				{
				}
			}

			private readonly WithLatestFromObservable<TLeft, TRight, TResult> parent;

			private readonly object gate;

			private bool hasLatest;

			private TRight latestValue;

			public WithLatestFrom(WithLatestFromObservable<TLeft, TRight, TResult> parent, IObserver<TResult> observer, IDisposable cancel)
				: base((IObserver<TResult>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			public override void OnNext(TResult value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}
		}

		private readonly IObservable<TLeft> left;

		private readonly IObservable<TRight> right;

		private readonly Func<TLeft, TRight, TResult> selector;

		public WithLatestFromObservable(IObservable<TLeft> left, IObservable<TRight> right, Func<TLeft, TRight, TResult> selector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TResult> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
