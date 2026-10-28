using System;

namespace UniRx
{
	public sealed class ScheduledDisposable : ICancelable, IDisposable
	{
		private readonly IScheduler scheduler;

		private IDisposable disposable;

		private int isDisposed;

		public IScheduler Scheduler => null;

		public IDisposable Disposable => null;

		public bool IsDisposed => false;

		public ScheduledDisposable(IScheduler scheduler, IDisposable disposable)
		{
		}

		public void Dispose()
		{
		}

		private void DisposeInner()
		{
		}
	}
}
