using System;
using System.Collections.Generic;

namespace UniRx
{
	public class ReadOnlyReactiveProperty<T> : IReadOnlyReactiveProperty<T>, IObservable<T>, IDisposable, IOptimizedObservable<T>, IObserverLinkedList<T>, IObserver<T>
	{
		private static readonly IEqualityComparer<T> defaultEqualityComparer;

		private readonly bool distinctUntilChanged;

		private bool canPublishValueOnSubscribe;

		private bool isDisposed;

		private bool isSourceCompleted;

		private T latestValue;

		private Exception lastException;

		private IDisposable sourceConnection;

		private ObserverNode<T> root;

		private ObserverNode<T> last;

		public T Value => default;

		public bool HasValue => false;

		protected virtual IEqualityComparer<T> EqualityComparer => null;

		public ReadOnlyReactiveProperty(IObservable<T> source)
		{
		}

		public ReadOnlyReactiveProperty(IObservable<T> source, bool distinctUntilChanged)
		{
		}

		public ReadOnlyReactiveProperty(IObservable<T> source, T initialValue)
		{
		}

		public ReadOnlyReactiveProperty(IObservable<T> source, T initialValue, bool distinctUntilChanged)
		{
		}

		public IDisposable Subscribe(IObserver<T> observer)
		{
			return null;
		}

		public void Dispose()
		{
		}

		protected virtual void Dispose(bool disposing)
		{
		}

		void IObserverLinkedList<T>.UnsubscribeNode(ObserverNode<T> node)
		{
		}

		void IObserver<T>.OnNext(T value)
		{
		}

		void IObserver<T>.OnError(Exception error)
		{
		}

		void IObserver<T>.OnCompleted()
		{
		}

		public override string ToString()
		{
			return null;
		}

		public bool IsRequiredSubscribeOnCurrentThread()
		{
			return false;
		}
	}
}
