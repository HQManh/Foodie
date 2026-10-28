using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;

namespace UniRx
{
	public class ObservableYieldInstruction<T> : IEnumerator<T>, IEnumerator, IDisposable, ICustomYieldInstructionErrorHandler
	{
		private class ToYieldInstruction : IObserver<T>
		{
			private readonly ObservableYieldInstruction<T> parent;

			public ToYieldInstruction(ObservableYieldInstruction<T> parent)
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

		private readonly IDisposable subscription;

		private readonly CancellationToken cancel;

		private bool reThrowOnError;

		private T current;

		private T result;

		private bool moveNext;

		private bool hasResult;

		private Exception error;

		public bool HasError => false;

		public bool HasResult => false;

		public bool IsCanceled => false;

		public bool IsDone => false;

		public T Result => default;

		T IEnumerator<T>.Current => default;

		object IEnumerator.Current => null;

		public Exception Error => null;

		bool ICustomYieldInstructionErrorHandler.IsReThrowOnError => false;

		public ObservableYieldInstruction(IObservable<T> source, bool reThrowOnError, CancellationToken cancel)
		{
		}

		bool IEnumerator.MoveNext()
		{
			return false;
		}

		void ICustomYieldInstructionErrorHandler.ForceDisableRethrowOnError()
		{
		}

		void ICustomYieldInstructionErrorHandler.ForceEnableRethrowOnError()
		{
		}

		public void Dispose()
		{
		}

		void IEnumerator.Reset()
		{
		}
	}
}
