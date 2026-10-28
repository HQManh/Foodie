using System;

namespace UniRx.Operators
{
	internal class FinallyObservable<T> : OperatorObservableBase<T>
	{
		private class Finally : OperatorObserverBase<T, T>
		{
			private readonly FinallyObservable<T> parent;

			public Finally(FinallyObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		private readonly Action finallyAction;

		public FinallyObservable(IObservable<T> source, Action finallyAction)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
