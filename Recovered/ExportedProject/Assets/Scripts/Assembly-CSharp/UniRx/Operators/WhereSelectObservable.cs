using System;

namespace UniRx.Operators
{
	internal class WhereSelectObservable<T, TR> : OperatorObservableBase<TR>
	{
		private class WhereSelect : OperatorObserverBase<T, TR>
		{
			private readonly WhereSelectObservable<T, TR> parent;

			public WhereSelect(WhereSelectObservable<T, TR> parent, IObserver<TR> observer, IDisposable cancel)
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

		private readonly Func<T, bool> predicate;

		private readonly Func<T, TR> selector;

		public WhereSelectObservable(IObservable<T> source, Func<T, bool> predicate, Func<T, TR> selector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TR> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
