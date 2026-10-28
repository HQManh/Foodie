using System;

namespace UniRx.Operators
{
	internal class SkipUntilObservable<T, TOther> : OperatorObservableBase<T>
	{
		private class SkipUntilOuterObserver : OperatorObserverBase<T, T>
		{
			private class SkipUntil : IObserver<T>
			{
				public IObserver<T> observer;

				private readonly SkipUntilOuterObserver parent;

				private readonly IDisposable subscription;

				public SkipUntil(SkipUntilOuterObserver parent, IDisposable subscription)
				{
				}

				public void OnNext(T value)
				{
				}

				public void OnError(Exception error)
				{
				}

				public void OnCompleted()
				{
				}
			}

			private class SkipUntilOther : IObserver<TOther>
			{
				private readonly SkipUntilOuterObserver parent;

				private readonly SkipUntil sourceObserver;

				private readonly IDisposable subscription;

				public SkipUntilOther(SkipUntilOuterObserver parent, SkipUntil sourceObserver, IDisposable subscription)
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

			private readonly SkipUntilObservable<T, TOther> parent;

			public SkipUntilOuterObserver(SkipUntilObservable<T, TOther> parent, IObserver<T> observer, IDisposable cancel)
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

		public SkipUntilObservable(IObservable<T> source, IObservable<TOther> other)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
