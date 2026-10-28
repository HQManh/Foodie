using System;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine.UI;

namespace UniRx
{
	public static class ReactiveCommandExtensions
	{
		private static readonly Action<object> Callback;

		public static ReactiveCommand ToReactiveCommand(this IObservable<bool> canExecuteSource, bool initialValue = true)
		{
			return null;
		}

		public static ReactiveCommand<T> ToReactiveCommand<T>(this IObservable<bool> canExecuteSource, bool initialValue = true)
		{
			return null;
		}

		private static void CancelCallback(object state)
		{
		}

		public static Task<T> WaitUntilExecuteAsync<T>(this IReactiveCommand<T> source, CancellationToken cancellationToken = default(CancellationToken))
		{
			return null;
		}

		public static TaskAwaiter<T> GetAwaiter<T>(this IReactiveCommand<T> command)
		{
			return default;
		}

		public static IDisposable BindTo(this IReactiveCommand<Unit> command, Button button)
		{
			return null;
		}

		public static IDisposable BindToOnClick(this IReactiveCommand<Unit> command, Button button, Action<Unit> onClick)
		{
			return null;
		}

		public static IDisposable BindToButtonOnClick(this IObservable<bool> canExecuteSource, Button button, Action<Unit> onClick, bool initialValue = true)
		{
			return null;
		}
	}
}
