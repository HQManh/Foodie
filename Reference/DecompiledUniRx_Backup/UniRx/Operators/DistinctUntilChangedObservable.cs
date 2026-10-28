using System;
using System.Collections.Generic;

namespace UniRx.Operators
{
	internal class DistinctUntilChangedObservable<T> : OperatorObservableBase<T>
	{
		private class DistinctUntilChanged : OperatorObserverBase<T, T>
		{
			private readonly DistinctUntilChangedObservable<T> parent;

			private bool isFirst;

			private T prevKey;

			public DistinctUntilChanged(DistinctUntilChangedObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		private readonly IObservable<T> source;

		private readonly IEqualityComparer<T> comparer;

		public DistinctUntilChangedObservable(IObservable<T> source, IEqualityComparer<T> comparer)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class DistinctUntilChangedObservable<T, TKey> : OperatorObservableBase<T>
	{
		private class DistinctUntilChanged : OperatorObserverBase<T, T>
		{
			private readonly DistinctUntilChangedObservable<T, TKey> parent;

			private bool isFirst;

			private TKey prevKey;

			public DistinctUntilChanged(DistinctUntilChangedObservable<T, TKey> parent, IObserver<T> observer, IDisposable cancel)
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

		private readonly IObservable<T> source;

		private readonly IEqualityComparer<TKey> comparer;

		private readonly Func<T, TKey> keySelector;

		public DistinctUntilChangedObservable(IObservable<T> source, Func<T, TKey> keySelector, IEqualityComparer<TKey> comparer)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
