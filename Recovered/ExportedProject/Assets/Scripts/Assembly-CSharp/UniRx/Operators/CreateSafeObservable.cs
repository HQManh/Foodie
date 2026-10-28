using System;

namespace UniRx.Operators
{
	internal class CreateSafeObservable<T> : OperatorObservableBase<T>
	{
		private class CreateSafe : OperatorObserverBase<T, T>
		{
			public CreateSafe(IObserver<T> observer, IDisposable cancel)
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

		private readonly Func<IObserver<T>, IDisposable> subscribe;

		public CreateSafeObservable(Func<IObserver<T>, IDisposable> subscribe)
			: base(false)
		{
		}

		public CreateSafeObservable(Func<IObserver<T>, IDisposable> subscribe, bool isRequiredSubscribeOnCurrentThread)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
