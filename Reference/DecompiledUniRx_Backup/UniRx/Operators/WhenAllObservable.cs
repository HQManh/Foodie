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
					// TODO(unrecovered): generic WhenAllObservable<T> has no pseudocode in batch029 (only the Unit variant was decoded).
				}

				public void OnNext(T value)
				{
					// TODO(unrecovered): generic WhenAllObservable<T> has no pseudocode in batch029.
				}

				public void OnError(Exception error)
				{
					// TODO(unrecovered): generic WhenAllObservable<T> has no pseudocode in batch029.
				}

				public void OnCompleted()
				{
					// TODO(unrecovered): generic WhenAllObservable<T> has no pseudocode in batch029.
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
				// TODO(unrecovered): generic WhenAllObservable<T> has no pseudocode in batch029.
			}

			public IDisposable Run()
			{
				// TODO(unrecovered): generic WhenAllObservable<T> has no pseudocode in batch029.
				return null;
			}

			public override void OnNext(T[] value)
			{
				// TODO(unrecovered): generic WhenAllObservable<T> has no pseudocode in batch029.
			}

			public override void OnError(Exception error)
			{
				// TODO(unrecovered): generic WhenAllObservable<T> has no pseudocode in batch029.
			}

			public override void OnCompleted()
			{
				// TODO(unrecovered): generic WhenAllObservable<T> has no pseudocode in batch029.
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
					// TODO(unrecovered): generic WhenAllObservable<T> has no pseudocode in batch029.
				}

				public void OnNext(T value)
				{
					// TODO(unrecovered): generic WhenAllObservable<T> has no pseudocode in batch029.
				}

				public void OnError(Exception error)
				{
					// TODO(unrecovered): generic WhenAllObservable<T> has no pseudocode in batch029.
				}

				public void OnCompleted()
				{
					// TODO(unrecovered): generic WhenAllObservable<T> has no pseudocode in batch029.
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
				// TODO(unrecovered): generic WhenAllObservable<T> has no pseudocode in batch029.
			}

			public IDisposable Run()
			{
				// TODO(unrecovered): generic WhenAllObservable<T> has no pseudocode in batch029.
				return null;
			}

			public override void OnNext(T[] value)
			{
				// TODO(unrecovered): generic WhenAllObservable<T> has no pseudocode in batch029.
			}

			public override void OnError(Exception error)
			{
				// TODO(unrecovered): generic WhenAllObservable<T> has no pseudocode in batch029.
			}

			public override void OnCompleted()
			{
				// TODO(unrecovered): generic WhenAllObservable<T> has no pseudocode in batch029.
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
					this.parent = parent;
				}

				public void OnNext(Unit value)
				{
				}

				public void OnError(Exception error)
				{
					lock (parent.gate)
					{
						if (!isCompleted)
						{
							parent.OnError(error);
						}
					}
				}

				public void OnCompleted()
				{
					lock (parent.gate)
					{
						if (!isCompleted)
						{
							isCompleted = true;
							parent.completedCount++;
							if (parent.completedCount == parent.length)
							{
								parent.OnNext(Unit.Default);
								parent.OnCompleted();
							}
						}
					}
				}
			}

			private readonly IObservable<Unit>[] sources;

			private readonly object gate;

			private int completedCount;

			private int length;

			public WhenAll(IObservable<Unit>[] sources, IObserver<Unit> observer, IDisposable cancel)
				: base(observer, cancel)
			{
				this.sources = sources;
				gate = new object();
			}

			public IDisposable Run()
			{
				length = sources.Length;
				if (length == 0)
				{
					observer.OnNext(Unit.Default);
					observer.OnCompleted();
					Dispose();
					return Disposable.Empty;
				}
				completedCount = 0;
				IDisposable[] subscriptions = new IDisposable[length];
				for (int i = 0; i < length; i++)
				{
					WhenAllCollectionObserver collectionObserver = new WhenAllCollectionObserver(this);
					subscriptions[i] = sources[i].Subscribe(collectionObserver);
				}
				return StableCompositeDisposable.CreateUnsafe(subscriptions);
			}

			public override void OnNext(Unit value)
			{
				observer.OnNext(value);
			}

			public override void OnError(Exception error)
			{
				observer.OnError(error);
				Dispose();
			}

			public override void OnCompleted()
			{
				observer.OnCompleted();
				Dispose();
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
					this.parent = parent;
				}

				public void OnNext(Unit value)
				{
				}

				public void OnError(Exception error)
				{
					lock (parent.gate)
					{
						if (!isCompleted)
						{
							parent.OnError(error);
						}
					}
				}

				public void OnCompleted()
				{
					lock (parent.gate)
					{
						if (!isCompleted)
						{
							isCompleted = true;
							parent.completedCount++;
							if (parent.completedCount == parent.length)
							{
								parent.OnNext(Unit.Default);
								parent.OnCompleted();
							}
						}
					}
				}
			}

			private readonly IList<IObservable<Unit>> sources;

			private readonly object gate;

			private int completedCount;

			private int length;

			public WhenAll_(IList<IObservable<Unit>> sources, IObserver<Unit> observer, IDisposable cancel)
				: base(observer, cancel)
			{
				this.sources = sources;
				gate = new object();
			}

			public IDisposable Run()
			{
				length = sources.Count;
				if (length == 0)
				{
					observer.OnNext(Unit.Default);
					observer.OnCompleted();
					Dispose();
					return Disposable.Empty;
				}
				completedCount = 0;
				IDisposable[] subscriptions = new IDisposable[length];
				for (int i = 0; i < length; i++)
				{
					WhenAllCollectionObserver collectionObserver = new WhenAllCollectionObserver(this);
					subscriptions[i] = sources[i].Subscribe(collectionObserver);
				}
				return StableCompositeDisposable.CreateUnsafe(subscriptions);
			}

			public override void OnNext(Unit value)
			{
				observer.OnNext(value);
			}

			public override void OnError(Exception error)
			{
				observer.OnError(error);
				Dispose();
			}

			public override void OnCompleted()
			{
				observer.OnCompleted();
				Dispose();
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
