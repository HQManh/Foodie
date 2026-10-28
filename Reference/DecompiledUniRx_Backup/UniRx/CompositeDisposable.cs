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

		public int Count => _count;

		public bool IsReadOnly => false;

		public bool IsDisposed => _disposed;

		public CompositeDisposable()
		{
			_gate = new object();
			_disposables = new List<IDisposable>();
		}

		public CompositeDisposable(int capacity)
		{
			_gate = new object();
			if (capacity < 0)
			{
				throw new ArgumentOutOfRangeException("capacity");
			}
			_disposables = new List<IDisposable>(capacity);
		}

		public CompositeDisposable(params IDisposable[] disposables)
		{
			_gate = new object();
			if (disposables == null)
			{
				throw new ArgumentNullException("disposables");
			}
			_disposables = new List<IDisposable>(disposables);
			_count = _disposables.Count;
		}

		public CompositeDisposable(IEnumerable<IDisposable> disposables)
		{
			_gate = new object();
			if (disposables == null)
			{
				throw new ArgumentNullException("disposables");
			}
			_disposables = new List<IDisposable>(disposables);
			_count = _disposables.Count;
		}

		public void Add(IDisposable item)
		{
			if (item == null)
			{
				throw new ArgumentNullException("item");
			}
			bool disposeNow = false;
			lock (_gate)
			{
				if (_disposed)
				{
					disposeNow = true;
				}
				else
				{
					_disposables.Add(item);
					_count++;
				}
			}
			if (disposeNow)
			{
				item.Dispose();
			}
		}

		public bool Remove(IDisposable item)
		{
			if (item == null)
			{
				throw new ArgumentNullException("item");
			}
			bool removed = false;
			lock (_gate)
			{
				if (!_disposed && _disposables.Remove(item))
				{
					_count--;
					if (_disposables.Capacity > SHRINK_THRESHOLD && _count < _disposables.Capacity / 2)
					{
						List<IDisposable> shrunk = new List<IDisposable>(_disposables.Capacity / 2);
						shrunk.AddRange(_disposables);
						_disposables = shrunk;
					}
					removed = true;
				}
			}
			if (removed)
			{
				item.Dispose();
			}
			return removed;
		}

		public void Dispose()
		{
			IDisposable[] toDispose = null;
			lock (_gate)
			{
				if (!_disposed)
				{
					_disposed = true;
					toDispose = _disposables.ToArray();
					_disposables.Clear();
					_count = 0;
				}
			}
			if (toDispose != null)
			{
				foreach (IDisposable d in toDispose)
				{
					if (d != null)
					{
						d.Dispose();
					}
				}
			}
		}

		public void Clear()
		{
			IDisposable[] toDispose;
			lock (_gate)
			{
				toDispose = _disposables.ToArray();
				_disposables.Clear();
				_count = 0;
			}
			foreach (IDisposable d in toDispose)
			{
				if (d != null)
				{
					d.Dispose();
				}
			}
		}

		public bool Contains(IDisposable item)
		{
			if (item == null)
			{
				throw new ArgumentNullException("item");
			}
			lock (_gate)
			{
				return _disposables.Contains(item);
			}
		}

		public void CopyTo(IDisposable[] array, int arrayIndex)
		{
			if (array == null)
			{
				throw new ArgumentNullException("array");
			}
			if (arrayIndex < 0 || arrayIndex >= array.Length)
			{
				throw new ArgumentOutOfRangeException("arrayIndex");
			}
			IDisposable[] snapshot;
			lock (_gate)
			{
				snapshot = _disposables.ToArray();
			}
			Array.Copy(snapshot, 0, array, arrayIndex, array.Length - arrayIndex);
		}

		public IEnumerator<IDisposable> GetEnumerator()
		{
			List<IDisposable> snapshot;
			lock (_gate)
			{
				snapshot = new List<IDisposable>(_disposables);
			}
			return snapshot.GetEnumerator();
		}

		IEnumerator IEnumerable.GetEnumerator()
		{
			return GetEnumerator();
		}
	}
}
