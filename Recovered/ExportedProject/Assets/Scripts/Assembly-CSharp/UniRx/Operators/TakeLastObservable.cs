using System;
using System.Collections.Generic;

namespace UniRx.Operators
{
	internal class TakeLastObservable<T> : OperatorObservableBase<T>
	{
		private class TakeLast : OperatorObserverBase<T, T>
		{
			private readonly TakeLastObservable<T> parent;

			private readonly Queue<T> q;

			public TakeLast(TakeLastObservable<T> parent, IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
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

		private class TakeLast_ : OperatorObserverBase<T, T>
		{
			private DateTimeOffset startTime;

			private readonly TakeLastObservable<T> parent;

			private readonly Queue<TimeInterval<T>> q;

			public TakeLast_(TakeLastObservable<T> parent, IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
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

			private void Trim(TimeSpan now)
			{
			}
		}

		private readonly IObservable<T> source;

		private readonly int count;

		private readonly TimeSpan duration;

		private readonly IScheduler scheduler;

		public TakeLastObservable(IObservable<T> source, int count)
			: base(false)
		{
		}

		public TakeLastObservable(IObservable<T> source, TimeSpan duration, IScheduler scheduler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
