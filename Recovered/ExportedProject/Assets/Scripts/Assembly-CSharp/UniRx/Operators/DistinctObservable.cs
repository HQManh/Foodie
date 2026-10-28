using System;
using System.Collections.Generic;

namespace UniRx.Operators
{
	internal class DistinctObservable<T> : OperatorObservableBase<T>
	{
		private class Distinct : OperatorObserverBase<T, T>
		{
			private readonly HashSet<T> hashSet;

			public Distinct(DistinctObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		public DistinctObservable(IObservable<T> source, IEqualityComparer<T> comparer)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class DistinctObservable<T, TKey> : OperatorObservableBase<T>
	{
		private class Distinct : OperatorObserverBase<T, T>
		{
			private readonly DistinctObservable<T, TKey> parent;

			private readonly HashSet<TKey> hashSet;

			public Distinct(DistinctObservable<T, TKey> parent, IObserver<T> observer, IDisposable cancel)
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

		public DistinctObservable(IObservable<T> source, Func<T, TKey> keySelector, IEqualityComparer<TKey> comparer)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
