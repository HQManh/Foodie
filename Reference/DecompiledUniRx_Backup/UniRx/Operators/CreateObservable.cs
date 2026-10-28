using System;

namespace UniRx.Operators
{
	internal class CreateObservable<T> : OperatorObservableBase<T>
	{
		private class Create : OperatorObserverBase<T, T>
		{
			public Create(IObserver<T> observer, IDisposable cancel)
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

		private readonly Func<IObserver<T>, IDisposable> subscribe;

		public CreateObservable(Func<IObserver<T>, IDisposable> subscribe)
			: base(false)
		{
		}

		public CreateObservable(Func<IObserver<T>, IDisposable> subscribe, bool isRequiredSubscribeOnCurrentThread)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class CreateObservable<T, TState> : OperatorObservableBase<T>
	{
		private class Create : OperatorObserverBase<T, T>
		{
			public Create(IObserver<T> observer, IDisposable cancel)
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

		private readonly TState state;

		private readonly Func<TState, IObserver<T>, IDisposable> subscribe;

		public CreateObservable(TState state, Func<TState, IObserver<T>, IDisposable> subscribe)
			: base(false)
		{
		}

		public CreateObservable(TState state, Func<TState, IObserver<T>, IDisposable> subscribe, bool isRequiredSubscribeOnCurrentThread)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
