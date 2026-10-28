using System;

namespace UniRx.Operators
{
	internal class GroupedObservable<TKey, TElement> : IGroupedObservable<TKey, TElement>, IObservable<TElement>
	{
		private readonly TKey key;

		private readonly IObservable<TElement> subject;

		private readonly RefCountDisposable refCount;

		public TKey Key => default;

		public GroupedObservable(TKey key, ISubject<TElement> subject, RefCountDisposable refCount)
		{
		}

		public IDisposable Subscribe(IObserver<TElement> observer)
		{
			return null;
		}
	}
}
