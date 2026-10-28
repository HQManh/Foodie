using System;

namespace UniRx.Operators
{
	internal class TimeoutObservable<T> : OperatorObservableBase<T>
	{
		private class Timeout : OperatorObserverBase<T, T>
		{
			private readonly TimeoutObservable<T> parent;

			private readonly object gate;

			private ulong objectId;

			private bool isTimeout;

			private SingleAssignmentDisposable sourceSubscription;

			private SerialDisposable timerSubscription;

			public Timeout(TimeoutObservable<T> parent, IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			private IDisposable RunTimer(ulong timerId)
			{
				return null;
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

		private class Timeout_ : OperatorObserverBase<T, T>
		{
			private readonly TimeoutObservable<T> parent;

			private readonly object gate;

			private bool isFinished;

			private SingleAssignmentDisposable sourceSubscription;

			private IDisposable timerSubscription;

			public Timeout_(TimeoutObservable<T> parent, IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			private void OnNext()
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

		private readonly TimeSpan? dueTime;

		private readonly DateTimeOffset? dueTimeDT;

		private readonly IScheduler scheduler;

		public TimeoutObservable(IObservable<T> source, TimeSpan dueTime, IScheduler scheduler)
			: base(false)
		{
		}

		public TimeoutObservable(IObservable<T> source, DateTimeOffset dueTime, IScheduler scheduler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
