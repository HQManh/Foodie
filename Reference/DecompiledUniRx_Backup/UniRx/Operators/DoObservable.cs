using System;

namespace UniRx.Operators
{
	internal class DoObservable<T> : OperatorObservableBase<T>
	{
		private class Do : OperatorObserverBase<T, T>
		{
			private readonly DoObservable<T> parent;

			public Do(DoObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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
		}

		private readonly IObservable<T> source;

		private readonly Action<T> onNext;

		private readonly Action<Exception> onError;

		private readonly Action onCompleted;

		public DoObservable(IObservable<T> source, Action<T> onNext, Action<Exception> onError, Action onCompleted)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
