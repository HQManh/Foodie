using System;

namespace UniRx.Operators
{
	internal class SwitchObservable<T> : OperatorObservableBase<T>
	{
		private class SwitchObserver : OperatorObserverBase<IObservable<T>, T>
		{
			private class Switch : IObserver<T>
			{
				private readonly SwitchObserver parent;

				private readonly ulong id;

				public Switch(SwitchObserver observer, ulong id)
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

			private readonly SwitchObservable<T> parent;

			private readonly object gate;

			private readonly SerialDisposable innerSubscription;

			private bool isStopped;

			private ulong latest;

			private bool hasLatest;

			public SwitchObserver(SwitchObservable<T> parent, IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			public override void OnNext(IObservable<T> value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}
		}

		private readonly IObservable<IObservable<T>> sources;

		public SwitchObservable(IObservable<IObservable<T>> sources)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
