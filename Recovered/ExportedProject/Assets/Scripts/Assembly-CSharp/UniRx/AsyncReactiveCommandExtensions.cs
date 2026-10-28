using System;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine.UI;

namespace UniRx
{
	public static class AsyncReactiveCommandExtensions
	{
		private static readonly Action<object> Callback;

		public static AsyncReactiveCommand ToAsyncReactiveCommand(this IReactiveProperty<bool> sharedCanExecuteSource)
		{
			return null;
		}

		public static AsyncReactiveCommand<T> ToAsyncReactiveCommand<T>(this IReactiveProperty<bool> sharedCanExecuteSource)
		{
			return null;
		}

		private static void CancelCallback(object state)
		{
		}

		public static Task<T> WaitUntilExecuteAsync<T>(this IAsyncReactiveCommand<T> source, CancellationToken cancellationToken = default(CancellationToken))
		{
			return null;
		}

		public static TaskAwaiter<T> GetAwaiter<T>(this IAsyncReactiveCommand<T> command)
		{
			return default;
		}

		public static IDisposable BindTo(this IAsyncReactiveCommand<Unit> command, Button button)
		{
			return null;
		}

		public static IDisposable BindToOnClick(this IAsyncReactiveCommand<Unit> command, Button button, Func<Unit, IObservable<Unit>> asyncOnClick)
		{
			return null;
		}

		public static IDisposable BindToOnClick(this Button button, Func<Unit, IObservable<Unit>> asyncOnClick)
		{
			return null;
		}

		public static IDisposable BindToOnClick(this Button button, IReactiveProperty<bool> sharedCanExecuteSource, Func<Unit, IObservable<Unit>> asyncOnClick)
		{
			return null;
		}
	}
}
