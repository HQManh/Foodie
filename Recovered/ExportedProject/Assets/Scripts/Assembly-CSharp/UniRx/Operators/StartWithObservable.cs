using System;

namespace UniRx.Operators
{
	internal class StartWithObservable<T> : OperatorObservableBase<T>
	{
		private class StartWith : OperatorObserverBase<T, T>
		{
			private readonly StartWithObservable<T> parent;

			public StartWith(StartWithObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		private readonly T value;

		private readonly Func<T> valueFactory;

		public StartWithObservable(IObservable<T> source, T value)
			: base(false)
		{
		}

		public StartWithObservable(IObservable<T> source, Func<T> valueFactory)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
