using System;

namespace UniRx.Operators
{
	internal class FirstObservable<T> : OperatorObservableBase<T>
	{
		private class First : OperatorObserverBase<T, T>
		{
			private readonly FirstObservable<T> parent;

			private bool notPublished;

			public First(FirstObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		private class First_ : OperatorObserverBase<T, T>
		{
			private readonly FirstObservable<T> parent;

			private bool notPublished;

			public First_(FirstObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		public FirstObservable(IObservable<T> source, bool useDefault)
			: base(false)
		{
		}

		public FirstObservable(IObservable<T> source, Func<T, bool> predicate, bool useDefault)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
