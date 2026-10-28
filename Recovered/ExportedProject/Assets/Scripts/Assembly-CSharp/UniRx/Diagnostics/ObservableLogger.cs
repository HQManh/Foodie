using System;

namespace UniRx.Diagnostics
{
	public class ObservableLogger : IObservable<LogEntry>
	{
		private static readonly Subject<LogEntry> logPublisher;

		public static readonly ObservableLogger Listener;

		private ObservableLogger()
		{
		}

		public static Action<LogEntry> RegisterLogger(Logger logger)
		{
			return null;
		}

		public IDisposable Subscribe(IObserver<LogEntry> observer)
		{
			return null;
		}
	}
}
