using System;

namespace UniRx
{
	public static class SubjectExtensions
	{
		private class AnonymousSubject<T, U> : ISubject<T, U>, IObserver<T>, IObservable<U>
		{
			private readonly IObserver<T> observer;

			private readonly IObservable<U> observable;

			public AnonymousSubject(IObserver<T> observer, IObservable<U> observable)
			{
			}

			public void OnCompleted()
			{
			}

			public void OnError(Exception error)
			{
			}

			public void OnNext(T value)
			{
			}

			public IDisposable Subscribe(IObserver<U> observer)
			{
				return null;
			}
		}

		private class AnonymousSubject<T> : AnonymousSubject<T, T>, ISubject<T>, ISubject<T, T>, IObserver<T>, IObservable<T>
		{
			public AnonymousSubject(IObserver<T> observer, IObservable<T> observable)
			{
			}
		}

		public static ISubject<T> Synchronize<T>(this ISubject<T> subject)
		{
			return null;
		}

		public static ISubject<T> Synchronize<T>(this ISubject<T> subject, object gate)
		{
			return null;
		}
	}
}
