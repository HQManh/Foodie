using System;

namespace UniRx
{
	public class ScheduledNotifier<T> : IObservable<T>, IProgress<T>
	{
		private readonly IScheduler scheduler;

		private readonly Subject<T> trigger;

		public ScheduledNotifier()
		{
		}

		public ScheduledNotifier(IScheduler scheduler)
		{
		}

		public void Report(T value)
		{
		}

		public IDisposable Report(T value, TimeSpan dueTime)
		{
			return null;
		}

		public IDisposable Report(T value, DateTimeOffset dueTime)
		{
			return null;
		}

		public IDisposable Subscribe(IObserver<T> observer)
		{
			return null;
		}
	}
}
