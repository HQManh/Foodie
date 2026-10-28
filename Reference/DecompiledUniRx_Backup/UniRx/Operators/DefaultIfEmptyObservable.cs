using System;

namespace UniRx.Operators
{
	internal class DefaultIfEmptyObservable<T> : OperatorObservableBase<T>
	{
		private class DefaultIfEmpty : OperatorObserverBase<T, T>
		{
			private readonly DefaultIfEmptyObservable<T> parent;

			private bool hasValue;

			public DefaultIfEmpty(DefaultIfEmptyObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		private readonly T defaultValue;

		public DefaultIfEmptyObservable(IObservable<T> source, T defaultValue)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
