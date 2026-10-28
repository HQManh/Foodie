using System;

namespace UniRx
{
	public sealed class SingleAssignmentDisposable : IDisposable, ICancelable
	{
		private readonly object gate;

		private IDisposable current;

		private bool disposed;

		public SingleAssignmentDisposable()
		{
			gate = new object();
		}

		public bool IsDisposed
		{
			get
			{
				lock (gate)
				{
					return disposed;
				}
			}
		}

		public IDisposable Disposable
		{
			get
			{
				return current;
			}
			set
			{
				IDisposable old;
				bool wasDisposed;
				lock (gate)
				{
					old = current;
					wasDisposed = disposed;
					if (!wasDisposed && value != null)
					{
						current = value;
					}
				}
				if (wasDisposed)
				{
					value.Dispose();
				}
				else if (value != null && old != null)
				{
					// literal recovered by guess
					throw new InvalidOperationException("Disposable has already been assigned");
				}
			}
		}

		public void Dispose()
		{
			IDisposable old = null;
			lock (gate)
			{
				if (!disposed)
				{
					old = current;
					disposed = true;
					current = null;
				}
			}
			if (old != null)
			{
				old.Dispose();
			}
		}
	}
}
