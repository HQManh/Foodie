using System;
using System.Collections.Generic;

namespace UniRx.Operators
{
	internal class ZipObserver<T> : IObserver<T>
	{
		private readonly object gate;

		private readonly IZipObservable parent;

		private readonly int index;

		private readonly Queue<T> queue;

		public ZipObserver(object gate, IZipObservable parent, int index, Queue<T> queue)
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
