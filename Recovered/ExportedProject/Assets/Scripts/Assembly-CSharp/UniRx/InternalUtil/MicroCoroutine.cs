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
		}

		public void AddCoroutine(IEnumerator enumerator)
		{
		}

		public void Run()
		{
		}
	}
}
