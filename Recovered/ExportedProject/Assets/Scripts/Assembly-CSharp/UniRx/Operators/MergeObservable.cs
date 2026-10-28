using System;
using System.Collections.Generic;

namespace UniRx.Operators
{
	internal class MergeObservable<T> : OperatorObservableBase<T>
	{
		private class MergeOuterObserver : OperatorObserverBase<IObservable<T>, T>
		{
			private class Merge : OperatorObserverBase<T, T>
			{
				private readonly MergeOuterObserver parent;

				private readonly IDisposable cancel;

				public Merge(MergeOuterObserver parent, IDisposable cancel)
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

			private readonly MergeObservable<T> parent;

			private CompositeDisposable collectionDisposable;

			private SingleAssignmentDisposable sourceDisposable;

			private object gate;

			private bool isStopped;

			public MergeOuterObserver(MergeObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		private class MergeConcurrentObserver : OperatorObserverBase<IObservable<T>, T>
		{
			private class Merge : OperatorObserverBase<T, T>
			{
				private readonly MergeConcurrentObserver parent;

				private readonly IDisposable cancel;

				public Merge(MergeConcurrentObserver parent, IDisposable cancel)
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

			private readonly MergeObservable<T> parent;

			private CompositeDisposable collectionDisposable;

			private SingleAssignmentDisposable sourceDisposable;

			private object gate;

			private bool isStopped;

			private Queue<IObservable<T>> q;

			private int activeCount;

			public MergeConcurrentObserver(MergeObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

			private void Subscribe(IObservable<T> innerSource)
			{
			}
		}

		private readonly IObservable<IObservable<T>> sources;

		private readonly int maxConcurrent;

		public MergeObservable(IObservable<IObservable<T>> sources, bool isRequiredSubscribeOnCurrentThread)
			: base(false)
		{
		}

		public MergeObservable(IObservable<IObservable<T>> sources, int maxConcurrent, bool isRequiredSubscribeOnCurrentThread)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
