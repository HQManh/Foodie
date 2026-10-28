using System;
using System.Runtime.CompilerServices;
using System.Threading;

namespace UniRx
{
	public sealed class AsyncSubject<T> : ISubject<T>, ISubject<T, T>, IObserver<T>, IObservable<T>, IOptimizedObservable<T>, IDisposable, INotifyCompletion
	{
		private class Subscription : IDisposable
		{
			private readonly object gate;

			private AsyncSubject<T> parent;

			private IObserver<T> unsubscribeTarget;

			public Subscription(AsyncSubject<T> parent, IObserver<T> unsubscribeTarget)
			{
			}

			public void Dispose()
			{
			}
		}

		private class AwaitObserver : IObserver<T>
		{
			private readonly SynchronizationContext _context;

			private readonly Action _callback;

			public AwaitObserver(Action callback, bool originalContext)
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

			private void InvokeOnOriginalContext()
			{
			}
		}

		private object observerLock;

		private T lastValue;

		private bool hasValue;

		private bool isStopped;

		private bool isDisposed;

		private Exception lastError;

		private IObserver<T> outObserver;

		public T Value => default;

		public bool HasObservers => false;

		public bool IsCompleted => false;

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

		public AsyncSubject<T> GetAwaiter()
		{
			return null;
		}

		public void OnCompleted(Action continuation)
		{
		}

		private void OnCompleted(Action continuation, bool originalContext)
		{
		}

		public T GetResult()
		{
			return default;
		}
	}
}
