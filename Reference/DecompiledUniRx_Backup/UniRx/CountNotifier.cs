using System;

namespace UniRx
{
	public class CountNotifier : IObservable<CountChangedStatus>
	{
		private readonly object lockObject;

		private readonly Subject<CountChangedStatus> statusChanged;

		private readonly int max;

		public int Max => max;

		public int Count { get; private set; }

		public CountNotifier(int max = 2147483647)
		{
			lockObject = new object();
			statusChanged = new Subject<CountChangedStatus>();
			if (max <= 0)
			{
				throw new ArgumentException("max");
			}
			this.max = max;
		}

		public IDisposable Increment(int incrementCount = 1)
		{
			if (incrementCount < 0)
			{
				throw new ArgumentException("incrementCount");
			}
			lock (lockObject)
			{
				if (Count == max)
				{
					return Disposable.Empty;
				}
				int next = Count + incrementCount;
				if (max <= next)
				{
					next = max;
				}
				Count = next;
				statusChanged.OnNext(CountChangedStatus.Increment);
				if (Count == max)
				{
					statusChanged.OnNext(CountChangedStatus.Max);
				}
				return Disposable.Create(() => Decrement(incrementCount));
			}
		}

		public void Decrement(int decrementCount = 1)
		{
			if (decrementCount < 0)
			{
				throw new ArgumentException("decrementCount");
			}
			lock (lockObject)
			{
				if (Count != 0)
				{
					Count = Math.Max(0, Count - decrementCount);
					statusChanged.OnNext(CountChangedStatus.Decrement);
					if (Count == 0)
					{
						statusChanged.OnNext(CountChangedStatus.Empty);
					}
				}
			}
		}

		public IDisposable Subscribe(IObserver<CountChangedStatus> observer)
		{
			return statusChanged.Subscribe(observer);
		}
	}
}
