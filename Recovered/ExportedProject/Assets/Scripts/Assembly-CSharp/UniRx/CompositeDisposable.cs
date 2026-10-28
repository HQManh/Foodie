using System;
using System.Collections;
using System.Collections.Generic;

namespace UniRx
{
	public sealed class CompositeDisposable : ICollection<IDisposable>, IEnumerable<IDisposable>, IEnumerable, IDisposable, ICancelable
	{
		private readonly object _gate;

		private bool _disposed;

		private List<IDisposable> _disposables;

		private int _count;

		private const int SHRINK_THRESHOLD = 64;

		public int Count => 0;

		public bool IsReadOnly => false;

		public bool IsDisposed => false;

		public CompositeDisposable()
		{
		}

		public CompositeDisposable(int capacity)
		{
		}

		public CompositeDisposable(params IDisposable[] disposables)
		{
		}

		public CompositeDisposable(IEnumerable<IDisposable> disposables)
		{
		}

		public void Add(IDisposable item)
		{
		}

		public bool Remove(IDisposable item)
		{
			return false;
		}

		public void Dispose()
		{
		}

		public void Clear()
		{
		}

		public bool Contains(IDisposable item)
		{
			return false;
		}

		public void CopyTo(IDisposable[] array, int arrayIndex)
		{
		}

		public IEnumerator<IDisposable> GetEnumerator()
		{
			return null;
		}

		IEnumerator IEnumerable.GetEnumerator()
		{
			return null;
		}
	}
}
