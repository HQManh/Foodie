using System;

namespace UniRx
{
	public sealed class RefCountDisposable : ICancelable, IDisposable
	{
		private sealed class InnerDisposable : IDisposable
		{
			private RefCountDisposable _parent;

			private object parentLock;

			public InnerDisposable(RefCountDisposable parent)
			{
				parentLock = new object();
				_parent = parent;
			}

			public void Dispose()
			{
				RefCountDisposable parent;
					lock (parentLock)
					{
						parent = _parent;
						_parent = null;
					}
					if (parent != null)
					{
						parent.Release();
					}
			}
		}

		private readonly object _gate = new object();

		private IDisposable _disposable;

		private bool _isPrimaryDisposed;

		private int _count;

		public bool IsDisposed => _disposable == null;

		public RefCountDisposable(IDisposable disposable)
		{
			if (disposable == null)
			{
				throw new ArgumentNullException("disposable" /* literal recovered by guess */);
			}
			_disposable = disposable;
			_isPrimaryDisposed = false;
			_count = 0;
		}

		public IDisposable GetDisposable()
		{
			lock (_gate)
			{
				if (_disposable == null)
				{
					return Disposable.Empty;
				}
				_count++;
				return new InnerDisposable(this);
			}
		}

		public void Dispose()
		{
			IDisposable toDispose = null;
			lock (_gate)
			{
				if (_disposable != null && !_isPrimaryDisposed)
				{
					_isPrimaryDisposed = true;
					if (_count == 0)
					{
						toDispose = _disposable;
						_disposable = null;
					}
				}
			}
			if (toDispose != null)
			{
				toDispose.Dispose();
			}
		}

		private void Release()
		{
			IDisposable toDispose = null;
			lock (_gate)
			{
				if (_disposable != null)
				{
					_count--;
					if (_isPrimaryDisposed && _count == 0)
					{
						toDispose = _disposable;
						_disposable = null;
					}
				}
			}
			if (toDispose != null)
			{
				toDispose.Dispose();
			}
		}
	}
}
