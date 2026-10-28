using System;

namespace UniRx.Operators
{
	internal class SelectWhereObservable<T, TR> : OperatorObservableBase<TR>
	{
		private class SelectWhere : OperatorObserverBase<T, TR>
		{
			private readonly SelectWhereObservable<T, TR> parent;

			public SelectWhere(SelectWhereObservable<T, TR> parent, IObserver<TR> observer, IDisposable cancel)
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

		private readonly Func<TR, bool> predicate;

		public SelectWhereObservable(IObservable<T> source, Func<T, TR> selector, Func<TR, bool> predicate)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TR> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
