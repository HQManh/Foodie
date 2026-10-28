using System;
using System.Collections.Generic;

namespace UniRx.Operators
{
	internal class ZipObservable<TLeft, TRight, TResult> : OperatorObservableBase<TResult>
	{
		private class Zip : OperatorObserverBase<TResult, TResult>
		{
			private class LeftZipObserver : IObserver<TLeft>
			{
				private readonly Zip parent;

				public LeftZipObserver(Zip parent)
				{
				}

				public void OnNext(TLeft value)
				{
				}

				public void OnError(Exception ex)
				{
				}

				public void OnCompleted()
				{
				}
			}

			private class RightZipObserver : IObserver<TRight>
			{
				private readonly Zip parent;

				public RightZipObserver(Zip parent)
				{
				}

				public void OnNext(TRight value)
				{
				}

				public void OnError(Exception ex)
				{
				}

				public void OnCompleted()
				{
				}
			}

			private readonly ZipObservable<TLeft, TRight, TResult> parent;

			private readonly object gate;

			private readonly Queue<TLeft> leftQ;

			private bool leftCompleted;

			private readonly Queue<TRight> rightQ;

			private bool rightCompleted;

			public Zip(ZipObservable<TLeft, TRight, TResult> parent, IObserver<TResult> observer, IDisposable cancel)
				: base((IObserver<TResult>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			private void Dequeue()
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

		public ZipObservable(IObservable<TLeft> left, IObservable<TRight> right, Func<TLeft, TRight, TResult> selector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TResult> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class ZipObservable<T> : OperatorObservableBase<IList<T>>
	{
		private class Zip : OperatorObserverBase<IList<T>, IList<T>>
		{
			private class ZipObserver : IObserver<T>
			{
				private readonly Zip parent;

				private readonly int index;

				public ZipObserver(Zip parent, int index)
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

			private readonly ZipObservable<T> parent;

			private readonly object gate;

			private Queue<T>[] queues;

			private bool[] isDone;

			private int length;

			public Zip(ZipObservable<T> parent, IObserver<IList<T>> observer, IDisposable cancel)
				: base((IObserver<IList<T>>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			private void Dequeue(int index)
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

		public ZipObservable(IObservable<T>[] sources)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<IList<T>> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class ZipObservable<T1, T2, T3, TR> : OperatorObservableBase<TR>
	{
		private class Zip : NthZipObserverBase<TR>
		{
			private readonly ZipObservable<T1, T2, T3, TR> parent;

			private readonly object gate;

			private readonly Queue<T1> q1;

			private readonly Queue<T2> q2;

			private readonly Queue<T3> q3;

			public Zip(ZipObservable<T1, T2, T3, TR> parent, IObserver<TR> observer, IDisposable cancel)
				: base((IObserver<TR>)null, (IDisposable)null)
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

		private ZipFunc<T1, T2, T3, TR> resultSelector;

		public ZipObservable(IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, ZipFunc<T1, T2, T3, TR> resultSelector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TR> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class ZipObservable<T1, T2, T3, T4, TR> : OperatorObservableBase<TR>
	{
		private class Zip : NthZipObserverBase<TR>
		{
			private readonly ZipObservable<T1, T2, T3, T4, TR> parent;

			private readonly object gate;

			private readonly Queue<T1> q1;

			private readonly Queue<T2> q2;

			private readonly Queue<T3> q3;

			private readonly Queue<T4> q4;

			public Zip(ZipObservable<T1, T2, T3, T4, TR> parent, IObserver<TR> observer, IDisposable cancel)
				: base((IObserver<TR>)null, (IDisposable)null)
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

		private ZipFunc<T1, T2, T3, T4, TR> resultSelector;

		public ZipObservable(IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, ZipFunc<T1, T2, T3, T4, TR> resultSelector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TR> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class ZipObservable<T1, T2, T3, T4, T5, TR> : OperatorObservableBase<TR>
	{
		private class Zip : NthZipObserverBase<TR>
		{
			private readonly ZipObservable<T1, T2, T3, T4, T5, TR> parent;

			private readonly object gate;

			private readonly Queue<T1> q1;

			private readonly Queue<T2> q2;

			private readonly Queue<T3> q3;

			private readonly Queue<T4> q4;

			private readonly Queue<T5> q5;

			public Zip(ZipObservable<T1, T2, T3, T4, T5, TR> parent, IObserver<TR> observer, IDisposable cancel)
				: base((IObserver<TR>)null, (IDisposable)null)
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

		private ZipFunc<T1, T2, T3, T4, T5, TR> resultSelector;

		public ZipObservable(IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, IObservable<T5> source5, ZipFunc<T1, T2, T3, T4, T5, TR> resultSelector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TR> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class ZipObservable<T1, T2, T3, T4, T5, T6, TR> : OperatorObservableBase<TR>
	{
		private class Zip : NthZipObserverBase<TR>
		{
			private readonly ZipObservable<T1, T2, T3, T4, T5, T6, TR> parent;

			private readonly object gate;

			private readonly Queue<T1> q1;

			private readonly Queue<T2> q2;

			private readonly Queue<T3> q3;

			private readonly Queue<T4> q4;

			private readonly Queue<T5> q5;

			private readonly Queue<T6> q6;

			public Zip(ZipObservable<T1, T2, T3, T4, T5, T6, TR> parent, IObserver<TR> observer, IDisposable cancel)
				: base((IObserver<TR>)null, (IDisposable)null)
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

		private ZipFunc<T1, T2, T3, T4, T5, T6, TR> resultSelector;

		public ZipObservable(IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, IObservable<T5> source5, IObservable<T6> source6, ZipFunc<T1, T2, T3, T4, T5, T6, TR> resultSelector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TR> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class ZipObservable<T1, T2, T3, T4, T5, T6, T7, TR> : OperatorObservableBase<TR>
	{
		private class Zip : NthZipObserverBase<TR>
		{
			private readonly ZipObservable<T1, T2, T3, T4, T5, T6, T7, TR> parent;

			private readonly object gate;

			private readonly Queue<T1> q1;

			private readonly Queue<T2> q2;

			private readonly Queue<T3> q3;

			private readonly Queue<T4> q4;

			private readonly Queue<T5> q5;

			private readonly Queue<T6> q6;

			private readonly Queue<T7> q7;

			public Zip(ZipObservable<T1, T2, T3, T4, T5, T6, T7, TR> parent, IObserver<TR> observer, IDisposable cancel)
				: base((IObserver<TR>)null, (IDisposable)null)
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

		private ZipFunc<T1, T2, T3, T4, T5, T6, T7, TR> resultSelector;

		public ZipObservable(IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, IObservable<T5> source5, IObservable<T6> source6, IObservable<T7> source7, ZipFunc<T1, T2, T3, T4, T5, T6, T7, TR> resultSelector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TR> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
