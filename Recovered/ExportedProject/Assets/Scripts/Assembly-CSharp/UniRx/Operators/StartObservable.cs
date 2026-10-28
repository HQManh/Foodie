using System;

namespace UniRx.Operators
{
	internal class StartObservable<T> : OperatorObservableBase<T>
	{
		private class StartObserver : OperatorObserverBase<T, T>
		{
			private readonly StartObservable<T> parent;

			public StartObserver(StartObservable<T> parent, IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public void Run()
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

		private readonly Action action;

		private readonly Func<T> function;

		private readonly IScheduler scheduler;

		private readonly TimeSpan? startAfter;

		public StartObservable(Func<T> function, TimeSpan? startAfter, IScheduler scheduler)
			: base(false)
		{
		}

		public StartObservable(Action action, TimeSpan? startAfter, IScheduler scheduler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
