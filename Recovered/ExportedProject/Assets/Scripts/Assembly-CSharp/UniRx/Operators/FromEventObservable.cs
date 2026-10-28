using System;

namespace UniRx.Operators
{
	internal class FromEventObservable<TDelegate> : OperatorObservableBase<Unit>
	{
		private class FromEvent : IDisposable
		{
			private readonly FromEventObservable<TDelegate> parent;

			private readonly IObserver<Unit> observer;

			private TDelegate handler;

			public FromEvent(FromEventObservable<TDelegate> parent, IObserver<Unit> observer)
			{
			}

			public bool Register()
			{
				return false;
			}

			private void OnNext()
			{
			}

			public void Dispose()
			{
			}
		}

		private readonly Func<Action, TDelegate> conversion;

		private readonly Action<TDelegate> addHandler;

		private readonly Action<TDelegate> removeHandler;

		public FromEventObservable(Func<Action, TDelegate> conversion, Action<TDelegate> addHandler, Action<TDelegate> removeHandler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<Unit> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class FromEventObservable<TDelegate, TEventArgs> : OperatorObservableBase<TEventArgs>
	{
		private class FromEvent : IDisposable
		{
			private readonly FromEventObservable<TDelegate, TEventArgs> parent;

			private readonly IObserver<TEventArgs> observer;

			private TDelegate handler;

			public FromEvent(FromEventObservable<TDelegate, TEventArgs> parent, IObserver<TEventArgs> observer)
			{
			}

			public bool Register()
			{
				return false;
			}

			private void OnNext(TEventArgs args)
			{
			}

			public void Dispose()
			{
			}
		}

		private readonly Func<Action<TEventArgs>, TDelegate> conversion;

		private readonly Action<TDelegate> addHandler;

		private readonly Action<TDelegate> removeHandler;

		public FromEventObservable(Func<Action<TEventArgs>, TDelegate> conversion, Action<TDelegate> addHandler, Action<TDelegate> removeHandler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TEventArgs> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class FromEventObservable : OperatorObservableBase<Unit>
	{
		private class FromEvent : IDisposable
		{
			private readonly FromEventObservable parent;

			private readonly IObserver<Unit> observer;

			private Action handler;

			public FromEvent(FromEventObservable parent, IObserver<Unit> observer)
			{
			}

			public bool Register()
			{
				return false;
			}

			private void OnNext()
			{
			}

			public void Dispose()
			{
			}
		}

		private readonly Action<Action> addHandler;

		private readonly Action<Action> removeHandler;

		public FromEventObservable(Action<Action> addHandler, Action<Action> removeHandler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<Unit> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
