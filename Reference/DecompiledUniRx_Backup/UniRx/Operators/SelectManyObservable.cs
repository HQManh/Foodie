using System;
using System.Collections.Generic;

namespace UniRx.Operators
{
	internal class SelectManyObservable<TSource, TResult> : OperatorObservableBase<TResult>
	{
		private class SelectManyOuterObserver : OperatorObserverBase<TSource, TResult>
		{
			private class SelectMany : OperatorObserverBase<TResult, TResult>
			{
				private readonly SelectManyOuterObserver parent;

				private readonly IDisposable cancel;

				public SelectMany(SelectManyOuterObserver parent, IDisposable cancel)
					: base((IObserver<TResult>)null, (IDisposable)null)
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

			private readonly SelectManyObservable<TSource, TResult> parent;

			private CompositeDisposable collectionDisposable;

			private SingleAssignmentDisposable sourceDisposable;

			private object gate;

			private bool isStopped;

			public SelectManyOuterObserver(SelectManyObservable<TSource, TResult> parent, IObserver<TResult> observer, IDisposable cancel)
				: base((IObserver<TResult>)null, (IDisposable)null)
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

		private class SelectManyObserverWithIndex : OperatorObserverBase<TSource, TResult>
		{
			private class SelectMany : OperatorObserverBase<TResult, TResult>
			{
				private readonly SelectManyObserverWithIndex parent;

				private readonly IDisposable cancel;

				public SelectMany(SelectManyObserverWithIndex parent, IDisposable cancel)
					: base((IObserver<TResult>)null, (IDisposable)null)
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

			private readonly SelectManyObservable<TSource, TResult> parent;

			private CompositeDisposable collectionDisposable;

			private int index;

			private object gate;

			private bool isStopped;

			private SingleAssignmentDisposable sourceDisposable;

			public SelectManyObserverWithIndex(SelectManyObservable<TSource, TResult> parent, IObserver<TResult> observer, IDisposable cancel)
				: base((IObserver<TResult>)null, (IDisposable)null)
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

		private class SelectManyEnumerableObserver : OperatorObserverBase<TSource, TResult>
		{
			private readonly SelectManyObservable<TSource, TResult> parent;

			public SelectManyEnumerableObserver(SelectManyObservable<TSource, TResult> parent, IObserver<TResult> observer, IDisposable cancel)
				: base((IObserver<TResult>)null, (IDisposable)null)
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

		private class SelectManyEnumerableObserverWithIndex : OperatorObserverBase<TSource, TResult>
		{
			private readonly SelectManyObservable<TSource, TResult> parent;

			private int index;

			public SelectManyEnumerableObserverWithIndex(SelectManyObservable<TSource, TResult> parent, IObserver<TResult> observer, IDisposable cancel)
				: base((IObserver<TResult>)null, (IDisposable)null)
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

		private readonly Func<TSource, IObservable<TResult>> selector;

		private readonly Func<TSource, int, IObservable<TResult>> selectorWithIndex;

		private readonly Func<TSource, IEnumerable<TResult>> selectorEnumerable;

		private readonly Func<TSource, int, IEnumerable<TResult>> selectorEnumerableWithIndex;

		public SelectManyObservable(IObservable<TSource> source, Func<TSource, IObservable<TResult>> selector)
			: base(false)
		{
		}

		public SelectManyObservable(IObservable<TSource> source, Func<TSource, int, IObservable<TResult>> selector)
			: base(false)
		{
		}

		public SelectManyObservable(IObservable<TSource> source, Func<TSource, IEnumerable<TResult>> selector)
			: base(false)
		{
		}

