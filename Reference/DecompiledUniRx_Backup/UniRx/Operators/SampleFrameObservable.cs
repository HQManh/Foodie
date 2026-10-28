using System;

namespace UniRx.Operators
{
	internal class SampleFrameObservable<T> : OperatorObservableBase<T>
	{
		private class SampleFrame : OperatorObserverBase<T, T>
		{
			private class SampleFrameTick : IObserver<long>
			{
				private readonly SampleFrame parent;

				public SampleFrameTick(SampleFrame parent)
				{
				}

				public void OnCompleted()
				{
				}

				public void OnError(Exception error)
				{
				}

				public void OnNext(long _)
				{
				}
			}

			private readonly SampleFrameObservable<T> parent;

			private readonly object gate;

			private T latestValue;

			private bool isUpdated;

			private bool isCompleted;

			private SingleAssignmentDisposable sourceSubscription;

			public SampleFrame(SampleFrameObservable<T> parent, IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			private void OnNextTick(long _)
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

		private readonly int frameCount;

		private readonly FrameCountType frameCountType;

		public SampleFrameObservable(IObservable<T> source, int frameCount, FrameCountType frameCountType)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
