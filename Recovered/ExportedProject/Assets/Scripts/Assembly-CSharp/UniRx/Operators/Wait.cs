using System;
using System.Threading;

namespace UniRx.Operators
{
	internal class Wait<T> : IObserver<T>
	{
		private static readonly TimeSpan InfiniteTimeSpan;

		private readonly IObservable<T> source;

		private readonly TimeSpan timeout;

		private ManualResetEvent semaphore;

		private bool seenValue;

		private T value;

		private Exception ex;

		public Wait(IObservable<T> source, TimeSpan timeout)
		{
		}

		public T Run()
		{
			return default;
		}

		public void OnNext(T value)
		{
		}

		public void OnError(Exception error)
		{
		}

		public void OnCompleted()
		{
		}
	}
}
