using System;

namespace UniRx.Operators
{
	internal class TakeUntilObservable<T, TOther> : OperatorObservableBase<T>
	{
		private class TakeUntil : OperatorObserverBase<T, T>
		{
			private class TakeUntilOther : IObserver<TOther>
			{
				private readonly TakeUntil sourceObserver;

				private readonly IDisposable subscription;

				public TakeUntilOther(TakeUntil sourceObserver, IDisposable subscription)
				{
				}

				public void OnNext(TOther value)
				{
				}

				public void OnError(Exception error)
				{
				}

				public void OnCompleted()
				{
				}
			}

			private readonly TakeUntilObservable<T, TOther> parent;

			private object gate;

			public TakeUntil(TakeUntilObservable<T, TOther> parent, IObserver<T> observer, IDisposable cancel)
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

		private readonly IObservable<TOther> other;

		public TakeUntilObservable(IObservable<T> source, IObservable<TOther> other)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
