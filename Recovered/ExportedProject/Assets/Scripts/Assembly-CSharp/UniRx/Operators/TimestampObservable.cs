using System;

namespace UniRx.Operators
{
	internal class TimestampObservable<T> : OperatorObservableBase<Timestamped<T>>
	{
		private class Timestamp : OperatorObserverBase<T, Timestamped<T>>
		{
			private readonly TimestampObservable<T> parent;

			public Timestamp(TimestampObservable<T> parent, IObserver<Timestamped<T>> observer, IDisposable cancel)
				: base((IObserver<Timestamped<T>>)null, (IDisposable)null)
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

		private readonly IObservable<T> source;

		private readonly IScheduler scheduler;

		public TimestampObservable(IObservable<T> source, IScheduler scheduler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<Timestamped<T>> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
