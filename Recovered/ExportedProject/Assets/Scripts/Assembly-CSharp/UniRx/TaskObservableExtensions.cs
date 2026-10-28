using System;
using System.Threading;
using System.Threading.Tasks;

namespace UniRx
{
	public static class TaskObservableExtensions
	{
		public static IObservable<Unit> ToObservable(this Task task)
		{
			return null;
		}

		public static IObservable<Unit> ToObservable(this Task task, IScheduler scheduler)
		{
			return null;
		}

		private static IObservable<Unit> ToObservableImpl(Task task, IScheduler scheduler)
		{
			return null;
		}

		private static IObservable<Unit> ToObservableSlow(Task task, IScheduler scheduler)
		{
			return null;
		}

		private static void ToObservableDone(Task task, IObserver<Unit> subject)
		{
		}

		public static IObservable<TResult> ToObservable<TResult>(this Task<TResult> task)
		{
			return null;
		}

		public static IObservable<TResult> ToObservable<TResult>(this Task<TResult> task, IScheduler scheduler)
		{
			return null;
		}

		private static IObservable<TResult> ToObservableImpl<TResult>(Task<TResult> task, IScheduler scheduler)
		{
			return null;
		}

		private static IObservable<TResult> ToObservableSlow<TResult>(Task<TResult> task, IScheduler scheduler)
		{
			return null;
		}

		private static void ToObservableDone<TResult>(Task<TResult> task, IObserver<TResult> subject)
		{
		}

		private static TaskContinuationOptions GetTaskContinuationOptions(IScheduler scheduler)
		{
			return TaskContinuationOptions.None;
		}

		private static IObservable<TResult> ToObservableResult<TResult>(AsyncSubject<TResult> subject, IScheduler scheduler)
		{
			return null;
		}

		public static Task<TResult> ToTask<TResult>(this IObservable<TResult> observable)
		{
			return null;
		}

		public static Task<TResult> ToTask<TResult>(this IObservable<TResult> observable, object state)
		{
			return null;
		}

		public static Task<TResult> ToTask<TResult>(this IObservable<TResult> observable, CancellationToken cancellationToken)
		{
			return null;
		}

		public static Task<TResult> ToTask<TResult>(this IObservable<TResult> observable, CancellationToken cancellationToken, object state)
		{
			return null;
		}
	}
}
