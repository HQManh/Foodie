using System;

namespace UniRx.Operators
{
	internal class ThrottleFrameObservable<T> : OperatorObservableBase<T>
	{
		private class ThrottleFrame : OperatorObserverBase<T, T>
		{
			private class ThrottleFrameTick : IObserver<long>
			{
				private readonly ThrottleFrame parent;

				private readonly ulong currentid;

				public ThrottleFrameTick(ThrottleFrame parent, ulong currentid)
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

			private readonly ThrottleFrameObservable<T> parent;

			private readonly object gate;

			private T latestValue;

			private bool hasValue;

			private SerialDisposable cancelable;

			private ulong id;

			public ThrottleFrame(ThrottleFrameObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		private readonly int frameCount;

		private readonly FrameCountType frameCountType;

		public ThrottleFrameObservable(IObservable<T> source, int frameCount, FrameCountType frameCountType)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
