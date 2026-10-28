using System;

namespace UniRx.Operators
{
	internal class SkipObservable<T> : OperatorObservableBase<T>
	{
		private class Skip : OperatorObserverBase<T, T>
		{
			private int remaining;

			public Skip(SkipObservable<T> parent, IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public override void OnNext(T value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}
		}

		private class Skip_ : OperatorObserverBase<T, T>
		{
			private readonly SkipObservable<T> parent;

			private bool open;

			public Skip_(SkipObservable<T> parent, IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			private void Tick()
			{
			}

			public override void OnNext(T value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}
		}

		private readonly IObservable<T> source;

		private readonly int count;

		private readonly TimeSpan duration;

		internal readonly IScheduler scheduler;

		public SkipObservable(IObservable<T> source, int count)
			: base(false)
		{
		}

		public SkipObservable(IObservable<T> source, TimeSpan duration, IScheduler scheduler)
			: base(false)
		{
		}

		public IObservable<T> Combine(int count)
		{
			return null;
		}

		public IObservable<T> Combine(TimeSpan duration)
		{
			return null;
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
