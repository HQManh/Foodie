using System;

namespace UniRx.Operators
{
	internal class DelayFrameSubscriptionObservable<T> : OperatorObservableBase<T>
	{
		private readonly IObservable<T> source;

		private readonly int frameCount;

		private readonly FrameCountType frameCountType;

		public DelayFrameSubscriptionObservable(IObservable<T> source, int frameCount, FrameCountType frameCountType)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
