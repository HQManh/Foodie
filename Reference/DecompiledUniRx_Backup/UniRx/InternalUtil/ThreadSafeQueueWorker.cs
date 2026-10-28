using System;

namespace UniRx.InternalUtil
{
	public class ThreadSafeQueueWorker
	{
		private const int MaxArrayLength = 2146435071;

		private const int InitialSize = 16;

		private object gate = new object();

		private bool dequing;

		private int actionListCount;

		private Action<object>[] actionList = new Action<object>[InitialSize];

		private object[] actionStates = new object[InitialSize];

		private int waitingListCount;

		private Action<object>[] waitingList = new Action<object>[InitialSize];

		private object[] waitingStates = new object[InitialSize];

		public void Enqueue(Action<object> action, object state)
		{
			lock (gate)
			{
				if (!dequing)
				{
					if (actionListCount == actionList.Length)
					{
						uint newSize = (uint)actionListCount << 1;
						if (newSize > 0x7feffffe)
						{
							newSize = 0x7fefffff;
						}
						Action<object>[] newList = new Action<object>[newSize];
						object[] newStates = new object[newSize];
						Array.Copy(actionList, newList, actionListCount);
						Array.Copy(actionStates, newStates, actionListCount);
						actionList = newList;
						actionStates = newStates;
					}
					actionList[actionListCount] = action;
					actionStates[actionListCount] = state;
					actionListCount++;
				}
				else
				{
					if (waitingListCount == waitingList.Length)
					{
						uint newSize = (uint)waitingListCount << 1;
						if (newSize > 0x7feffffe)
						{
							newSize = 0x7fefffff;
						}
						Action<object>[] newList = new Action<object>[newSize];
						object[] newStates = new object[newSize];
						Array.Copy(waitingList, newList, waitingListCount);
						Array.Copy(waitingStates, newStates, waitingListCount);
						waitingList = newList;
						waitingStates = newStates;
					}
					waitingList[waitingListCount] = action;
					waitingStates[waitingListCount] = state;
					waitingListCount++;
				}
			}
		}

		public void ExecuteAll(Action<Exception> unhandledExceptionCallback)
		{
			bool hasWork;
			lock (gate)
			{
				hasWork = actionListCount != 0;
				if (hasWork)
				{
					dequing = true;
				}
			}
			if (!hasWork)
			{
				return;
			}
			// TODO(unrecovered): the pseudocode shows no exception path, so unhandledExceptionCallback is not wired into the invocation loop.
			for (int i = 0; i < actionListCount; i++)
			{
				Action<object> action = actionList[i];
				object state = actionStates[i];
				action(state);
				actionList[i] = null;
				actionStates[i] = null;
			}
			lock (gate)
			{
				Action<object>[] oldList = actionList;
				object[] oldStates = actionStates;
				dequing = false;
				actionListCount = waitingListCount;
				actionList = waitingList;
				actionStates = waitingStates;
				waitingList = oldList;
				waitingStates = oldStates;
				waitingListCount = 0;
			}
		}
	}
}
