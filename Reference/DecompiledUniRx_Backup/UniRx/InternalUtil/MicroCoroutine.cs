using System;
using System.Collections;
using System.Collections.Generic;

namespace UniRx.InternalUtil
{
	public class MicroCoroutine
	{
		private const int InitialSize = 16;

		private readonly object runningAndQueueLock;

		private readonly object arrayLock;

		private readonly Action<Exception> unhandledExceptionCallback;

		private int tail;

		private bool running;

		private IEnumerator[] coroutines;

		private Queue<IEnumerator> waitQueue;

		public MicroCoroutine(Action<Exception> unhandledExceptionCallback)
		{
			runningAndQueueLock = new object();
			arrayLock = new object();
			this.unhandledExceptionCallback = unhandledExceptionCallback;
			coroutines = new IEnumerator[InitialSize];
			waitQueue = new Queue<IEnumerator>();
		}

		public void AddCoroutine(IEnumerator enumerator)
		{
			bool addToArray;
			lock (runningAndQueueLock)
			{
				if (running)
				{
					waitQueue.Enqueue(enumerator);
					addToArray = false;
				}
				else
				{
					addToArray = true;
				}
			}
			if (!addToArray)
			{
				return;
			}
			lock (arrayLock)
			{
				if (tail == coroutines.Length)
				{
					Array.Resize(ref coroutines, tail << 1);
				}
				coroutines[tail] = enumerator;
				tail++;
			}
		}

		public void Run()
		{
			// TODO(unrecovered): the body compacts the coroutine array (swapping finished entries with the tail) and drains waitQueue while calling IEnumerator.MoveNext through interface dispatch (FUN_03f95da8, FUN_05e2d168); the exact compaction order is only partly recovered, so it is not reproduced here.
		}
	}
}
