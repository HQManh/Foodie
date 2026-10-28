using System;
using System.Threading;

namespace UniRx
{
	public sealed class CancellationDisposable : ICancelable, IDisposable
	{
		private readonly CancellationTokenSource _cts;

		public CancellationToken Token => default;

		public bool IsDisposed => false;

		public CancellationDisposable(CancellationTokenSource cts)
		{
		}

		public CancellationDisposable()
		{
		}

		public void Dispose()
		{
		}
	}
}
