using System;

namespace UniRx.InternalUtil
{
	internal class PriorityQueue<T> where T : IComparable<T>
	{
		private struct IndexedItem : IComparable<IndexedItem>
		{
			public T Value;

			public long Id;

			public int CompareTo(IndexedItem other)
			{
				return 0;
			}
		}

		private static long _count;

		private IndexedItem[] _items;

		private int _size;

		public int Count => 0;

		public PriorityQueue()
		{
		}

		public PriorityQueue(int capacity)
		{
		}

		private bool IsHigherPriority(int left, int right)
		{
			return false;
		}

		private void Percolate(int index)
		{
		}

		private void Heapify()
		{
		}

		private void Heapify(int index)
		{
		}

		public T Peek()
		{
			return default;
		}

		private void RemoveAt(int index)
		{
		}

		public T Dequeue()
		{
			return default;
		}

		public void Enqueue(T item)
		{
		}

		public bool Remove(T item)
		{
			return false;
		}
	}
}
