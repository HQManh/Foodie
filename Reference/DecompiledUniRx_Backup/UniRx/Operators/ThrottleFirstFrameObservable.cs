using System;

namespace UniRx.Operators
{
	internal class ThrottleFirstFrameObservable<T> : OperatorObservableBase<T>
	{
		private class ThrottleFirstFrame : OperatorObserverBase<T, T>
		{
			private class ThrottleFirstFrameTick : IObserver<long>
			{
				private readonly ThrottleFirstFrame parent;

				public ThrottleFirstFrameTick(ThrottleFirstFrame parent)
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

			private readonly ThrottleFirstFrameObservable<T> parent;

			private readonly object gate;

			private bool open;

			private SerialDisposable cancelable;

			private ThrottleFirstFrameTick tick;

			public ThrottleFirstFrame(ThrottleFirstFrameObservable<T> parent, IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			private void OnNext()
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

		public ThrottleFirstFrameObservable(IObservable<T> source, int frameCount, FrameCountType frameCountType)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
