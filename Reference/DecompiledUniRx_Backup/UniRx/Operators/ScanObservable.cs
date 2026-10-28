using System;

namespace UniRx.Operators
{
	internal class ScanObservable<TSource> : OperatorObservableBase<TSource>
	{
		private class Scan : OperatorObserverBase<TSource, TSource>
		{
			private readonly ScanObservable<TSource> parent;

			private TSource accumulation;

			private bool isFirst;

			public Scan(ScanObservable<TSource> parent, IObserver<TSource> observer, IDisposable cancel)
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

		public ScanObservable(IObservable<TSource> source, Func<TSource, TSource, TSource> accumulator)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TSource> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class ScanObservable<TSource, TAccumulate> : OperatorObservableBase<TAccumulate>
	{
		private class Scan : OperatorObserverBase<TSource, TAccumulate>
		{
			private readonly ScanObservable<TSource, TAccumulate> parent;

			private TAccumulate accumulation;

			private bool isFirst;

			public Scan(ScanObservable<TSource, TAccumulate> parent, IObserver<TAccumulate> observer, IDisposable cancel)
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

		public ScanObservable(IObservable<TSource> source, TAccumulate seed, Func<TAccumulate, TSource, TAccumulate> accumulator)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TAccumulate> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
