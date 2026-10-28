using System;
using System.Collections.Generic;

namespace UniRx.Operators
{
	internal class RepeatSafeObservable<T> : OperatorObservableBase<T>
	{
		private class RepeatSafe : OperatorObserverBase<T, T>
		{
			private readonly RepeatSafeObservable<T> parent;

			private readonly object gate;

			private IEnumerator<IObservable<T>> e;

			private SerialDisposable subscription;

			private Action nextSelf;

			private bool isDisposed;

			private bool isRunNext;

			public RepeatSafe(RepeatSafeObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		public RepeatSafeObservable(IEnumerable<IObservable<T>> sources, bool isRequiredSubscribeOnCurrentThread)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
