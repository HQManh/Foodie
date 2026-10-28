using System;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine.UI;

namespace UniRx
{
	public static class ReactiveCommandExtensions
	{
		private static readonly Action<object> Callback = CancelCallback;

		public static ReactiveCommand ToReactiveCommand(this IObservable<bool> canExecuteSource, bool initialValue = true)
		{
			return new ReactiveCommand(canExecuteSource, initialValue);
		}

		public static ReactiveCommand<T> ToReactiveCommand<T>(this IObservable<bool> canExecuteSource, bool initialValue = true)
		{
			// TODO(unrecovered): generic overload has no pseudocode in this batch; left unimplemented.
			return null;
		}

		private static void CancelCallback(object state)
		{
			// TODO(unrecovered): body disposes the composite state's fields through unnamed virtual calls and type checks; not reproduced.
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
			// TODO(unrecovered): body subscribes the CanExecute property to the button and the onClick event through unnamed helpers (FUN_04c4c5d4, FUN_071ce454); the subscriber lambda is not identified.
			return null;
		}

		public static IDisposable BindToOnClick(this IReactiveCommand<Unit> command, Button button, Action<Unit> onClick)
		{
			// TODO(unrecovered): body combines three subscriptions via unnamed helpers (FUN_04c4b894, FUN_04c4c5d4); the onClick subscription target is not identified.
			return null;
		}

		public static IDisposable BindToButtonOnClick(this IObservable<bool> canExecuteSource, Button button, Action<Unit> onClick, bool initialValue = true)
		{
			return canExecuteSource.ToReactiveCommand(initialValue).BindToOnClick(button, onClick);
		}
	}
}
