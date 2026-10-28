using System;

namespace UniRx.Operators
{
	internal class FrameIntervalObservable<T> : OperatorObservableBase<FrameInterval<T>>
	{
		private class FrameInterval : OperatorObserverBase<T, FrameInterval<T>>
		{
			private int lastFrame;

			public FrameInterval(IObserver<FrameInterval<T>> observer, IDisposable cancel)
				: base((IObserver<FrameInterval<T>>)null, (IDisposable)null)
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

		public FrameIntervalObservable(IObservable<T> source)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<FrameInterval<T>> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
