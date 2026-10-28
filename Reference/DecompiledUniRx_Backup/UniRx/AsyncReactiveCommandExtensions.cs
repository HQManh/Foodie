using System;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine.UI;

namespace UniRx
{
	public static class AsyncReactiveCommandExtensions
	{
		private static readonly Action<object> Callback = CancelCallback;

		public static AsyncReactiveCommand ToAsyncReactiveCommand(this IReactiveProperty<bool> sharedCanExecuteSource)
		{
			return new AsyncReactiveCommand(sharedCanExecuteSource);
		}

		public static AsyncReactiveCommand<T> ToAsyncReactiveCommand<T>(this IReactiveProperty<bool> sharedCanExecuteSource)
		{
			return null;
		}

		private static void CancelCallback(object state)
		{
			// TODO(unrecovered): the callback casts the state object and dispatches through interface lookups and generic helpers (FUN_03f95da8, FUN_04c4c5d4 and similar) whose targets are not in the stubs.
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
			// TODO(unrecovered): binds through interface dispatch on IAsyncReactiveCommand (FUN_03f95da8 vtable lookups), the UnityUIComponentExtensions.SubscribeToInteractable helper and StableCompositeDisposable; these are not in the stubs.
			return null;
		}

		public static IDisposable BindToOnClick(this IAsyncReactiveCommand<Unit> command, Button button, Func<Unit, IObservable<Unit>> asyncOnClick)
		{
			// TODO(unrecovered): composes SubscribeToInteractable, UnityEvent.AsObservable, a cached <>c lambda and StableCompositeDisposable through unnamed helpers (FUN_04c4c5d4, FUN_071ce454) not in the stubs.
			return null;
		}

		public static IDisposable BindToOnClick(this Button button, Func<Unit, IObservable<Unit>> asyncOnClick)
		{
			return BindToOnClick(new AsyncReactiveCommand(), button, asyncOnClick);
		}

		public static IDisposable BindToOnClick(this Button button, IReactiveProperty<bool> sharedCanExecuteSource, Func<Unit, IObservable<Unit>> asyncOnClick)
		{
			return BindToOnClick(sharedCanExecuteSource.ToAsyncReactiveCommand(), button, asyncOnClick);
		}
	}
}
