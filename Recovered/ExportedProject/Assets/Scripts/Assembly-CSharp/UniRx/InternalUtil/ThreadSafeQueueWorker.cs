using System;

namespace UniRx.InternalUtil
{
	public class ThreadSafeQueueWorker
	{
		private const int MaxArrayLength = 2146435071;

		private const int InitialSize = 16;

		private object gate;

		private bool dequing;

		private int actionListCount;

		private Action<object>[] actionList;

		private object[] actionStates;

		private int waitingListCount;

		private Action<object>[] waitingList;

		private object[] waitingStates;

		public void Enqueue(Action<object> action, object state)
		{
		}

		public void ExecuteAll(Action<Exception> unhandledExceptionCallback)
		{
		}
	}
}