		public SelectManyObservable(IObservable<TSource> source, Func<TSource, int, IEnumerable<TResult>> selector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TResult> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class SelectManyObservable<TSource, TCollection, TResult> : OperatorObservableBase<TResult>
	{
		private class SelectManyOuterObserver : OperatorObserverBase<TSource, TResult>
		{
			private class SelectMany : OperatorObserverBase<TCollection, TResult>
			{
				private readonly SelectManyOuterObserver parent;

				private readonly TSource sourceValue;

				private readonly IDisposable cancel;

				public SelectMany(SelectManyOuterObserver parent, TSource value, IDisposable cancel)
					: base((IObserver<TResult>)null, (IDisposable)null)
				{
				}

				public override void OnNext(TCollection value)
				{
				}

				public override void OnError(Exception error)
				{
				}

				public override void OnCompleted()
				{
				}
			}

			private readonly SelectManyObservable<TSource, TCollection, TResult> parent;

			private CompositeDisposable collectionDisposable;

			private object gate;

			private bool isStopped;

			private SingleAssignmentDisposable sourceDisposable;

			public SelectManyOuterObserver(SelectManyObservable<TSource, TCollection, TResult> parent, IObserver<TResult> observer, IDisposable cancel)
				: base((IObserver<TResult>)null, (IDisposable)null)
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

		private class SelectManyObserverWithIndex : OperatorObserverBase<TSource, TResult>
		{
			private class SelectManyObserver : OperatorObserverBase<TCollection, TResult>
			{
				private readonly SelectManyObserverWithIndex parent;

				private readonly TSource sourceValue;

				private readonly int sourceIndex;

				private readonly IDisposable cancel;

				private int index;

				public SelectManyObserver(SelectManyObserverWithIndex parent, TSource value, int index, IDisposable cancel)
					: base((IObserver<TResult>)null, (IDisposable)null)
				{
				}

				public override void OnNext(TCollection value)
				{
				}

				public override void OnError(Exception error)
				{
				}

				public override void OnCompleted()
				{
				}
			}

			private readonly SelectManyObservable<TSource, TCollection, TResult> parent;

			private CompositeDisposable collectionDisposable;

			private object gate;

			private bool isStopped;

			private SingleAssignmentDisposable sourceDisposable;

			private int index;

			public SelectManyObserverWithIndex(SelectManyObservable<TSource, TCollection, TResult> parent, IObserver<TResult> observer, IDisposable cancel)
				: base((IObserver<TResult>)null, (IDisposable)null)
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

		private class SelectManyEnumerableObserver : OperatorObserverBase<TSource, TResult>
		{
			private readonly SelectManyObservable<TSource, TCollection, TResult> parent;

			public SelectManyEnumerableObserver(SelectManyObservable<TSource, TCollection, TResult> parent, IObserver<TResult> observer, IDisposable cancel)
				: base((IObserver<TResult>)null, (IDisposable)null)
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

		private class SelectManyEnumerableObserverWithIndex : OperatorObserverBase<TSource, TResult>
		{
			private readonly SelectManyObservable<TSource, TCollection, TResult> parent;

			private int index;

			public SelectManyEnumerableObserverWithIndex(SelectManyObservable<TSource, TCollection, TResult> parent, IObserver<TResult> observer, IDisposable cancel)
				: base((IObserver<TResult>)null, (IDisposable)null)
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

		private readonly Func<TSource, IObservable<TCollection>> collectionSelector;

		private readonly Func<TSource, int, IObservable<TCollection>> collectionSelectorWithIndex;

		private readonly Func<TSource, IEnumerable<TCollection>> collectionSelectorEnumerable;

		private readonly Func<TSource, int, IEnumerable<TCollection>> collectionSelectorEnumerableWithIndex;

		private readonly Func<TSource, TCollection, TResult> resultSelector;

		private readonly Func<TSource, int, TCollection, int, TResult> resultSelectorWithIndex;

		public SelectManyObservable(IObservable<TSource> source, Func<TSource, IObservable<TCollection>> collectionSelector, Func<TSource, TCollection, TResult> resultSelector)
			: base(false)
		{
		}

		public SelectManyObservable(IObservable<TSource> source, Func<TSource, int, IObservable<TCollection>> collectionSelector, Func<TSource, int, TCollection, int, TResult> resultSelector)
			: base(false)
		{
		}

		public SelectManyObservable(IObservable<TSource> source, Func<TSource, IEnumerable<TCollection>> collectionSelector, Func<TSource, TCollection, TResult> resultSelector)
			: base(false)
		{
		}

		public SelectManyObservable(IObservable<TSource> source, Func<TSource, int, IEnumerable<TCollection>> collectionSelector, Func<TSource, int, TCollection, int, TResult> resultSelector)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<TResult> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
