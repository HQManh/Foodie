using System;
using System.Collections;
using System.Collections.Generic;

namespace UniRx.Operators
{
	internal class BatchFrameObservable<T> : OperatorObservableBase<IList<T>>
	{
		private class BatchFrame : OperatorObserverBase<T, IList<T>>
		{
			private class ReusableEnumerator : IEnumerator
			{
				private readonly BatchFrame parent;

				private int currentFrame;

				public object Current => null;

				public ReusableEnumerator(BatchFrame parent)
				{
				}

				public bool MoveNext()
				{
					return false;
				}

				public void Reset()
				{
				}
			}

			private readonly BatchFrameObservable<T> parent;

			private readonly object gate;

			private readonly BooleanDisposable cancellationToken;

			private readonly IEnumerator timer;

			private bool isRunning;

			private bool isCompleted;

			private List<T> list;

			public BatchFrame(BatchFrameObservable<T> parent, IObserver<IList<T>> observer, IDisposable cancel)
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

		private readonly IObservable<T> source;

		private readonly int frameCount;

		private readonly FrameCountType frameCountType;

		public BatchFrameObservable(IObservable<T> source, int frameCount, FrameCountType frameCountType)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<IList<T>> observer, IDisposable cancel)
		{
			return null;
		}
	}
	internal class BatchFrameObservable : OperatorObservableBase<Unit>
	{
		private class BatchFrame : OperatorObserverBase<Unit, Unit>
		{
			private class ReusableEnumerator : IEnumerator
			{
				private readonly BatchFrame parent;

				private int currentFrame;

				public object Current => null;

				public ReusableEnumerator(BatchFrame parent)
				{
				}

				public bool MoveNext()
				{
					return false;
				}

				public void Reset()
				{
				}
			}

			private readonly BatchFrameObservable parent;

			private readonly object gate;

			private readonly BooleanDisposable cancellationToken;

			private readonly IEnumerator timer;

			private bool isRunning;

			private bool isCompleted;

			public BatchFrame(BatchFrameObservable parent, IObserver<Unit> observer, IDisposable cancel)
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

		private readonly IObservable<Unit> source;

		private readonly int frameCount;

		private readonly FrameCountType frameCountType;

		public BatchFrameObservable(IObservable<Unit> source, int frameCount, FrameCountType frameCountType)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<Unit> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
