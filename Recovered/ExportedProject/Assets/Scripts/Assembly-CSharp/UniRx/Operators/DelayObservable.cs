using System;
using System.Collections.Generic;

namespace UniRx.Operators
{
	internal class DelayObservable<T> : OperatorObservableBase<T>
	{
		private class Delay : OperatorObserverBase<T, T>
		{
			private readonly DelayObservable<T> parent;

			private readonly object gate;

			private bool hasFailed;

			private bool running;

			private bool active;

			private Exception exception;

			private Queue<Timestamped<T>> queue;

			private bool onCompleted;

			private DateTimeOffset completeAt;

			private IDisposable sourceSubscription;

			private TimeSpan delay;

			private bool ready;

			private SerialDisposable cancelable;

			public Delay(DelayObservable<T> parent, IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
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

			private void DrainQueue(Action<TimeSpan> recurse)
			{
			}
		}

		private readonly IObservable<T> source;

		private readonly TimeSpan dueTime;

		private readonly IScheduler scheduler;

		public DelayObservable(IObservable<T> source, TimeSpan dueTime, IScheduler scheduler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
