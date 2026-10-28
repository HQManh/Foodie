using System;

namespace UniRx.Operators
{
	internal class ImmutableReturnInt32Observable : IObservable<int>, IOptimizedObservable<int>
	{
		private static ImmutableReturnInt32Observable[] Caches;

		private readonly int x;

		public static IObservable<int> GetInt32Observable(int x)
		{
			return null;
		}

		private ImmutableReturnInt32Observable(int x)
		{
		}

		public bool IsRequiredSubscribeOnCurrentThread()
		{
			return false;
		}

		public IDisposable Subscribe(IObserver<int> observer)
		{
			return null;
		}
	}
}
