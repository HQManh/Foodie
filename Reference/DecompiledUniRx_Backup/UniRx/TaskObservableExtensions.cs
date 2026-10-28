using System;
using System.Threading;
using System.Threading.Tasks;

namespace UniRx
{
	public static class TaskObservableExtensions
	{
		public static IObservable<Unit> ToObservable(this Task task)
		{
			if (task == null)
			{
				throw new ArgumentNullException("task" /* literal recovered by guess */);
			}
			return ToObservableImpl(task, null);
		}

		public static IObservable<Unit> ToObservable(this Task task, IScheduler scheduler)
		{
			if (task == null)
			{
				throw new ArgumentNullException("task" /* literal recovered by guess */);
			}
			if (scheduler == null)
			{
				throw new ArgumentNullException("scheduler" /* literal recovered by guess */);
			}
			return ToObservableImpl(task, scheduler);
		}

		private static IObservable<Unit> ToObservableImpl(Task task, IScheduler scheduler)
		{
			if (task == null)
			{
				throw new NullReferenceException();
			}
			if (!task.IsCompleted)
			{
				return ToObservableSlow(task, scheduler);
			}
			if (scheduler == null)
			{
				scheduler = Scheduler.DefaultSchedulers.TailRecursion;
			}
			switch (task.Status)
			{
				case TaskStatus.RanToCompletion:
					return Observable.Return(Unit.Default, scheduler);
				case TaskStatus.Canceled:
					return Observable.Throw<Unit>(new TaskCanceledException(task), scheduler);
				case TaskStatus.Faulted:
					if (task.Exception == null)
					{
						throw new NullReferenceException();
					}
					return Observable.Throw<Unit>(task.Exception.InnerException, scheduler);
				default:
					// Unreachable: IsCompleted guarantees one of the three terminal statuses above.
					return null;
			}
		}

		private static IObservable<Unit> ToObservableSlow(Task task, IScheduler scheduler)
		{
			AsyncSubject<Unit> subject = new AsyncSubject<Unit>();
			task.ContinueWith(_ => ToObservableDone(task, subject), GetTaskContinuationOptions(scheduler));
			// TODO(unrecovered): ToObservableResult<TResult> has no pseudocode in batch030 (see its body below).
			return ToObservableResult(subject, scheduler);
		}

		private static void ToObservableDone(Task task, IObserver<Unit> subject)
		{
			if (task == null)
			{
				throw new NullReferenceException();
			}
			switch (task.Status)
			{
				case TaskStatus.Faulted:
					if (task.Exception == null || subject == null)
					{
						throw new NullReferenceException();
					}
					subject.OnError(task.Exception.InnerException);
					return;
				case TaskStatus.RanToCompletion:
					if (subject == null)
					{
						throw new NullReferenceException();
					}
					subject.OnNext(Unit.Default);
					subject.OnCompleted();
					return;
				case TaskStatus.Canceled:
					subject.OnError(new TaskCanceledException(task));
					return;
				default:
					return;
			}
		}

		public static IObservable<TResult> ToObservable<TResult>(this Task<TResult> task)
		{
			// TODO(unrecovered): generic Task<TResult> overload has no pseudocode in batch030.
			throw new NotSupportedException("TODO(unrecovered): ToObservable<TResult> not recovered");
		}

		public static IObservable<TResult> ToObservable<TResult>(this Task<TResult> task, IScheduler scheduler)
		{
			// TODO(unrecovered): generic Task<TResult> overload has no pseudocode in batch030.
			throw new NotSupportedException("TODO(unrecovered): ToObservable<TResult> not recovered");
		}

		private static IObservable<TResult> ToObservableImpl<TResult>(Task<TResult> task, IScheduler scheduler)
		{
			// TODO(unrecovered): generic ToObservableImpl<TResult> has no pseudocode in batch030.
			throw new NotSupportedException("TODO(unrecovered): ToObservableImpl<TResult> not recovered");
		}

		private static IObservable<TResult> ToObservableSlow<TResult>(Task<TResult> task, IScheduler scheduler)
		{
			// TODO(unrecovered): generic ToObservableSlow<TResult> has no pseudocode in batch030.
			throw new NotSupportedException("TODO(unrecovered): ToObservableSlow<TResult> not recovered");
		}

		private static void ToObservableDone<TResult>(Task<TResult> task, IObserver<TResult> subject)
		{
			// TODO(unrecovered): generic ToObservableDone<TResult> has no pseudocode in batch030.
			throw new NotSupportedException("TODO(unrecovered): ToObservableDone<TResult> not recovered");
		}

		private static TaskContinuationOptions GetTaskContinuationOptions(IScheduler scheduler)
		{
			return scheduler != null ? TaskContinuationOptions.ExecuteSynchronously : TaskContinuationOptions.None;
		}

		private static IObservable<TResult> ToObservableResult<TResult>(AsyncSubject<TResult> subject, IScheduler scheduler)
		{
			// TODO(unrecovered): ToObservableResult<TResult> has no pseudocode in batch030 (only its call site FUN_04d8601c is seen).
			throw new NotSupportedException("TODO(unrecovered): ToObservableResult<TResult> not recovered");
		}

		public static Task<TResult> ToTask<TResult>(this IObservable<TResult> observable)
		{
			// TODO(unrecovered): ToTask overloads have no pseudocode in batch030.
			throw new NotSupportedException("TODO(unrecovered): ToTask not recovered");
		}

		public static Task<TResult> ToTask<TResult>(this IObservable<TResult> observable, object state)
		{
			// TODO(unrecovered): ToTask overloads have no pseudocode in batch030.
			throw new NotSupportedException("TODO(unrecovered): ToTask not recovered");
		}

		public static Task<TResult> ToTask<TResult>(this IObservable<TResult> observable, CancellationToken cancellationToken)
		{
			// TODO(unrecovered): ToTask overloads have no pseudocode in batch030.
			throw new NotSupportedException("TODO(unrecovered): ToTask not recovered");
		}

		public static Task<TResult> ToTask<TResult>(this IObservable<TResult> observable, CancellationToken cancellationToken, object state)
		{
			// TODO(unrecovered): ToTask overloads have no pseudocode in batch030.
			throw new NotSupportedException("TODO(unrecovered): ToTask not recovered");
		}
	}
}
