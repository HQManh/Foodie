using System;
using System.Collections.Generic;

namespace UniRx.InternalUtil
{
	internal sealed class AsyncLock : IDisposable
	{
		private readonly Queue<Action> queue = new Queue<Action>();

		private bool isAcquired;

		private bool hasFaulted;

		public void Wait(Action action)
		{
			if (action == null)
			{
				throw new ArgumentNullException("action");
			}
			bool shouldRun = false;
			lock (queue)
			{
				if (!hasFaulted)
				{
					queue.Enqueue(action);
					bool wasAcquired = isAcquired;
					isAcquired = true;
					shouldRun = !wasAcquired;
				}
			}
			if (!shouldRun)
			{
				return;
			}
			while (true)
			{
				Action next;
				lock (queue)
				{
					if (queue.Count < 1)
					{
						isAcquired = false;
						break;
					}
					next = queue.Dequeue();
				}
				next();
			}
		}

		public void Dispose()
		{
			lock (queue)
			{
				queue.Clear();
				hasFaulted = true;
			}
		}
	}
}
