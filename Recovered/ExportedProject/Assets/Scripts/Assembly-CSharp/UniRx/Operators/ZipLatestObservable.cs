using System;
using System.Collections.Generic;

namespace UniRx.Operators
{
	internal class ZipLatestObservable<TLeft, TRight, TResult> : OperatorObservableBase<TResult>
	{
		private class ZipLatest : OperatorObserverBase<TResult, TResult>
		{
			private class LeftObserver : IObserver<TLeft>
			{
				private readonly ZipLatest parent;

				public LeftObserver(ZipLatest parent)
				{
				}

				public void OnNext(TLeft value)
				{
				}

				public void OnError(Exception error)
				{
				}

				public void OnCompleted()
				{
				}
			}

			private class RightObserver : IObserver<TRight>
			{
				private readonly ZipLatest parent;

				public RightObserver(ZipLatest parent)
				{
				}

				public void OnNext(TRight value)
				{
				}

				public void OnError(Exception error)
				{
				}

				public void OnCompleted()
				{
				}
			}

			private readonly ZipLatestObservable<TLeft, TRight, TResult> parent;

			private readonly object gate;

			private TLeft leftValue;

			private bool leftStarted;

			private bool leftCompleted;

			private TRight rightValue;

			private bool rightStarted;

			private bool rightCompleted;

