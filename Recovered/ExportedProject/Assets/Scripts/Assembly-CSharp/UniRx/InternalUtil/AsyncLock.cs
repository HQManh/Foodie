using System;
using System.Collections.Generic;

namespace UniRx.InternalUtil
{
	internal sealed class AsyncLock : IDisposable
	{
		private readonly Queue<Action> queue;

		private bool isAcquired;

		private bool hasFaulted;

		public void Wait(Action action)
		{
		}

		public void Dispose()
		{
		}
	}
}
