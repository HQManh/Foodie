using System;

namespace UniRx.Operators
{
	public abstract class OperatorObserverBase<TSource, TResult> : IDisposable, IObserver<TSource>
	{
		protected internal IObserver<TResult> observer;

		private IDisposable cancel;

		public OperatorObserverBase(IObserver<TResult> observer, IDisposable cancel)
		{
		}

		public abstract void OnNext(TSource value);

		public abstract void OnError(Exception error);

		public abstract void OnCompleted();

		public void Dispose()
		{
		}
	}
}
