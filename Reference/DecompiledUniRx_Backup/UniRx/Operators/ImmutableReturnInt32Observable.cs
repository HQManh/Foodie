using System;

namespace UniRx.Operators
{
	internal class ImmutableReturnInt32Observable : IObservable<int>, IOptimizedObservable<int>
	{
		// Cached instances for values -1..9 (index = value + 1); the pseudocode indexes the cache array at (x + 1).
		private static ImmutableReturnInt32Observable[] Caches = CreateCaches();

		private readonly int x;

		public static IObservable<int> GetInt32Observable(int x)
		{
			if (x < -1 || x > 9)
			{
				return new ImmutableReturnInt32Observable(x);
			}
			return Caches[x + 1];
		}

		private ImmutableReturnInt32Observable(int x)
		{
			this.x = x;
		}

		private static ImmutableReturnInt32Observable[] CreateCaches()
		{
			ImmutableReturnInt32Observable[] caches = new ImmutableReturnInt32Observable[11];
			for (int i = 0; i < caches.Length; i++)
			{
				caches[i] = new ImmutableReturnInt32Observable(i - 1);
			}
			return caches;
		}

		public bool IsRequiredSubscribeOnCurrentThread()
		{
			return false;
		}

		public IDisposable Subscribe(IObserver<int> observer)
		{
			observer.OnNext(x);
			observer.OnCompleted();
			return Disposable.Empty;
		}
	}
}
