using System;
using System.Collections;

namespace UniRx.Operators
{
	internal abstract class NthZipObserverBase<T> : OperatorObserverBase<T, T>, IZipObservable
	{
		private ICollection[] queues;

		private bool[] isDone;

		private int length;

		public NthZipObserverBase(IObserver<T> observer, IDisposable cancel)
			: base((IObserver<T>)null, (IDisposable)null)
		{
		}

		protected void SetQueue(ICollection[] queues)
		{
		}

		public abstract T GetResult();

		public void Dequeue(int index)
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
