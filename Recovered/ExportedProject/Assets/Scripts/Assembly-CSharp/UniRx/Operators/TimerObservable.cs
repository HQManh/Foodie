using System;

namespace UniRx.Operators
{
	internal class TimerObservable : OperatorObservableBase<long>
	{
		private class Timer : OperatorObserverBase<long, long>
		{
			private long index;

			public Timer(IObserver<long> observer, IDisposable cancel)
				: base((IObserver<long>)null, (IDisposable)null)
			{
			}

			public void OnNext()
			{
			}

			public override void OnNext(long value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}
		}

		private readonly DateTimeOffset? dueTimeA;

		private readonly TimeSpan? dueTimeB;

		private readonly TimeSpan? period;

		private readonly IScheduler scheduler;

		public TimerObservable(DateTimeOffset dueTime, TimeSpan? period, IScheduler scheduler)
			: base(false)
		{
		}

		public TimerObservable(TimeSpan dueTime, TimeSpan? period, IScheduler scheduler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<long> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
