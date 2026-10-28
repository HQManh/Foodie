using System;

namespace UniRx.Operators
{
	internal class RangeObservable : OperatorObservableBase<int>
	{
		private class Range : OperatorObserverBase<int, int>
		{
			public Range(IObserver<int> observer, IDisposable cancel)
				: base(observer, cancel)
			{
			}

			public override void OnNext(int value)
			{
				observer.OnNext(value);
			}

			public override void OnError(Exception error)
			{
				observer.OnError(error);
				Dispose();
			}

			public override void OnCompleted()
			{
				observer.OnCompleted();
				Dispose();
			}
		}

		private readonly int start;

		private readonly int count;

		private readonly IScheduler scheduler;

		public RangeObservable(int start, int count, IScheduler scheduler)
			: base(false)
		{
			if (count < 0)
			{
				throw new ArgumentOutOfRangeException("count" /* literal recovered by guess */);
			}
			this.start = start;
			this.count = count;
			this.scheduler = scheduler;
		}

		protected override IDisposable SubscribeCore(IObserver<int> observer, IDisposable cancel)
		{
			// TODO(unrecovered): the scheduler identity check and the recursive Schedule callback (<SubscribeCore>b__0) are only partly recovered; the immediate-loop path was not reproduced.
			return null;
		}
	}
}
