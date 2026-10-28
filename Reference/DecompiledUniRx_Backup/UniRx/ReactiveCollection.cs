using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;

namespace UniRx
{
	[Serializable]
	public class ReactiveCollection<T> : Collection<T>, IReactiveCollection<T>, IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IReadOnlyReactiveCollection<T>, IDisposable
	{
		[NonSerialized]
		private bool isDisposed;

		[NonSerialized]
		private Subject<int> countChanged;

		[NonSerialized]
		private Subject<Unit> collectionReset;

		[NonSerialized]
		private Subject<CollectionAddEvent<T>> collectionAdd;

		[NonSerialized]
		private Subject<CollectionMoveEvent<T>> collectionMove;

		[NonSerialized]
		private Subject<CollectionRemoveEvent<T>> collectionRemove;

		[NonSerialized]
		private Subject<CollectionReplaceEvent<T>> collectionReplace;

		private bool disposedValue;

		public ReactiveCollection()
		{
		}

		public ReactiveCollection(IEnumerable<T> collection)
		{
		}

		public ReactiveCollection(List<T> list)
		{
		}

		protected override void ClearItems()
		{
		}

		protected override void InsertItem(int index, T item)
		{
		}

		public void Move(int oldIndex, int newIndex)
		{
		}

		protected virtual void MoveItem(int oldIndex, int newIndex)
		{
		}

		protected override void RemoveItem(int index)
		{
		}

		protected override void SetItem(int index, T item)
		{
		}

		public IObservable<int> ObserveCountChanged(bool notifyCurrentCount = false)
		{
			return null;
		}

		public IObservable<Unit> ObserveReset()
		{
			return null;
		}

		public IObservable<CollectionAddEvent<T>> ObserveAdd()
		{
			return null;
		}

		public IObservable<CollectionMoveEvent<T>> ObserveMove()
		{
			return null;
		}

		public IObservable<CollectionRemoveEvent<T>> ObserveRemove()
		{
			return null;
		}

		public IObservable<CollectionReplaceEvent<T>> ObserveReplace()
		{
			return null;
		}

		private void DisposeSubject<TSubject>(ref Subject<TSubject> subject)
		{
		}

		protected virtual void Dispose(bool disposing)
		{
		}

		public void Dispose()
		{
		}
	}
}
