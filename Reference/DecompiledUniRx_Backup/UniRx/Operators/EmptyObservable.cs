using System;

namespace UniRx.Operators
{
	internal class EmptyObservable<T> : OperatorObservableBase<T>
	{
		private class Empty : OperatorObserverBase<T, T>
		{
			public Empty(IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public override void OnNext(T value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}
		}

		private readonly IScheduler scheduler;

		public EmptyObservable(IScheduler scheduler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
