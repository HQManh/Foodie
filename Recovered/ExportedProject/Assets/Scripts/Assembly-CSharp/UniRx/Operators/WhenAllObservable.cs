using System;
using System.Collections.Generic;

namespace UniRx.Operators
{
	internal class WhenAllObservable<T> : OperatorObservableBase<T[]>
	{
		private class WhenAll : OperatorObserverBase<T[], T[]>
		{
			private class WhenAllCollectionObserver : IObserver<T>
			{
				private readonly WhenAll parent;

				private readonly int index;

				private bool isCompleted;

				public WhenAllCollectionObserver(WhenAll parent, int index)
				{
				}

				public void OnNext(T value)
				{
				}

				public void OnError(Exception error)
				{
				}

				public void OnCompleted()
				{
				}
			}

			private readonly IObservable<T>[] sources;

			private readonly object gate;

			private int completedCount;

			private int length;

			private T[] values;

			public WhenAll(IObservable<T>[] sources, IObserver<T[]> observer, IDisposable cancel)
				: base((IObserver<T[]>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			public override void OnNext(T[] value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}
		}

		private class WhenAll_ : OperatorObserverBase<T[], T[]>
		{
			private class WhenAllCollectionObserver : IObserver<T>
			{
				private readonly WhenAll_ parent;

				private readonly int index;

				private bool isCompleted;

				public WhenAllCollectionObserver(WhenAll_ parent, int index)
				{
				}

				public void OnNext(T value)
				{
				}

				public void OnError(Exception error)
				{
				}

				public void OnCompleted()
				{
				}
			}

			private readonly IList<IObservable<T>> sources;

			private readonly object gate;

			private int completedCount;

			private int length;

			private T[] values;

			public WhenAll_(IList<IObservable<T>> sources, IObserver<T[]> observer, IDisposable cancel)
				: base((IObserver<T[]>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			public override void OnNext(T[] value)
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

		private readonly IEnumerable<IObservable<T>> sourcesEnumerable;

		public WhenAllObservable(IObservable<T>[] sources)
			: base(false)
		{
		}

		public WhenAllObservable(IEnumerable<IObservable<T>> sources)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T[]> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class WhenAllObservable : OperatorObservableBase<Unit>
	{
		private class WhenAll : OperatorObserverBase<Unit, Unit>
		{
			private class WhenAllCollectionObserver : IObserver<Unit>
			{
				private readonly WhenAll parent;

				private bool isCompleted;

				public WhenAllCollectionObserver(WhenAll parent)
				{
				}

				public void OnNext(Unit value)
				{
				}

				public void OnError(Exception error)
				{
				}

				public void OnCompleted()
				{
				}
			}

			private readonly IObservable<Unit>[] sources;

			private readonly object gate;

			private int completedCount;

			private int length;

			public WhenAll(IObservable<Unit>[] sources, IObserver<Unit> observer, IDisposable cancel)
				: base((IObserver<Unit>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			public override void OnNext(Unit value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}
		}

		private class WhenAll_ : OperatorObserverBase<Unit, Unit>
		{
			private class WhenAllCollectionObserver : IObserver<Unit>
			{
				private readonly WhenAll_ parent;

				private bool isCompleted;

				public WhenAllCollectionObserver(WhenAll_ parent)
				{
				}

				public void OnNext(Unit value)
				{
				}

				public void OnError(Exception error)
				{
				}

				public void OnCompleted()
				{
				}
			}

			private readonly IList<IObservable<Unit>> sources;

			private readonly object gate;

			private int completedCount;

			private int length;

			public WhenAll_(IList<IObservable<Unit>> sources, IObserver<Unit> observer, IDisposable cancel)
				: base((IObserver<Unit>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			public override void OnNext(Unit value)
			{
			}

			public override void OnError(Exception error)
			{
			}

			public override void OnCompleted()
			{
			}
		}

		private readonly IObservable<Unit>[] sources;

		private readonly IEnumerable<IObservable<Unit>> sourcesEnumerable;

		public WhenAllObservable(IObservable<Unit>[] sources)
			: base(false)
		{
		}

		public WhenAllObservable(IEnumerable<IObservable<Unit>> sources)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<Unit> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
