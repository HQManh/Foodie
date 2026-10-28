using System;

namespace UniRx
{
	public static class ObserverExtensions
	{
		public static IObserver<T> Synchronize<T>(this IObserver<T> observer)
		{
			return null;
		}

		public static IObserver<T> Synchronize<T>(this IObserver<T> observer, object gate)
		{
			return null;
		}
	}
}
