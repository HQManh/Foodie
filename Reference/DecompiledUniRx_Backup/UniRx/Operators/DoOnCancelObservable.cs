using System;

namespace UniRx.Operators
{
	internal class DoOnCancelObservable<T> : OperatorObservableBase<T>
	{
		private class DoOnCancel : OperatorObserverBase<T, T>
		{
			private readonly DoOnCancelObservable<T> parent;

			private bool isCompletedCall;

			public DoOnCancel(DoOnCancelObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		private readonly Action onCancel;

		public DoOnCancelObservable(IObservable<T> source, Action onCancel)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
