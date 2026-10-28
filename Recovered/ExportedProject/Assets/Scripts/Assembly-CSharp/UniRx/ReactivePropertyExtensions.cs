using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;

namespace UniRx
{
	public static class ReactivePropertyExtensions
	{
		private static readonly Action<object> Callback;

		public static IReadOnlyReactiveProperty<T> ToReactiveProperty<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IReadOnlyReactiveProperty<T> ToReactiveProperty<T>(this IObservable<T> source, T initialValue)
		{
			return null;
		}

		public static ReadOnlyReactiveProperty<T> ToReadOnlyReactiveProperty<T>(this IObservable<T> source)
		{
			return null;
		}

		private static void CancelCallback(object state)
		{
		}

		public static Task<T> WaitUntilValueChangedAsync<T>(this IReadOnlyReactiveProperty<T> source, CancellationToken cancellationToken = default(CancellationToken))
		{
			return null;
		}

		public static TaskAwaiter<T> GetAwaiter<T>(this IReadOnlyReactiveProperty<T> source)
		{
			return default;
		}

		public static ReadOnlyReactiveProperty<T> ToSequentialReadOnlyReactiveProperty<T>(this IObservable<T> source)
		{
			return null;
		}

		public static ReadOnlyReactiveProperty<T> ToReadOnlyReactiveProperty<T>(this IObservable<T> source, T initialValue)
		{
			return null;
		}

		public static ReadOnlyReactiveProperty<T> ToSequentialReadOnlyReactiveProperty<T>(this IObservable<T> source, T initialValue)
		{
			return null;
		}

		public static IObservable<T> SkipLatestValueOnSubscribe<T>(this IReadOnlyReactiveProperty<T> source)
		{
			return null;
		}

		public static IObservable<bool> CombineLatestValuesAreAllTrue(this IEnumerable<IObservable<bool>> sources)
		{
			return null;
		}

		public static IObservable<bool> CombineLatestValuesAreAllFalse(this IEnumerable<IObservable<bool>> sources)
		{
			return null;
		}
	}
}
