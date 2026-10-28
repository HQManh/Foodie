using System;

namespace UniRx.Operators
{
	internal class SingleObservable<T> : OperatorObservableBase<T>
	{
		private class Single : OperatorObserverBase<T, T>
		{
			private readonly SingleObservable<T> parent;

			private bool seenValue;

			private T lastValue;

			public Single(SingleObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		private class Single_ : OperatorObserverBase<T, T>
		{
			private readonly SingleObservable<T> parent;

			private bool seenValue;

			private T lastValue;

			public Single_(SingleObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		private readonly bool useDefault;

		private readonly Func<T, bool> predicate;

		public SingleObservable(IObservable<T> source, bool useDefault)
			: base(false)
		{
		}

		public SingleObservable(IObservable<T> source, Func<T, bool> predicate, bool useDefault)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
