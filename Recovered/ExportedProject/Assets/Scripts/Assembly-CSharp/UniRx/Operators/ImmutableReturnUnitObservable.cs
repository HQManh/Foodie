using System;

namespace UniRx.Operators
{
	internal class ImmutableReturnUnitObservable : IObservable<Unit>, IOptimizedObservable<Unit>
	{
		internal static ImmutableReturnUnitObservable Instance;

		private ImmutableReturnUnitObservable()
		{
		}

		public bool IsRequiredSubscribeOnCurrentThread()
		{
			return false;
		}

		public IDisposable Subscribe(IObserver<Unit> observer)
		{
			return null;
		}
	}
}
