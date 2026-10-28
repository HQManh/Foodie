using System;

namespace UniRx.Operators
{
	internal class ContinueWithObservable<TSource, TResult> : OperatorObservableBase<TResult>
	{
		private class ContinueWith : OperatorObserverBase<TSource, TResult>
		{
			private readonly ContinueWithObservable<TSource, TResult> parent;

			private readonly SerialDisposable serialDisposable;

			private bool seenValue;

			private TSource lastValue;

			public ContinueWith(ContinueWithObservable<TSource, TResult> parent, IObserver<TResult> observer, IDisposable cancel)
				: base((IObserver<TResult>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
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

		private readonly Func<TSource, IObservable<TResult>> selector;

		public ContinueWithObservable(IObservable<TSource> source, Func<TSource, IObservable<TResult>> selector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TResult> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
