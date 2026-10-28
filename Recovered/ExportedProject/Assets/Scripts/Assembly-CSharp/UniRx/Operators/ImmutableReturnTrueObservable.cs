using System;

namespace UniRx.Operators
{
	internal class ImmutableReturnTrueObservable : IObservable<bool>, IOptimizedObservable<bool>
	{
		internal static ImmutableReturnTrueObservable Instance;

		private ImmutableReturnTrueObservable()
		{
		}

		public bool IsRequiredSubscribeOnCurrentThread()
		{
			return false;
		}

		public IDisposable Subscribe(IObserver<bool> observer)
		{
			return null;
		}
	}
}
