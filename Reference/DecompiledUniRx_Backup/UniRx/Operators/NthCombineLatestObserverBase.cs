using System;

namespace UniRx.Operators
{
	internal abstract class NthCombineLatestObserverBase<T> : OperatorObserverBase<T, T>, ICombineLatestObservable
	{
		private readonly int length;

		private bool isAllValueStarted;

		private readonly bool[] isStarted;

		private readonly bool[] isCompleted;

		public NthCombineLatestObserverBase(int length, IObserver<T> observer, IDisposable cancel)
			: base((IObserver<T>)null, (IDisposable)null)
		{
		}

		public abstract T GetResult();

		public void Publish(int index)
		{
		}

		public void Done(int index)
		{
		}

		public void Fail(Exception error)
		{
		}
	}
}