			public ZipLatest(ZipLatestObservable<TLeft, TRight, TResult> parent, IObserver<TResult> observer, IDisposable cancel)
				: base((IObserver<TResult>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			public void Publish()
			{
			}

			public override void OnNext(TResult value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}
		}

		private readonly IObservable<TLeft> left;

		private readonly IObservable<TRight> right;

		private readonly Func<TLeft, TRight, TResult> selector;

		public ZipLatestObservable(IObservable<TLeft> left, IObservable<TRight> right, Func<TLeft, TRight, TResult> selector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TResult> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class ZipLatestObservable<T> : OperatorObservableBase<IList<T>>
	{
		private class ZipLatest : OperatorObserverBase<IList<T>, IList<T>>
		{
			private class ZipLatestObserver : IObserver<T>
			{
				private readonly ZipLatest parent;

				private readonly int index;

				public ZipLatestObserver(ZipLatest parent, int index)
				{
				}

				public void OnNext(T value)
				{
				}

				public void OnError(Exception ex)
				{
				}

				public void OnCompleted()
				{
				}
			}

			private readonly ZipLatestObservable<T> parent;

			private readonly object gate;

			private int length;

			private T[] values;

			private bool[] isStarted;

			private bool[] isCompleted;

			public ZipLatest(ZipLatestObservable<T> parent, IObserver<IList<T>> observer, IDisposable cancel)
				: base((IObserver<IList<T>>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			private void Publish(int index)
			{
			}

			public override void OnNext(IList<T> value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}
		}

		private readonly IObservable<T>[] sources;

		public ZipLatestObservable(IObservable<T>[] sources)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<IList<T>> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class ZipLatestObservable<T1, T2, T3, TR> : OperatorObservableBase<TR>
	{
		private class ZipLatest : NthZipLatestObserverBase<TR>
		{
			private readonly ZipLatestObservable<T1, T2, T3, TR> parent;

			private readonly object gate;

			private ZipLatestObserver<T1> c1;

			private ZipLatestObserver<T2> c2;

			private ZipLatestObserver<T3> c3;

			public ZipLatest(int length, ZipLatestObservable<T1, T2, T3, TR> parent, IObserver<TR> observer, IDisposable cancel)
				: base(0, (IObserver<TR>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			public override TR GetResult()
			{
				return default;
			}

			public override void OnNext(TR value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}
		}

		private IObservable<T1> source1;

		private IObservable<T2> source2;

		private IObservable<T3> source3;

		private ZipLatestFunc<T1, T2, T3, TR> resultSelector;

		public ZipLatestObservable(IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, ZipLatestFunc<T1, T2, T3, TR> resultSelector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TR> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class ZipLatestObservable<T1, T2, T3, T4, TR> : OperatorObservableBase<TR>
	{
		private class ZipLatest : NthZipLatestObserverBase<TR>
		{
			private readonly ZipLatestObservable<T1, T2, T3, T4, TR> parent;

			private readonly object gate;

			private ZipLatestObserver<T1> c1;

			private ZipLatestObserver<T2> c2;

			private ZipLatestObserver<T3> c3;

			private ZipLatestObserver<T4> c4;

			public ZipLatest(int length, ZipLatestObservable<T1, T2, T3, T4, TR> parent, IObserver<TR> observer, IDisposable cancel)
				: base(0, (IObserver<TR>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			public override TR GetResult()
			{
				return default;
			}

			public override void OnNext(TR value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}
		}

		private IObservable<T1> source1;

		private IObservable<T2> source2;

		private IObservable<T3> source3;

		private IObservable<T4> source4;

		private ZipLatestFunc<T1, T2, T3, T4, TR> resultSelector;

		public ZipLatestObservable(IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, ZipLatestFunc<T1, T2, T3, T4, TR> resultSelector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TR> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class ZipLatestObservable<T1, T2, T3, T4, T5, TR> : OperatorObservableBase<TR>
	{
		private class ZipLatest : NthZipLatestObserverBase<TR>
		{
			private readonly ZipLatestObservable<T1, T2, T3, T4, T5, TR> parent;

			private readonly object gate;

			private ZipLatestObserver<T1> c1;

			private ZipLatestObserver<T2> c2;

			private ZipLatestObserver<T3> c3;

			private ZipLatestObserver<T4> c4;

			private ZipLatestObserver<T5> c5;

			public ZipLatest(int length, ZipLatestObservable<T1, T2, T3, T4, T5, TR> parent, IObserver<TR> observer, IDisposable cancel)
				: base(0, (IObserver<TR>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			public override TR GetResult()
			{
				return default;
			}

			public override void OnNext(TR value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}
		}

		private IObservable<T1> source1;

		private IObservable<T2> source2;

		private IObservable<T3> source3;

		private IObservable<T4> source4;

		private IObservable<T5> source5;

		private ZipLatestFunc<T1, T2, T3, T4, T5, TR> resultSelector;

		public ZipLatestObservable(IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, IObservable<T5> source5, ZipLatestFunc<T1, T2, T3, T4, T5, TR> resultSelector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TR> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class ZipLatestObservable<T1, T2, T3, T4, T5, T6, TR> : OperatorObservableBase<TR>
	{
		private class ZipLatest : NthZipLatestObserverBase<TR>
		{
			private readonly ZipLatestObservable<T1, T2, T3, T4, T5, T6, TR> parent;

			private readonly object gate;

			private ZipLatestObserver<T1> c1;

			private ZipLatestObserver<T2> c2;

			private ZipLatestObserver<T3> c3;

			private ZipLatestObserver<T4> c4;

			private ZipLatestObserver<T5> c5;

			private ZipLatestObserver<T6> c6;

			public ZipLatest(int length, ZipLatestObservable<T1, T2, T3, T4, T5, T6, TR> parent, IObserver<TR> observer, IDisposable cancel)
				: base(0, (IObserver<TR>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			public override TR GetResult()
			{
				return default;
			}

			public override void OnNext(TR value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}
		}

		private IObservable<T1> source1;

		private IObservable<T2> source2;

		private IObservable<T3> source3;

		private IObservable<T4> source4;

		private IObservable<T5> source5;

		private IObservable<T6> source6;

		private ZipLatestFunc<T1, T2, T3, T4, T5, T6, TR> resultSelector;

		public ZipLatestObservable(IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, IObservable<T5> source5, IObservable<T6> source6, ZipLatestFunc<T1, T2, T3, T4, T5, T6, TR> resultSelector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TR> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class ZipLatestObservable<T1, T2, T3, T4, T5, T6, T7, TR> : OperatorObservableBase<TR>
	{
		private class ZipLatest : NthZipLatestObserverBase<TR>
		{
			private readonly ZipLatestObservable<T1, T2, T3, T4, T5, T6, T7, TR> parent;

			private readonly object gate;

			private ZipLatestObserver<T1> c1;

			private ZipLatestObserver<T2> c2;

			private ZipLatestObserver<T3> c3;

			private ZipLatestObserver<T4> c4;

			private ZipLatestObserver<T5> c5;

			private ZipLatestObserver<T6> c6;

			private ZipLatestObserver<T7> c7;

			public ZipLatest(int length, ZipLatestObservable<T1, T2, T3, T4, T5, T6, T7, TR> parent, IObserver<TR> observer, IDisposable cancel)
				: base(0, (IObserver<TR>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			public override TR GetResult()
			{
				return default;
			}

			public override void OnNext(TR value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}
		}

		private IObservable<T1> source1;

		private IObservable<T2> source2;

		private IObservable<T3> source3;

		private IObservable<T4> source4;

		private IObservable<T5> source5;

		private IObservable<T6> source6;

		private IObservable<T7> source7;

		private ZipLatestFunc<T1, T2, T3, T4, T5, T6, T7, TR> resultSelector;

		public ZipLatestObservable(IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, IObservable<T5> source5, IObservable<T6> source6, IObservable<T7> source7, ZipLatestFunc<T1, T2, T3, T4, T5, T6, T7, TR> resultSelector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TR> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
