using System;

namespace UniRx.Operators
{
	internal class SynchronizedObserver<T> : IObserver<T>
	{
		private readonly IObserver<T> observer;

		private readonly object gate;

		public SynchronizedObserver(IObserver<T> observer, object gate)
		{
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
