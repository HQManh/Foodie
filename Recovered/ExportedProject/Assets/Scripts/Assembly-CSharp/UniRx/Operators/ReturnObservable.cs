using System;

namespace UniRx.Operators
{
	internal class ReturnObservable<T> : OperatorObservableBase<T>
	{
		private class Return : OperatorObserverBase<T, T>
		{
			public Return(IObserver<T> observer, IDisposable cancel)
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

		private readonly T value;

		private readonly IScheduler scheduler;

		public ReturnObservable(T value, IScheduler scheduler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
