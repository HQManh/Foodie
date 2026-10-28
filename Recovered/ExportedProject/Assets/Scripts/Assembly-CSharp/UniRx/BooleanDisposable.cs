using System;

namespace UniRx
{
	public sealed class BooleanDisposable : IDisposable, ICancelable
	{
		public bool IsDisposed { get; private set; }

		public BooleanDisposable()
		{
		}

		internal BooleanDisposable(bool isDisposed)
		{
		}

		public void Dispose()
		{
		}
	}
}
