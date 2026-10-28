using System;

namespace UniRx
{
	public static class ObservableExtensions
	{
		public static IDisposable Subscribe<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IDisposable Subscribe<T>(this IObservable<T> source, Action<T> onNext)
		{
			return null;
		}

		public static IDisposable Subscribe<T>(this IObservable<T> source, Action<T> onNext, Action<Exception> onError)
		{
			return null;
		}

		public static IDisposable Subscribe<T>(this IObservable<T> source, Action<T> onNext, Action onCompleted)
		{
			return null;
		}

		public static IDisposable Subscribe<T>(this IObservable<T> source, Action<T> onNext, Action<Exception> onError, Action onCompleted)
		{
			return null;
		}

		public static IDisposable SubscribeWithState<T, TState>(this IObservable<T> source, TState state, Action<T, TState> onNext)
		{
			return null;
		}

		public static IDisposable SubscribeWithState<T, TState>(this IObservable<T> source, TState state, Action<T, TState> onNext, Action<Exception, TState> onError)
		{
			return null;
		}

		public static IDisposable SubscribeWithState<T, TState>(this IObservable<T> source, TState state, Action<T, TState> onNext, Action<TState> onCompleted)
		{
			return null;
		}

		public static IDisposable SubscribeWithState<T, TState>(this IObservable<T> source, TState state, Action<T, TState> onNext, Action<Exception, TState> onError, Action<TState> onCompleted)
		{
			return null;
		}

		public static IDisposable SubscribeWithState2<T, TState1, TState2>(this IObservable<T> source, TState1 state1, TState2 state2, Action<T, TState1, TState2> onNext)
		{
			return null;
		}

		public static IDisposable SubscribeWithState2<T, TState1, TState2>(this IObservable<T> source, TState1 state1, TState2 state2, Action<T, TState1, TState2> onNext, Action<Exception, TState1, TState2> onError)
		{
			return null;
		}

		public static IDisposable SubscribeWithState2<T, TState1, TState2>(this IObservable<T> source, TState1 state1, TState2 state2, Action<T, TState1, TState2> onNext, Action<TState1, TState2> onCompleted)
		{
			return null;
		}

		public static IDisposable SubscribeWithState2<T, TState1, TState2>(this IObservable<T> source, TState1 state1, TState2 state2, Action<T, TState1, TState2> onNext, Action<Exception, TState1, TState2> onError, Action<TState1, TState2> onCompleted)
		{
			return null;
		}

		public static IDisposable SubscribeWithState3<T, TState1, TState2, TState3>(this IObservable<T> source, TState1 state1, TState2 state2, TState3 state3, Action<T, TState1, TState2, TState3> onNext)
		{
			return null;
		}

		public static IDisposable SubscribeWithState3<T, TState1, TState2, TState3>(this IObservable<T> source, TState1 state1, TState2 state2, TState3 state3, Action<T, TState1, TState2, TState3> onNext, Action<Exception, TState1, TState2, TState3> onError)
		{
			return null;
		}

		public static IDisposable SubscribeWithState3<T, TState1, TState2, TState3>(this IObservable<T> source, TState1 state1, TState2 state2, TState3 state3, Action<T, TState1, TState2, TState3> onNext, Action<TState1, TState2, TState3> onCompleted)
		{
			return null;
		}

		public static IDisposable SubscribeWithState3<T, TState1, TState2, TState3>(this IObservable<T> source, TState1 state1, TState2 state2, TState3 state3, Action<T, TState1, TState2, TState3> onNext, Action<Exception, TState1, TState2, TState3> onError, Action<TState1, TState2, TState3> onCompleted)
		{
			return null;
		}
	}
}
