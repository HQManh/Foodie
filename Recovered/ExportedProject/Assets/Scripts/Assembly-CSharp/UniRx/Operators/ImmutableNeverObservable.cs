using System;

namespace UniRx.Operators
{
	internal class ImmutableNeverObservable<T> : IObservable<T>, IOptimizedObservable<T>
	{
		internal static ImmutableNeverObservable<T> Instance;

		public bool IsRequiredSubscribeOnCurrentThread()
		{
			return false;
		}

		public IDisposable Subscribe(IObserver<T> observer)
		{
			return null;
		}
	}
}
