using System;
using System.Collections.Generic;

namespace UniRx.Operators
{
	internal class ToListObservable<TSource> : OperatorObservableBase<IList<TSource>>
	{
		private class ToList : OperatorObserverBase<TSource, IList<TSource>>
		{
			private readonly List<TSource> list;

			public ToList(IObserver<IList<TSource>> observer, IDisposable cancel)
				: base((IObserver<IList<TSource>>)null, (IDisposable)null)
			{
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
		}

		private readonly IObservable<TSource> source;

		public ToListObservable(IObservable<TSource> source)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<IList<TSource>> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
