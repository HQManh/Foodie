using System;

namespace UniRx.Operators
{
	internal class TakeWhileObservable<T> : OperatorObservableBase<T>
	{
		private class TakeWhile : OperatorObserverBase<T, T>
		{
			private readonly TakeWhileObservable<T> parent;

			public TakeWhile(TakeWhileObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		private class TakeWhile_ : OperatorObserverBase<T, T>
		{
			private readonly TakeWhileObservable<T> parent;

			private int index;

			public TakeWhile_(TakeWhileObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		private readonly Func<T, bool> predicate;

		private readonly Func<T, int, bool> predicateWithIndex;

		public TakeWhileObservable(IObservable<T> source, Func<T, bool> predicate)
			: base(false)
		{
		}

		public TakeWhileObservable(IObservable<T> source, Func<T, int, bool> predicateWithIndex)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
