using System;

namespace UniRx.Operators
{
	internal class IgnoreElementsObservable<T> : OperatorObservableBase<T>
	{
		private class IgnoreElements : OperatorObserverBase<T, T>
		{
			public IgnoreElements(IObserver<T> observer, IDisposable cancel)
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

		private readonly IObservable<T> source;

		public IgnoreElementsObservable(IObservable<T> source)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
