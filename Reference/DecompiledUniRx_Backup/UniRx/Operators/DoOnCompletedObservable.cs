using System;

namespace UniRx.Operators
{
	internal class DoOnCompletedObservable<T> : OperatorObservableBase<T>
	{
		private class DoOnCompleted : OperatorObserverBase<T, T>
		{
			private readonly DoOnCompletedObservable<T> parent;

			public DoOnCompleted(DoOnCompletedObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		private readonly Action onCompleted;

		public DoOnCompletedObservable(IObservable<T> source, Action onCompleted)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
