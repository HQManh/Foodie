using System;
using System.Collections.Generic;

namespace UniRx.Operators
{
	internal class CatchObservable<T, TException> : OperatorObservableBase<T> where TException : Exception
	{
		private class Catch : OperatorObserverBase<T, T>
		{
			private readonly CatchObservable<T, TException> parent;

			private SingleAssignmentDisposable sourceSubscription;

			private SingleAssignmentDisposable exceptionSubscription;

			public Catch(CatchObservable<T, TException> parent, IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
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

		private readonly IObservable<T> source;

		private readonly Func<TException, IObservable<T>> errorHandler;

		public CatchObservable(IObservable<T> source, Func<TException, IObservable<T>> errorHandler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class CatchObservable<T> : OperatorObservableBase<T>
	{
		private class Catch : OperatorObserverBase<T, T>
		{
			private readonly CatchObservable<T> parent;

			private readonly object gate;

			private bool isDisposed;

			private IEnumerator<IObservable<T>> e;

			private SerialDisposable subscription;

			private Exception lastException;

			private Action nextSelf;

			public Catch(CatchObservable<T> parent, IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			private void RecursiveRun(Action self)
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

		private readonly IEnumerable<IObservable<T>> sources;

		public CatchObservable(IEnumerable<IObservable<T>> sources)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
