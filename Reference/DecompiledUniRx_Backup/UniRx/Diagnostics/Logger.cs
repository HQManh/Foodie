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
			Name = loggerName;
			logPublisher = ObservableLogger.RegisterLogger(this);
		}

		public virtual void Debug(object message, UnityEngine.Object context = null)
		{
			if (!isInitialized)
			{
				isInitialized = true;
				isDebugBuild = UnityEngine.Debug.isDebugBuild;
			}
			if (!isDebugBuild)
			{
				return;
			}
			string text = message != null ? message.ToString() : null;
			LogEntry entry = new LogEntry(Name, LogType.Log, DateTime.Now, text, context);
			if (logPublisher == null)
			{
				throw new NullReferenceException();
			}
			logPublisher(entry);
		}

		public virtual void DebugFormat(string format, params object[] args)
		{
			if (!isInitialized)
			{
				isInitialized = true;
				isDebugBuild = UnityEngine.Debug.isDebugBuild;
			}
			if (!isDebugBuild)
			{
				return;
			}
			string text = string.Format(format, args);
			LogEntry entry = new LogEntry(Name, LogType.Log, DateTime.Now, text, null);
			if (logPublisher == null)
			{
				throw new NullReferenceException();
			}
			logPublisher(entry);
		}

		public virtual void Log(object message, UnityEngine.Object context = null)
		{
			string text = message != null ? message.ToString() : null;
			LogEntry entry = new LogEntry(Name, LogType.Log, DateTime.Now, text, context);
			if (logPublisher == null)
			{
				throw new NullReferenceException();
			}
			logPublisher(entry);
		}

		public virtual void LogFormat(string format, params object[] args)
		{
			string text = string.Format(format, args);
			LogEntry entry = new LogEntry(Name, LogType.Log, DateTime.Now, text, null);
			if (logPublisher == null)
			{
				throw new NullReferenceException();
			}
			logPublisher(entry);
		}

		public virtual void Warning(object message, UnityEngine.Object context = null)
		{
			string text = message != null ? message.ToString() : null;
			LogEntry entry = new LogEntry(Name, LogType.Warning, DateTime.Now, text, context);
			if (logPublisher == null)
			{
				throw new NullReferenceException();
			}
			logPublisher(entry);
		}

		public virtual void WarningFormat(string format, params object[] args)
		{
			string text = string.Format(format, args);
			LogEntry entry = new LogEntry(Name, LogType.Warning, DateTime.Now, text, null);
			if (logPublisher == null)
			{
				throw new NullReferenceException();
			}
			logPublisher(entry);
		}

		public virtual void Error(object message, UnityEngine.Object context = null)
		{
			string text = message != null ? message.ToString() : null;
			LogEntry entry = new LogEntry(Name, LogType.Error, DateTime.Now, text, context);
			if (logPublisher == null)
			{
				throw new NullReferenceException();
			}
			logPublisher(entry);
		}

		public virtual void ErrorFormat(string format, params object[] args)
		{
			string text = string.Format(format, args);
			LogEntry entry = new LogEntry(Name, LogType.Error, DateTime.Now, text, null);
			if (logPublisher == null)
			{
				throw new NullReferenceException();
			}
			logPublisher(entry);
		}

		public virtual void Exception(Exception exception, UnityEngine.Object context = null)
		{
			string text = exception != null ? exception.ToString() : null;
			LogEntry entry = new LogEntry(Name, LogType.Exception, DateTime.Now, text, context, exception);
			if (logPublisher == null)
			{
				throw new NullReferenceException();
			}
			logPublisher(entry);
		}

		public virtual void Raw(LogEntry logEntry)
		{
			if (logPublisher == null)
			{
				throw new NullReferenceException();
			}
			logPublisher(logEntry);
		}
	}
}
