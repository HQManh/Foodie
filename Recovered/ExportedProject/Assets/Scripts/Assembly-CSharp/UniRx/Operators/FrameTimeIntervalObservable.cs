using System;

namespace UniRx.Operators
{
	internal class FrameTimeIntervalObservable<T> : OperatorObservableBase<TimeInterval<T>>
	{
		private class FrameTimeInterval : OperatorObserverBase<T, TimeInterval<T>>
		{
			private readonly FrameTimeIntervalObservable<T> parent;

			private float lastTime;

			public FrameTimeInterval(FrameTimeIntervalObservable<T> parent, IObserver<TimeInterval<T>> observer, IDisposable cancel)
				: base((IObserver<TimeInterval<T>>)null, (IDisposable)null)
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

		private readonly bool ignoreTimeScale;

		public FrameTimeIntervalObservable(IObservable<T> source, bool ignoreTimeScale)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TimeInterval<T>> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
