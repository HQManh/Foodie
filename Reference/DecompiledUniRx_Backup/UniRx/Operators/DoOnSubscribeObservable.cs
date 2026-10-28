using System;

namespace UniRx.Operators
{
	internal class DoOnSubscribeObservable<T> : OperatorObservableBase<T>
	{
		private class DoOnSubscribe : OperatorObserverBase<T, T>
		{
			private readonly DoOnSubscribeObservable<T> parent;

			public DoOnSubscribe(DoOnSubscribeObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		private readonly Action onSubscribe;

		public DoOnSubscribeObservable(IObservable<T> source, Action onSubscribe)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
