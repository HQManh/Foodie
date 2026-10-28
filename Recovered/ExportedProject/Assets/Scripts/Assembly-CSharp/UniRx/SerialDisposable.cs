using System;

namespace UniRx
{
	public sealed class SerialDisposable : IDisposable, ICancelable
	{
		private readonly object gate;

		private IDisposable current;

		private bool disposed;

		public bool IsDisposed => false;

		public IDisposable Disposable
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public void Dispose()
		{
		}
	}
}
