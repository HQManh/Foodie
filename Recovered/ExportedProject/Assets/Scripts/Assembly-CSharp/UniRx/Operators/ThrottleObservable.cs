using System;

namespace UniRx.Operators
{
	internal class ThrottleObservable<T> : OperatorObservableBase<T>
	{
		private class Throttle : OperatorObserverBase<T, T>
		{
			private readonly ThrottleObservable<T> parent;

			private readonly object gate;

			private T latestValue;

			private bool hasValue;

			private SerialDisposable cancelable;

			private ulong id;

			public Throttle(ThrottleObservable<T> parent, IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			private void OnNext(ulong currentid)
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

		private readonly TimeSpan dueTime;

		private readonly IScheduler scheduler;

		public ThrottleObservable(IObservable<T> source, TimeSpan dueTime, IScheduler scheduler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
