using System;
using System.Collections.Generic;

namespace UniRx
{
	public sealed class ReplaySubject<T> : ISubject<T>, ISubject<T, T>, IObserver<T>, IObservable<T>, IOptimizedObservable<T>, IDisposable
	{
		private class Subscription : IDisposable
		{
			private readonly object gate;

			private ReplaySubject<T> parent;

			private IObserver<T> unsubscribeTarget;

			public Subscription(ReplaySubject<T> parent, IObserver<T> unsubscribeTarget)
			{
			}

			public void Dispose()
			{
			}
		}

		private object observerLock;

		private bool isStopped;

		private bool isDisposed;

		private Exception lastError;

		private IObserver<T> outObserver;

		private readonly int bufferSize;

		private readonly TimeSpan window;

		private readonly DateTimeOffset startTime;

		private readonly IScheduler scheduler;

		private Queue<TimeInterval<T>> queue;

		public ReplaySubject()
		{
		}

		public ReplaySubject(IScheduler scheduler)
		{
		}

		public ReplaySubject(int bufferSize)
		{
		}

		public ReplaySubject(int bufferSize, IScheduler scheduler)
		{
		}

		public ReplaySubject(TimeSpan window)
		{
		}

		public ReplaySubject(TimeSpan window, IScheduler scheduler)
		{
		}

		public ReplaySubject(int bufferSize, TimeSpan window, IScheduler scheduler)
		{
		}

		private void Trim()
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
