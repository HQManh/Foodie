using System;

namespace UniRx
{
	public sealed class BehaviorSubject<T> : ISubject<T>, ISubject<T, T>, IObserver<T>, IObservable<T>, IDisposable, IOptimizedObservable<T>
	{
		private class Subscription : IDisposable
		{
			private readonly object gate;

			private BehaviorSubject<T> parent;

			private IObserver<T> unsubscribeTarget;

			public Subscription(BehaviorSubject<T> parent, IObserver<T> unsubscribeTarget)
			{
			}

			public void Dispose()
			{
			}
		}

		private object observerLock;

		private bool isStopped;

		private bool isDisposed;

		private T lastValue;

		private Exception lastError;

		private IObserver<T> outObserver;

		public T Value => default;

		public bool HasObservers => false;

		public BehaviorSubject(T defaultValue)
		{
		}

		public void OnCompleted()
		{
		}

		public void OnError(Exception error)
		{
		}

		public void OnNext(T value)
		{
		}

		public IDisposable Subscribe(IObserver<T> observer)
		{
			return null;
		}

		public void Dispose()
		{
		}

		private void ThrowIfDisposed()
		{
		}

		public bool IsRequiredSubscribeOnCurrentThread()
		{
			return false;
		}
	}
}
