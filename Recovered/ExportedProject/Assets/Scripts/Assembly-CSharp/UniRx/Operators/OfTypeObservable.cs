using System;

namespace UniRx.Operators
{
	internal class OfTypeObservable<TSource, TResult> : OperatorObservableBase<TResult>
	{
		private class OfType : OperatorObserverBase<TSource, TResult>
		{
			public OfType(IObserver<TResult> observer, IDisposable cancel)
				: base((IObserver<TResult>)null, (IDisposable)null)
			{
			}

			public override void OnNext(TSource value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}
		}

		private readonly IObservable<TSource> source;

		public OfTypeObservable(IObservable<TSource> source)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TResult> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
