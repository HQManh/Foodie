using System;

namespace UniRx.Operators
{
	internal class AggregateObservable<TSource> : OperatorObservableBase<TSource>
	{
		private class Aggregate : OperatorObserverBase<TSource, TSource>
		{
			private readonly AggregateObservable<TSource> parent;

			private TSource accumulation;

			private bool seenValue;

			public Aggregate(AggregateObservable<TSource> parent, IObserver<TSource> observer, IDisposable cancel)
				: base((IObserver<TSource>)null, (IDisposable)null)
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

		private readonly Func<TSource, TSource, TSource> accumulator;

		public AggregateObservable(IObservable<TSource> source, Func<TSource, TSource, TSource> accumulator)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TSource> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class AggregateObservable<TSource, TAccumulate> : OperatorObservableBase<TAccumulate>
	{
		private class Aggregate : OperatorObserverBase<TSource, TAccumulate>
		{
			private readonly AggregateObservable<TSource, TAccumulate> parent;

			private TAccumulate accumulation;

			public Aggregate(AggregateObservable<TSource, TAccumulate> parent, IObserver<TAccumulate> observer, IDisposable cancel)
				: base((IObserver<TAccumulate>)null, (IDisposable)null)
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

		private readonly TAccumulate seed;

		private readonly Func<TAccumulate, TSource, TAccumulate> accumulator;

		public AggregateObservable(IObservable<TSource> source, TAccumulate seed, Func<TAccumulate, TSource, TAccumulate> accumulator)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TAccumulate> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class AggregateObservable<TSource, TAccumulate, TResult> : OperatorObservableBase<TResult>
	{
		private class Aggregate : OperatorObserverBase<TSource, TResult>
		{
			private readonly AggregateObservable<TSource, TAccumulate, TResult> parent;

			private TAccumulate accumulation;

			public Aggregate(AggregateObservable<TSource, TAccumulate, TResult> parent, IObserver<TResult> observer, IDisposable cancel)
				: base((IObserver<TResult>)null, (IDisposable)null)
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

		private readonly TAccumulate seed;

		private readonly Func<TAccumulate, TSource, TAccumulate> accumulator;

		private readonly Func<TAccumulate, TResult> resultSelector;

		public AggregateObservable(IObservable<TSource> source, TAccumulate seed, Func<TAccumulate, TSource, TAccumulate> accumulator, Func<TAccumulate, TResult> resultSelector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TResult> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
