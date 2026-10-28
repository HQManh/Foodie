using System;
using System.Collections.Generic;

namespace UniRx.Operators
{
	internal class GroupByObservable<TSource, TKey, TElement> : OperatorObservableBase<IGroupedObservable<TKey, TElement>>
	{
		private class GroupBy : OperatorObserverBase<TSource, IGroupedObservable<TKey, TElement>>
		{
			private readonly GroupByObservable<TSource, TKey, TElement> parent;

			private readonly Dictionary<TKey, ISubject<TElement>> map;

			private ISubject<TElement> nullKeySubject;

			private CompositeDisposable groupDisposable;

			private RefCountDisposable refCountDisposable;

			public GroupBy(GroupByObservable<TSource, TKey, TElement> parent, IObserver<IGroupedObservable<TKey, TElement>> observer, IDisposable cancel)
				: base((IObserver<IGroupedObservable<TKey, TElement>>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			public override void OnNext(TSource value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}

			private void Error(Exception exception)
			{
			}
		}

		private readonly IObservable<TSource> source;

		private readonly Func<TSource, TKey> keySelector;

		private readonly Func<TSource, TElement> elementSelector;

		private readonly int? capacity;

		private readonly IEqualityComparer<TKey> comparer;

		public GroupByObservable(IObservable<TSource> source, Func<TSource, TKey> keySelector, Func<TSource, TElement> elementSelector, int? capacity, IEqualityComparer<TKey> comparer)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<IGroupedObservable<TKey, TElement>> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
