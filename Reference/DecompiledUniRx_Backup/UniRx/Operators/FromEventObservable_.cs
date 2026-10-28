using System;

namespace UniRx.Operators
{
	internal class FromEventObservable_<T> : OperatorObservableBase<T>
	{
		private class FromEvent : IDisposable
		{
			private readonly FromEventObservable_<T> parent;

			private readonly IObserver<T> observer;

			private Action<T> handler;

			public FromEvent(FromEventObservable_<T> parent, IObserver<T> observer)
			{
			}

			public bool Register()
			{
				return false;
			}

			private void OnNext(T value)
			{
			}

			public void Dispose()
			{
			}
		}

		private readonly Action<Action<T>> addHandler;

		private readonly Action<Action<T>> removeHandler;

		public FromEventObservable_(Action<Action<T>> addHandler, Action<Action<T>> removeHandler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
