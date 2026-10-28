using System;

namespace UniRx.Operators
{
	internal class TimerObservable : OperatorObservableBase<long>
	{
		private class Timer : OperatorObserverBase<long, long>
		{
			private long index;

			public Timer(IObserver<long> observer, IDisposable cancel)
				: base(observer, cancel)
			{
			}

			// Checked against pseudocode: Timer.OnNext() (no-arg, @0x41898b4) is a bare `return`, so the
			// one-shot path (DisplayClass6_0.<SubscribeCore>b__0) calls a no-op here and then OnCompleted.
			// The one-shot Timer therefore emits no OnNext value before OnCompleted. The real emitting
			// overload is OnNext(long), used by the periodic path.
			public void OnNext()
			{
			}

			public override void OnNext(long value)
			{
				observer.OnNext(index++);
			}

			public override void OnError(Exception error)
			{
				observer.OnError(error);
				Dispose();
			}

			public override void OnCompleted()
			{
				observer.OnCompleted();
				Dispose();
			}
		}

		private readonly DateTimeOffset? dueTimeA;

		private readonly TimeSpan? dueTimeB;

		private readonly TimeSpan? period;

		private readonly IScheduler scheduler;

		public TimerObservable(DateTimeOffset dueTime, TimeSpan? period, IScheduler scheduler)
			: base(scheduler == Scheduler.CurrentThread)
		{
			dueTimeA = dueTime;
			this.period = period;
			this.scheduler = scheduler;
		}

		public TimerObservable(TimeSpan dueTime, TimeSpan? period, IScheduler scheduler)
			: base(scheduler == Scheduler.CurrentThread)
		{
			dueTimeB = dueTime;
			this.period = period;
			this.scheduler = scheduler;
		}

		protected override IDisposable SubscribeCore(IObserver<long> observer, IDisposable cancel)
		{
			Timer timer = new Timer(observer, cancel);
			TimeSpan dueTime = dueTimeA.HasValue ? dueTimeA.Value - scheduler.Now : dueTimeB.Value;
			if (!period.HasValue)
			{
				return scheduler.Schedule(Scheduler.Normalize(dueTime), () =>
				{
					timer.OnNext();
					timer.OnCompleted();
				});
			}
			// TODO(unrecovered): the periodic branch (period has a value) runs through the DisplayClass6_1/6_2/6_3 closures and an unnamed Action in the SerialDisposable path; those closures were only partly decoded in batch029, so this branch is not implemented.
			throw new NotSupportedException("TimerObservable periodic SubscribeCore not recovered");
		}
	}
}
