using System;

namespace UniRx.Operators
{
	internal class SubscribeOnObservable<T> : OperatorObservableBase<T>
	{
		private readonly IObservable<T> source;

		private readonly IScheduler scheduler;

		public SubscribeOnObservable(IObservable<T> source, IScheduler scheduler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
