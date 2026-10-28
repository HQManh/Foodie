using System;

namespace UniRx.Operators
{
	internal class FromEventPatternObservable<TDelegate, TEventArgs> : OperatorObservableBase<EventPattern<TEventArgs>> where TEventArgs : EventArgs
	{
		private class FromEventPattern : IDisposable
		{
			private readonly FromEventPatternObservable<TDelegate, TEventArgs> parent;

			private readonly IObserver<EventPattern<TEventArgs>> observer;

			private TDelegate handler;

			public FromEventPattern(FromEventPatternObservable<TDelegate, TEventArgs> parent, IObserver<EventPattern<TEventArgs>> observer)
			{
			}

			public bool Register()
			{
				return false;
			}

			private void OnNext(object sender, TEventArgs eventArgs)
			{
			}

			public void Dispose()
			{
			}
		}

		private readonly Func<EventHandler<TEventArgs>, TDelegate> conversion;

		private readonly Action<TDelegate> addHandler;

		private readonly Action<TDelegate> removeHandler;

		public FromEventPatternObservable(Func<EventHandler<TEventArgs>, TDelegate> conversion, Action<TDelegate> addHandler, Action<TDelegate> removeHandler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<EventPattern<TEventArgs>> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
