using System;

namespace UniRx.Operators
{
	internal class WhereObservable<T> : OperatorObservableBase<T>
	{
		private class Where : OperatorObserverBase<T, T>
		{
			private readonly WhereObservable<T> parent;

			public Where(WhereObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		private class Where_ : OperatorObserverBase<T, T>
		{
			private readonly WhereObservable<T> parent;

			private int index;

			public Where_(WhereObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		private readonly Func<T, bool> predicate;

		private readonly Func<T, int, bool> predicateWithIndex;

		public WhereObservable(IObservable<T> source, Func<T, bool> predicate)
			: base(false)
		{
		}

		public WhereObservable(IObservable<T> source, Func<T, int, bool> predicateWithIndex)
			: base(false)
		{
		}

		public IObservable<T> CombinePredicate(Func<T, bool> combinePredicate)
		{
			return null;
		}

		public IObservable<TR> CombineSelector<TR>(Func<T, TR> selector)
		{
			return null;
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
