using System;
using System.Diagnostics;

namespace UniRx
{
	[Serializable]
	public abstract class Notification<T> : IEquatable<Notification<T>>
	{
		[Serializable]
		[DebuggerDisplay("OnNext({Value})")]
		internal sealed class OnNextNotification : Notification<T>
		{
			private T value;

			public override T Value => default;

			public override Exception Exception => null;

			public override bool HasValue => false;

			public override NotificationKind Kind => NotificationKind.OnNext;

			public OnNextNotification(T value)
			{
			}

			public override int GetHashCode()
			{
				return 0;
			}

			public override bool Equals(Notification<T> other)
			{
				return false;
			}

			public override string ToString()
			{
				return null;
			}

			public override void Accept(IObserver<T> observer)
			{
			}

			public override TResult Accept<TResult>(IObserver<T, TResult> observer)
			{
				return default;
			}

			public override void Accept(Action<T> onNext, Action<Exception> onError, Action onCompleted)
			{
			}

			public override TResult Accept<TResult>(Func<T, TResult> onNext, Func<Exception, TResult> onError, Func<TResult> onCompleted)
			{
				return default;
			}
		}

		[Serializable]
		[DebuggerDisplay("OnError({Exception})")]
		internal sealed class OnErrorNotification : Notification<T>
		{
			private Exception exception;

			public override T Value => default;

			public override Exception Exception => null;

			public override bool HasValue => false;

			public override NotificationKind Kind => NotificationKind.OnNext;

			public OnErrorNotification(Exception exception)
			{
			}

			public override int GetHashCode()
			{
				return 0;
			}

			public override bool Equals(Notification<T> other)
			{
				return false;
			}

			public override string ToString()
			{
				return null;
			}

			public override void Accept(IObserver<T> observer)
			{
			}

			public override TResult Accept<TResult>(IObserver<T, TResult> observer)
			{
				return default;
			}

			public override void Accept(Action<T> onNext, Action<Exception> onError, Action onCompleted)
			{
			}

			public override TResult Accept<TResult>(Func<T, TResult> onNext, Func<Exception, TResult> onError, Func<TResult> onCompleted)
			{
				return default;
			}
		}

		[Serializable]
		[DebuggerDisplay("OnCompleted()")]
		internal sealed class OnCompletedNotification : Notification<T>
		{
			public override T Value => default;

			public override Exception Exception => null;

			public override bool HasValue => false;

			public override NotificationKind Kind => NotificationKind.OnNext;

			public override int GetHashCode()
			{
				return 0;
			}

			public override bool Equals(Notification<T> other)
			{
				return false;
			}

			public override string ToString()
			{
				return null;
			}

			public override void Accept(IObserver<T> observer)
			{
			}

			public override TResult Accept<TResult>(IObserver<T, TResult> observer)
			{
				return default;
			}

			public override void Accept(Action<T> onNext, Action<Exception> onError, Action onCompleted)
			{
			}

			public override TResult Accept<TResult>(Func<T, TResult> onNext, Func<Exception, TResult> onError, Func<TResult> onCompleted)
			{
				return default;
			}
		}

		public abstract T Value { get; }

		public abstract bool HasValue { get; }

		public abstract Exception Exception { get; }

		public abstract NotificationKind Kind { get; }

		protected internal Notification()
		{
		}

		public abstract bool Equals(Notification<T> other);

		public static bool operator ==(Notification<T> left, Notification<T> right)
		{
			return false;
		}

		public static bool operator !=(Notification<T> left, Notification<T> right)
		{
			return false;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public abstract void Accept(IObserver<T> observer);

		public abstract TResult Accept<TResult>(IObserver<T, TResult> observer);

		public abstract void Accept(Action<T> onNext, Action<Exception> onError, Action onCompleted);

		public abstract TResult Accept<TResult>(Func<T, TResult> onNext, Func<Exception, TResult> onError, Func<TResult> onCompleted);

		public IObservable<T> ToObservable()
		{
			return null;
		}

		public IObservable<T> ToObservable(IScheduler scheduler)
		{
			return null;
		}
	}
	public static class Notification
	{
		public static Notification<T> CreateOnNext<T>(T value)
		{
			return null;
		}

		public static Notification<T> CreateOnError<T>(Exception error)
		{
			return null;
		}

		public static Notification<T> CreateOnCompleted<T>()
		{
			return null;
		}
	}
}
