using System;

namespace UniRx
{
	public static class Disposable
	{
		private class EmptyDisposable : IDisposable
		{
			public static EmptyDisposable Singleton = new EmptyDisposable();

			private EmptyDisposable()
			{
			}

			public void Dispose()
			{
			}
		}

		private class AnonymousDisposable : IDisposable
		{
			private bool isDisposed;

			private readonly Action dispose;

			public AnonymousDisposable(Action dispose)
			{
				this.dispose = dispose;
			}

			public void Dispose()
			{
				if (isDisposed)
				{
					return;
				}
				isDisposed = true;
				if (dispose == null)
				{
					throw new NullReferenceException();
				}
				dispose();
			}
		}

		private class AnonymousDisposable<T> : IDisposable
		{
			private bool isDisposed;

			private readonly T state;

			private readonly Action<T> dispose;

			public AnonymousDisposable(T state, Action<T> dispose)
			{
			}

			public void Dispose()
			{
			}
		}

		public static readonly IDisposable Empty = EmptyDisposable.Singleton;

		public static IDisposable Create(Action disposeAction)
		{
			return new AnonymousDisposable(disposeAction);
		}

		public static IDisposable CreateWithState<TState>(TState state, Action<TState> disposeAction)
		{
			return null;
		}
	}
}
