using System;

namespace UniRx.Operators
{
	internal class ImmutableEmptyObservable<T> : IObservable<T>, IOptimizedObservable<T>
	{
		internal static ImmutableEmptyObservable<T> Instance;

		private ImmutableEmptyObservable()
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
	}
}
