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
				// TODO(unrecovered): generic variant not recovered in this pass (non-generic FromEventObservable was recovered).
			}

			public bool Register()
			{
				// TODO(unrecovered): generic variant not recovered in this pass.
				return false;
			}

			private void OnNext()
			{
				// TODO(unrecovered): generic variant not recovered in this pass.
			}

			public void Dispose()
			{
				// TODO(unrecovered): generic variant not recovered in this pass.
			}
		}

		private readonly Func<Action, TDelegate> conversion;

		private readonly Action<TDelegate> addHandler;

		private readonly Action<TDelegate> removeHandler;

		public FromEventObservable(Func<Action, TDelegate> conversion, Action<TDelegate> addHandler, Action<TDelegate> removeHandler)
			: base(false)
		{
			// TODO(unrecovered): generic variant not recovered in this pass.
		}

		protected override IDisposable SubscribeCore(IObserver<Unit> observer, IDisposable cancel)
		{
			// TODO(unrecovered): generic variant not recovered in this pass.
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
				// TODO(unrecovered): generic variant not recovered in this pass.
			}

			public bool Register()
			{
				// TODO(unrecovered): generic variant not recovered in this pass.
				return false;
			}

			private void OnNext(TEventArgs args)
			{
				// TODO(unrecovered): generic variant not recovered in this pass.
			}

			public void Dispose()
			{
				// TODO(unrecovered): generic variant not recovered in this pass.
			}
		}

		private readonly Func<Action<TEventArgs>, TDelegate> conversion;

		private readonly Action<TDelegate> addHandler;

		private readonly Action<TDelegate> removeHandler;

		public FromEventObservable(Func<Action<TEventArgs>, TDelegate> conversion, Action<TDelegate> addHandler, Action<TDelegate> removeHandler)
			: base(false)
		{
			// TODO(unrecovered): generic variant not recovered in this pass.
		}

		protected override IDisposable SubscribeCore(IObserver<TEventArgs> observer, IDisposable cancel)
		{
			// TODO(unrecovered): generic variant not recovered in this pass.
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
				this.parent = parent;
				this.observer = observer;
				handler = new Action(OnNext);
			}

			public bool Register()
			{
				if (parent == null)
				{
					throw new NullReferenceException();
				}
				parent.addHandler(handler);
				return true;
			}

			private void OnNext()
			{
				observer.OnNext(Unit.Default);
			}

			public void Dispose()
			{
				if (handler == null)
				{
					return;
				}
				if (parent == null)
				{
					throw new NullReferenceException();
				}
				parent.removeHandler(handler);
				handler = null;
			}
		}

		private readonly Action<Action> addHandler;

		private readonly Action<Action> removeHandler;

		public FromEventObservable(Action<Action> addHandler, Action<Action> removeHandler)
			: base(false)
		{
			this.addHandler = addHandler;
			this.removeHandler = removeHandler;
		}

		protected override IDisposable SubscribeCore(IObserver<Unit> observer, IDisposable cancel)
		{
			FromEvent fromEvent = new FromEvent(this, observer);
			if (!fromEvent.Register())
			{
				return Disposable.Empty;
			}
			return fromEvent;
		}
	}
}
