using System;
using System.Collections.Generic;

namespace UniRx.Operators
{
	internal class CombineLatestObservable<TLeft, TRight, TResult> : OperatorObservableBase<TResult>
	{
		private class CombineLatest : OperatorObserverBase<TResult, TResult>
		{
			private class LeftObserver : IObserver<TLeft>
			{
				private readonly CombineLatest parent;

				public LeftObserver(CombineLatest parent)
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
				private readonly CombineLatest parent;

				public RightObserver(CombineLatest parent)
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

			private readonly CombineLatestObservable<TLeft, TRight, TResult> parent;

			private readonly object gate;

			private TLeft leftValue;

			private bool leftStarted;

			private bool leftCompleted;

			private TRight rightValue;

			private bool rightStarted;

			private bool rightCompleted;

			public CombineLatest(CombineLatestObservable<TLeft, TRight, TResult> parent, IObserver<TResult> observer, IDisposable cancel)
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

		public CombineLatestObservable(IObservable<TLeft> left, IObservable<TRight> right, Func<TLeft, TRight, TResult> selector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TResult> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class CombineLatestObservable<T> : OperatorObservableBase<IList<T>>
	{
		private class CombineLatest : OperatorObserverBase<IList<T>, IList<T>>
		{
			private class CombineLatestObserver : IObserver<T>
			{
				private readonly CombineLatest parent;

				private readonly int index;

				public CombineLatestObserver(CombineLatest parent, int index)
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

			private readonly CombineLatestObservable<T> parent;

			private readonly object gate;

			private int length;

			private T[] values;

			private bool[] isStarted;

			private bool[] isCompleted;

			private bool isAllValueStarted;

			public CombineLatest(CombineLatestObservable<T> parent, IObserver<IList<T>> observer, IDisposable cancel)
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

		public CombineLatestObservable(IObservable<T>[] sources)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<IList<T>> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class CombineLatestObservable<T1, T2, T3, TR> : OperatorObservableBase<TR>
	{
		private class CombineLatest : NthCombineLatestObserverBase<TR>
		{
			private readonly CombineLatestObservable<T1, T2, T3, TR> parent;

			private readonly object gate;

			private CombineLatestObserver<T1> c1;

			private CombineLatestObserver<T2> c2;

			private CombineLatestObserver<T3> c3;

			public CombineLatest(int length, CombineLatestObservable<T1, T2, T3, TR> parent, IObserver<TR> observer, IDisposable cancel)
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

		private CombineLatestFunc<T1, T2, T3, TR> resultSelector;

		public CombineLatestObservable(IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, CombineLatestFunc<T1, T2, T3, TR> resultSelector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TR> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class CombineLatestObservable<T1, T2, T3, T4, TR> : OperatorObservableBase<TR>
	{
		private class CombineLatest : NthCombineLatestObserverBase<TR>
		{
			private readonly CombineLatestObservable<T1, T2, T3, T4, TR> parent;

			private readonly object gate;

			private CombineLatestObserver<T1> c1;

			private CombineLatestObserver<T2> c2;

			private CombineLatestObserver<T3> c3;

			private CombineLatestObserver<T4> c4;

			public CombineLatest(int length, CombineLatestObservable<T1, T2, T3, T4, TR> parent, IObserver<TR> observer, IDisposable cancel)
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

		private CombineLatestFunc<T1, T2, T3, T4, TR> resultSelector;

		public CombineLatestObservable(IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, CombineLatestFunc<T1, T2, T3, T4, TR> resultSelector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TR> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class CombineLatestObservable<T1, T2, T3, T4, T5, TR> : OperatorObservableBase<TR>
	{
		private class CombineLatest : NthCombineLatestObserverBase<TR>
		{
			private readonly CombineLatestObservable<T1, T2, T3, T4, T5, TR> parent;

			private readonly object gate;

			private CombineLatestObserver<T1> c1;

			private CombineLatestObserver<T2> c2;

			private CombineLatestObserver<T3> c3;

			private CombineLatestObserver<T4> c4;

			private CombineLatestObserver<T5> c5;

			public CombineLatest(int length, CombineLatestObservable<T1, T2, T3, T4, T5, TR> parent, IObserver<TR> observer, IDisposable cancel)
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

		private CombineLatestFunc<T1, T2, T3, T4, T5, TR> resultSelector;

		public CombineLatestObservable(IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, IObservable<T5> source5, CombineLatestFunc<T1, T2, T3, T4, T5, TR> resultSelector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TR> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class CombineLatestObservable<T1, T2, T3, T4, T5, T6, TR> : OperatorObservableBase<TR>
	{
		private class CombineLatest : NthCombineLatestObserverBase<TR>
		{
			private readonly CombineLatestObservable<T1, T2, T3, T4, T5, T6, TR> parent;

			private readonly object gate;

			private CombineLatestObserver<T1> c1;

			private CombineLatestObserver<T2> c2;

			private CombineLatestObserver<T3> c3;

			private CombineLatestObserver<T4> c4;

			private CombineLatestObserver<T5> c5;

			private CombineLatestObserver<T6> c6;

			public CombineLatest(int length, CombineLatestObservable<T1, T2, T3, T4, T5, T6, TR> parent, IObserver<TR> observer, IDisposable cancel)
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

		private CombineLatestFunc<T1, T2, T3, T4, T5, T6, TR> resultSelector;

		public CombineLatestObservable(IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, IObservable<T5> source5, IObservable<T6> source6, CombineLatestFunc<T1, T2, T3, T4, T5, T6, TR> resultSelector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TR> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class CombineLatestObservable<T1, T2, T3, T4, T5, T6, T7, TR> : OperatorObservableBase<TR>
	{
		private class CombineLatest : NthCombineLatestObserverBase<TR>
		{
			private readonly CombineLatestObservable<T1, T2, T3, T4, T5, T6, T7, TR> parent;

			private readonly object gate;

			private CombineLatestObserver<T1> c1;

			private CombineLatestObserver<T2> c2;

			private CombineLatestObserver<T3> c3;

			private CombineLatestObserver<T4> c4;

			private CombineLatestObserver<T5> c5;

			private CombineLatestObserver<T6> c6;

			private CombineLatestObserver<T7> c7;

			public CombineLatest(int length, CombineLatestObservable<T1, T2, T3, T4, T5, T6, T7, TR> parent, IObserver<TR> observer, IDisposable cancel)
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

		private CombineLatestFunc<T1, T2, T3, T4, T5, T6, T7, TR> resultSelector;

		public CombineLatestObservable(IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, IObservable<T5> source5, IObservable<T6> source6, IObservable<T7> source7, CombineLatestFunc<T1, T2, T3, T4, T5, T6, T7, TR> resultSelector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TR> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
