using System;

namespace UniRx.Operators
{
	internal class CombineLatestObserver<T> : IObserver<T>
	{
		private readonly object gate;

		private readonly ICombineLatestObservable parent;

		private readonly int index;

		private T value;

		public T Value => default;

		public CombineLatestObserver(object gate, ICombineLatestObservable parent, int index)
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
