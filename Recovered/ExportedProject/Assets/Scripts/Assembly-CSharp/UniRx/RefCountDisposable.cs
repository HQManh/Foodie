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
			}

			public void Dispose()
			{
			}
		}

		private readonly object _gate;

		private IDisposable _disposable;

		private bool _isPrimaryDisposed;

		private int _count;

		public bool IsDisposed => false;

		public RefCountDisposable(IDisposable disposable)
		{
		}

		public IDisposable GetDisposable()
		{
			return null;
		}

		public void Dispose()
		{
		}

		private void Release()
		{
		}
	}
}
