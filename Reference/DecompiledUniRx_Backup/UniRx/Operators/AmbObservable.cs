using System;

namespace UniRx.Operators
{
	internal class AmbObservable<T> : OperatorObservableBase<T>
	{
		private class AmbOuterObserver : OperatorObserverBase<T, T>
		{
			private enum AmbState
			{
				Left = 0,
				Right = 1,
				Neither = 2
			}

			private class Amb : IObserver<T>
			{
				public IObserver<T> targetObserver;

				public IDisposable targetDisposable;

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

			private class AmbDecisionObserver : IObserver<T>
			{
				private readonly AmbOuterObserver parent;

				private readonly AmbState me;

				private readonly IDisposable otherSubscription;

				private readonly Amb self;

				public AmbDecisionObserver(AmbOuterObserver parent, AmbState me, IDisposable otherSubscription, Amb self)
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

			private readonly AmbObservable<T> parent;

			private readonly object gate;

			private SingleAssignmentDisposable leftSubscription;

			private SingleAssignmentDisposable rightSubscription;

			private AmbState choice;

			public AmbOuterObserver(AmbObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		private readonly IObservable<T> second;

		public AmbObservable(IObservable<T> source, IObservable<T> second)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
