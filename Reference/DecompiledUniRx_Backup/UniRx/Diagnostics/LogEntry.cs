using System;
using UnityEngine;

namespace UniRx.Diagnostics
{
	public struct LogEntry
	{
		public string LoggerName { get; private set; }

		public LogType LogType { get; private set; }

		public string Message { get; private set; }

		public DateTime Timestamp { get; private set; }

		public UnityEngine.Object Context { get; private set; }

		public Exception Exception { get; private set; }

		public string StackTrace { get; private set; }

		public object State { get; private set; }

		public LogEntry(string loggerName, LogType logType, DateTime timestamp, string message, UnityEngine.Object context = null, Exception exception = null, string stackTrace = null, object state = null)
		{
			LoggerName = loggerName;
			LogType = logType;
			Message = message;
			Timestamp = timestamp;
			Context = context;
			Exception = exception;
			StackTrace = stackTrace;
			State = state;
		}

		public override string ToString()
		{
			string exceptionText = Exception != null ? Environment.NewLine + Exception.ToString() : "";
			// literal separators recovered by guess (the pseudocode references them only as DAT_ entries)
			return string.Concat("[", Timestamp.ToString(), "] [", LoggerName, "] ", LogType.ToString(), ": ", Message, exceptionText);
		}
	}
}
