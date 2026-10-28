using System;

namespace UniRx.Operators
{
	internal class ZipLatestObserver<T> : IObserver<T>
	{
		private readonly object gate;

		private readonly IZipLatestObservable parent;

		private readonly int index;

		private T value;

		public T Value => default;

		public ZipLatestObserver(object gate, IZipLatestObservable parent, int index)
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
