using System;

namespace UniRx.Operators
{
	internal class ImmutableReturnFalseObservable : IObservable<bool>, IOptimizedObservable<bool>
	{
		internal static ImmutableReturnFalseObservable Instance;

		private ImmutableReturnFalseObservable()
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
