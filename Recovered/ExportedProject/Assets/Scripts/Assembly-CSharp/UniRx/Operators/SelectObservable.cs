using System;

namespace UniRx.Operators
{
	internal class SelectObservable<T, TR> : OperatorObservableBase<TR>, ISelect<TR>
	{
		private class Select : OperatorObserverBase<T, TR>
		{
			private readonly SelectObservable<T, TR> parent;

			public Select(SelectObservable<T, TR> parent, IObserver<TR> observer, IDisposable cancel)
				: base((IObserver<TR>)null, (IDisposable)null)
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

		private class Select_ : OperatorObserverBase<T, TR>
		{
			private readonly SelectObservable<T, TR> parent;

			private int index;

			public Select_(SelectObservable<T, TR> parent, IObserver<TR> observer, IDisposable cancel)
				: base((IObserver<TR>)null, (IDisposable)null)
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

		private readonly Func<T, TR> selector;

		private readonly Func<T, int, TR> selectorWithIndex;

		public SelectObservable(IObservable<T> source, Func<T, TR> selector)
			: base(false)
		{
		}

		public SelectObservable(IObservable<T> source, Func<T, int, TR> selector)
			: base(false)
		{
		}

		public IObservable<TR> CombinePredicate(Func<TR, bool> predicate)
		{
			return null;
		}

		protected override IDisposable SubscribeCore(IObserver<TR> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
