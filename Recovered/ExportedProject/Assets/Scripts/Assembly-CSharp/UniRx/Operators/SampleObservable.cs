using System;

namespace UniRx.Operators
{
	internal class SampleObservable<T> : OperatorObservableBase<T>
	{
		private class Sample : OperatorObserverBase<T, T>
		{
			private readonly SampleObservable<T> parent;

			private readonly object gate;

			private T latestValue;

			private bool isUpdated;

			private bool isCompleted;

			private SingleAssignmentDisposable sourceSubscription;

			public Sample(SampleObservable<T> parent, IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			private void OnNextTick()
			{
			}

			private void OnNextRecursive(Action<TimeSpan> self)
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

		private readonly TimeSpan interval;

		private readonly IScheduler scheduler;

		public SampleObservable(IObservable<T> source, TimeSpan interval, IScheduler scheduler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class SampleObservable<T, T2> : OperatorObservableBase<T>
	{
		private class Sample : OperatorObserverBase<T, T>
		{
			private class SampleTick : IObserver<T2>
			{
				private readonly Sample parent;

				public SampleTick(Sample parent)
				{
				}

				public void OnCompleted()
				{
				}

				public void OnError(Exception error)
				{
				}

				public void OnNext(T2 _)
				{
				}
			}

			private readonly SampleObservable<T, T2> parent;

			private readonly object gate;

			private T latestValue;

			private bool isUpdated;

			private bool isCompleted;

			private SingleAssignmentDisposable sourceSubscription;

			public Sample(SampleObservable<T, T2> parent, IObserver<T> observer, IDisposable cancel)
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

		private readonly IObservable<T> source;

		private readonly IObservable<T2> intervalSource;

		public SampleObservable(IObservable<T> source, IObservable<T2> intervalSource)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
