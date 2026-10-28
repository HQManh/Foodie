using System;

namespace UniRx.Operators
{
	internal class AsSingleUnitObservableObservable<T> : OperatorObservableBase<Unit>
	{
		private class AsSingleUnitObservable : OperatorObserverBase<T, Unit>
		{
			public AsSingleUnitObservable(IObserver<Unit> observer, IDisposable cancel)
				: base((IObserver<Unit>)null, (IDisposable)null)
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

		public AsSingleUnitObservableObservable(IObservable<T> source)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<Unit> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
