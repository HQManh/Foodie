using System;
using System.Collections;
using System.Threading;

namespace UniRx.Operators
{
	internal class FromMicroCoroutineObservable<T> : OperatorObservableBase<T>
	{
		private class FromMicroCoroutine : OperatorObserverBase<T, T>
		{
			public FromMicroCoroutine(IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
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

		private readonly Func<IObserver<T>, CancellationToken, IEnumerator> coroutine;

		private readonly FrameCountType frameCountType;

		public FromMicroCoroutineObservable(Func<IObserver<T>, CancellationToken, IEnumerator> coroutine, FrameCountType frameCountType)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
