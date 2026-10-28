using System;

namespace UniRx.Operators
{
	internal class AsUnitObservableObservable<T> : OperatorObservableBase<Unit>
	{
		private class AsUnitObservable : OperatorObserverBase<T, Unit>
		{
			public AsUnitObservable(IObserver<Unit> observer, IDisposable cancel)
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

		public AsUnitObservableObservable(IObservable<T> source)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<Unit> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
