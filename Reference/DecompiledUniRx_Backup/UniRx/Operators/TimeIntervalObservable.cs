using System;

namespace UniRx.Operators
{
	internal class TimeIntervalObservable<T> : OperatorObservableBase<TimeInterval<T>>
	{
		private class TimeInterval : OperatorObserverBase<T, TimeInterval<T>>
		{
			private readonly TimeIntervalObservable<T> parent;

			private DateTimeOffset lastTime;

			public TimeInterval(TimeIntervalObservable<T> parent, IObserver<TimeInterval<T>> observer, IDisposable cancel)
				: base((IObserver<TimeInterval<T>>)null, (IDisposable)null)
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

		public TimeIntervalObservable(IObservable<T> source, IScheduler scheduler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TimeInterval<T>> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
