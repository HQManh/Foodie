using System;

namespace UniRx
{
	internal sealed class ObserverNode<T> : IObserver<T>, IDisposable
	{
		private readonly IObserver<T> observer;

		private IObserverLinkedList<T> list;

		public ObserverNode<T> Previous { get; internal set; }

		public ObserverNode<T> Next { get; internal set; }

		public ObserverNode(IObserverLinkedList<T> list, IObserver<T> observer)
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

		public void Dispose()
		{
		}
	}
}
