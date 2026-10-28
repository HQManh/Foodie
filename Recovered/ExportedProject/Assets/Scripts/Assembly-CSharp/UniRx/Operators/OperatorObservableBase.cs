using System;

namespace UniRx.Operators
{
	public abstract class OperatorObservableBase<T> : IObservable<T>, IOptimizedObservable<T>
	{
		private readonly bool isRequiredSubscribeOnCurrentThread;

		public OperatorObservableBase(bool isRequiredSubscribeOnCurrentThread)
		{
		}

		public bool IsRequiredSubscribeOnCurrentThread()
		{
			return false;
		}

		public IDisposable Subscribe(IObserver<T> observer)
		{
			return null;
		}

		protected abstract IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel);
	}
}
