using System;

namespace UniRx
{
	public sealed class SerialDisposable : IDisposable, ICancelable
	{
		private readonly object gate;

		private IDisposable current;

		private bool disposed;

		public SerialDisposable()
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
				bool shouldDispose;
				IDisposable old = null;
				lock (gate)
				{
					shouldDispose = !disposed;
					if (shouldDispose)
					{
						old = current;
						current = value;
					}
				}
				if (old != null)
				{
					old.Dispose();
				}
				if (value != null && !shouldDispose)
				{
					value.Dispose();
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
