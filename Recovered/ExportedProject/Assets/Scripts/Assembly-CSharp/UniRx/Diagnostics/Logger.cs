using System;
using UnityEngine;

namespace UniRx.Diagnostics
{
	public class Logger
	{
		private static bool isInitialized;

		private static bool isDebugBuild;

		protected readonly Action<LogEntry> logPublisher;

		public string Name { get; private set; }

		public Logger(string loggerName)
		{
		}

		public virtual void Debug(object message, UnityEngine.Object context = null)
		{
		}

		public virtual void DebugFormat(string format, params object[] args)
		{
		}

		public virtual void Log(object message, UnityEngine.Object context = null)
		{
		}

		public virtual void LogFormat(string format, params object[] args)
		{
		}

		public virtual void Warning(object message, UnityEngine.Object context = null)
		{
		}

		public virtual void WarningFormat(string format, params object[] args)
		{
		}

		public virtual void Error(object message, UnityEngine.Object context = null)
		{
		}

		public virtual void ErrorFormat(string format, params object[] args)
		{
		}

		public virtual void Exception(Exception exception, UnityEngine.Object context = null)
		{
		}

		public virtual void Raw(LogEntry logEntry)
		{
		}
	}
}
