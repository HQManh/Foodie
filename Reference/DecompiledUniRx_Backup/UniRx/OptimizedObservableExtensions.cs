using System;

namespace UniRx
{
	public static class OptimizedObservableExtensions
	{
		public static bool IsRequiredSubscribeOnCurrentThread<T>(this IObservable<T> source)
		{
			return false;
		}

		public static bool IsRequiredSubscribeOnCurrentThread<T>(this IObservable<T> source, IScheduler scheduler)
		{
			return false;
		}
	}
}
