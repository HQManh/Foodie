using System;

namespace UniRx.Operators
{
	internal class TimeoutFrameObservable<T> : OperatorObservableBase<T>
	{
		private class TimeoutFrame : OperatorObserverBase<T, T>
		{
			private class TimeoutFrameTick : IObserver<long>
			{
				private readonly TimeoutFrame parent;

				private readonly ulong timerId;

				public TimeoutFrameTick(TimeoutFrame parent, ulong timerId)
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

			private readonly TimeoutFrameObservable<T> parent;

			private readonly object gate;

			private ulong objectId;

			private bool isTimeout;

			private SingleAssignmentDisposable sourceSubscription;

			private SerialDisposable timerSubscription;

			public TimeoutFrame(TimeoutFrameObservable<T> parent, IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			private IDisposable RunTimer(ulong timerId)
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

		private readonly int frameCount;

		private readonly FrameCountType frameCountType;

		public TimeoutFrameObservable(IObservable<T> source, int frameCount, FrameCountType frameCountType)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
