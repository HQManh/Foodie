using System;
using UnityEngine;

namespace UniRx.Diagnostics
{
	public class UnityDebugSink : IObserver<LogEntry>
	{
		public void OnCompleted()
		{
		}

		public void OnError(Exception error)
		{
		}

		public void OnNext(LogEntry value)
		{
			switch (value.LogType)
			{
			case LogType.Error:
				if (value.Context != null)
				{
					Debug.LogError(value.Message, value.Context);
				}
				else
				{
					Debug.LogError(value.Message);
				}
				break;
			case LogType.Warning:
				if (value.Context != null)
				{
					Debug.LogWarning(value.Message, value.Context);
				}
				else
				{
					Debug.LogWarning(value.Message);
				}
				break;
			case LogType.Log:
				if (value.Context != null)
				{
					Debug.Log(value.Message, value.Context);
				}
				else
				{
					Debug.Log(value.Message);
				}
				break;
			case LogType.Exception:
				if (value.Context != null)
				{
					Debug.LogException(value.Exception, value.Context);
				}
				else
				{
					Debug.LogException(value.Exception);
				}
				break;
			}
		}
	}
}
