using System;
using UniRx.Operators;

namespace UniRx
{
	public static class Observer
	{
		private class AnonymousObserver<T> : IObserver<T>
		{
			private readonly Action<T> onNext;

			private readonly Action<Exception> onError;

			private readonly Action onCompleted;

			private int isStopped;

			public AnonymousObserver(Action<T> onNext, Action<Exception> onError, Action onCompleted)
			{
			}

			public void OnNext(T value)
			{
			}

			public void OnError(Exception error)
			{
			}

			public void OnCompleted()
			{
			}
		}

		private class EmptyOnNextAnonymousObserver<T> : IObserver<T>
		{
			private readonly Action<Exception> onError;

			private readonly Action onCompleted;

			private int isStopped;

			public EmptyOnNextAnonymousObserver(Action<Exception> onError, Action onCompleted)
			{
			}

			public void OnNext(T value)
			{
			}

			public void OnError(Exception error)
			{
			}

			public void OnCompleted()
			{
			}
		}

		private class Subscribe<T> : IObserver<T>
		{
			private readonly Action<T> onNext;

			private readonly Action<Exception> onError;

			private readonly Action onCompleted;

			private int isStopped;

			public Subscribe(Action<T> onNext, Action<Exception> onError, Action onCompleted)
			{
			}

			public void OnNext(T value)
			{
			}

			public void OnError(Exception error)
			{
			}

			public void OnCompleted()
			{
			}
		}

		private class Subscribe_<T> : IObserver<T>
		{
			private readonly Action<Exception> onError;

			private readonly Action onCompleted;

			private int isStopped;

			public Subscribe_(Action<Exception> onError, Action onCompleted)
			{
			}

			public void OnNext(T value)
			{
			}

			public void OnError(Exception error)
			{
			}

			public void OnCompleted()
			{
			}
		}

		private class Subscribe<T, TState> : IObserver<T>
		{
			private readonly TState state;

			private readonly Action<T, TState> onNext;

			private readonly Action<Exception, TState> onError;

			private readonly Action<TState> onCompleted;

			private int isStopped;

			public Subscribe(TState state, Action<T, TState> onNext, Action<Exception, TState> onError, Action<TState> onCompleted)
			{
			}

			public void OnNext(T value)
			{
			}

			public void OnError(Exception error)
			{
			}

			public void OnCompleted()
			{
			}
		}

		private class Subscribe<T, TState1, TState2> : IObserver<T>
		{
			private readonly TState1 state1;

			private readonly TState2 state2;

			private readonly Action<T, TState1, TState2> onNext;

			private readonly Action<Exception, TState1, TState2> onError;

			private readonly Action<TState1, TState2> onCompleted;

			private int isStopped;

			public Subscribe(TState1 state1, TState2 state2, Action<T, TState1, TState2> onNext, Action<Exception, TState1, TState2> onError, Action<TState1, TState2> onCompleted)
			{
			}

			public void OnNext(T value)
			{
			}

			public void OnError(Exception error)
			{
			}

			public void OnCompleted()
			{
			}
		}

		private class Subscribe<T, TState1, TState2, TState3> : IObserver<T>
		{
			private readonly TState1 state1;

			private readonly TState2 state2;

			private readonly TState3 state3;

			private readonly Action<T, TState1, TState2, TState3> onNext;

			private readonly Action<Exception, TState1, TState2, TState3> onError;

			private readonly Action<TState1, TState2, TState3> onCompleted;

			private int isStopped;

			public Subscribe(TState1 state1, TState2 state2, TState3 state3, Action<T, TState1, TState2, TState3> onNext, Action<Exception, TState1, TState2, TState3> onError, Action<TState1, TState2, TState3> onCompleted)
			{
			}

			public void OnNext(T value)
			{
			}

			public void OnError(Exception error)
			{
			}

			public void OnCompleted()
			{
			}
		}

		private class AutoDetachObserver<T> : OperatorObserverBase<T, T>
		{
			public AutoDetachObserver(IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public override void OnNext(T value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}
		}

		internal static IObserver<T> CreateSubscribeObserver<T>(Action<T> onNext, Action<Exception> onError, Action onCompleted)
		{
			return null;
		}

		internal static IObserver<T> CreateSubscribeWithStateObserver<T, TState>(TState state, Action<T, TState> onNext, Action<Exception, TState> onError, Action<TState> onCompleted)
		{
			return null;
		}

		internal static IObserver<T> CreateSubscribeWithState2Observer<T, TState1, TState2>(TState1 state1, TState2 state2, Action<T, TState1, TState2> onNext, Action<Exception, TState1, TState2> onError, Action<TState1, TState2> onCompleted)
		{
			return null;
		}

		internal static IObserver<T> CreateSubscribeWithState3Observer<T, TState1, TState2, TState3>(TState1 state1, TState2 state2, TState3 state3, Action<T, TState1, TState2, TState3> onNext, Action<Exception, TState1, TState2, TState3> onError, Action<TState1, TState2, TState3> onCompleted)
		{
			return null;
		}

		public static IObserver<T> Create<T>(Action<T> onNext)
		{
			return null;
		}

		public static IObserver<T> Create<T>(Action<T> onNext, Action<Exception> onError)
		{
			return null;
		}

		public static IObserver<T> Create<T>(Action<T> onNext, Action onCompleted)
		{
			return null;
		}

		public static IObserver<T> Create<T>(Action<T> onNext, Action<Exception> onError, Action onCompleted)
		{
			return null;
		}

		public static IObserver<T> CreateAutoDetachObserver<T>(IObserver<T> observer, IDisposable disposable)
		{
			return null;
		}
	}
}
