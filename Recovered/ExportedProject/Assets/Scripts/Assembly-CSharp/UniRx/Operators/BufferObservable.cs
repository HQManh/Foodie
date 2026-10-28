using System;
using System.Collections.Generic;

namespace UniRx.Operators
{
	internal class BufferObservable<T> : OperatorObservableBase<IList<T>>
	{
		private class Buffer : OperatorObserverBase<T, IList<T>>
		{
			private readonly BufferObservable<T> parent;

			private List<T> list;

			public Buffer(BufferObservable<T> parent, IObserver<IList<T>> observer, IDisposable cancel)
				: base((IObserver<IList<T>>)null, (IDisposable)null)
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

		private class Buffer_ : OperatorObserverBase<T, IList<T>>
		{
			private readonly BufferObservable<T> parent;

			private Queue<List<T>> q;

			private int index;

			public Buffer_(BufferObservable<T> parent, IObserver<IList<T>> observer, IDisposable cancel)
				: base((IObserver<IList<T>>)null, (IDisposable)null)
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

		private class BufferT : OperatorObserverBase<T, IList<T>>
		{
			private class Buffer : IObserver<long>
			{
				private BufferT parent;

				public Buffer(BufferT parent)
				{
				}

				public void OnNext(long value)
				{
				}

				public void OnError(Exception error)
				{
				}

				public void OnCompleted()
				{
				}
			}

			private static readonly T[] EmptyArray;

			private readonly BufferObservable<T> parent;

			private readonly object gate;

			private List<T> list;

			public BufferT(BufferObservable<T> parent, IObserver<IList<T>> observer, IDisposable cancel)
				: base((IObserver<IList<T>>)null, (IDisposable)null)
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

		private class BufferTS : OperatorObserverBase<T, IList<T>>
		{
			private readonly BufferObservable<T> parent;

			private readonly object gate;

			private Queue<IList<T>> q;

			private TimeSpan totalTime;

			private TimeSpan nextShift;

			private TimeSpan nextSpan;

			private SerialDisposable timerD;

			public BufferTS(BufferObservable<T> parent, IObserver<IList<T>> observer, IDisposable cancel)
				: base((IObserver<IList<T>>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			private void CreateTimer()
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

		private class BufferTC : OperatorObserverBase<T, IList<T>>
		{
			private static readonly T[] EmptyArray;

			private readonly BufferObservable<T> parent;

			private readonly object gate;

			private List<T> list;

			private long timerId;

			private SerialDisposable timerD;

			public BufferTC(BufferObservable<T> parent, IObserver<IList<T>> observer, IDisposable cancel)
				: base((IObserver<IList<T>>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			private void CreateTimer()
			{
			}

			private void OnNextTick(long currentTimerId)
			{
			}

			private void OnNextRecursive(long currentTimerId, Action<TimeSpan> self)
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

		private readonly int count;

		private readonly int skip;

		private readonly TimeSpan timeSpan;

		private readonly TimeSpan timeShift;

		private readonly IScheduler scheduler;

		public BufferObservable(IObservable<T> source, int count, int skip)
			: base(false)
		{
		}

		public BufferObservable(IObservable<T> source, TimeSpan timeSpan, TimeSpan timeShift, IScheduler scheduler)
			: base(false)
		{
		}

		public BufferObservable(IObservable<T> source, TimeSpan timeSpan, int count, IScheduler scheduler)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<IList<T>> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class BufferObservable<TSource, TWindowBoundary> : OperatorObservableBase<IList<TSource>>
	{
		private class Buffer : OperatorObserverBase<TSource, IList<TSource>>
		{
			private class Buffer_ : IObserver<TWindowBoundary>
			{
				private readonly Buffer parent;

				public Buffer_(Buffer parent)
				{
				}

				public void OnNext(TWindowBoundary value)
				{
				}

				public void OnError(Exception error)
				{
				}

				public void OnCompleted()
				{
				}
			}

			private static readonly TSource[] EmptyArray;

			private readonly BufferObservable<TSource, TWindowBoundary> parent;

			private object gate;

			private List<TSource> list;

			public Buffer(BufferObservable<TSource, TWindowBoundary> parent, IObserver<IList<TSource>> observer, IDisposable cancel)
				: base((IObserver<IList<TSource>>)null, (IDisposable)null)
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
		}

		private readonly IObservable<TSource> source;

		private readonly IObservable<TWindowBoundary> windowBoundaries;

		public BufferObservable(IObservable<TSource> source, IObservable<TWindowBoundary> windowBoundaries)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<IList<TSource>> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
