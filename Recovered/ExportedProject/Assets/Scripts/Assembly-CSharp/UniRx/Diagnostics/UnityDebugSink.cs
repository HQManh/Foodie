using System;

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
		}
	}
}
