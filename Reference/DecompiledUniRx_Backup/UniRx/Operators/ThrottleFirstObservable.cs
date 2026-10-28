using System;

namespace UniRx.Operators
{
	internal class ThrottleFirstObservable<T> : OperatorObservableBase<T>
	{
		private class ThrottleFirst : OperatorObserverBase<T, T>
		{
			private readonly ThrottleFirstObservable<T> parent;

			private readonly object gate;

			private bool open;

			private SerialDisposable cancelable;

			public ThrottleFirst(ThrottleFirstObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		private readonly TimeSpan dueTime;

		private readonly IScheduler scheduler;

		public ThrottleFirstObservable(IObservable<T> source, TimeSpan dueTime, IScheduler scheduler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
