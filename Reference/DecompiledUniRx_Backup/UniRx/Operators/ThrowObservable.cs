using System;

namespace UniRx.Operators
{
	internal class ThrowObservable<T> : OperatorObservableBase<T>
	{
		private class Throw : OperatorObserverBase<T, T>
		{
			public Throw(IObserver<T> observer, IDisposable cancel)
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

		private readonly Exception error;

		private readonly IScheduler scheduler;

		public ThrowObservable(Exception error, IScheduler scheduler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
