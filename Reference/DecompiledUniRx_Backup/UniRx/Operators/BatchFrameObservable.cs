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
					// TODO(unrecovered): generic variant not recovered in this pass.
				}

				public bool MoveNext()
				{
					// TODO(unrecovered): generic variant not recovered in this pass.
					return false;
				}

				public void Reset()
				{
					// TODO(unrecovered): generic variant not recovered in this pass.
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
				// TODO(unrecovered): generic variant not recovered in this pass.
			}

			public IDisposable Run()
			{
				// TODO(unrecovered): generic variant not recovered in this pass.
				return null;
			}

			public override void OnNext(T value)
			{
				// TODO(unrecovered): generic variant not recovered in this pass.
			}

			public override void OnError(Exception error)
			{
				// TODO(unrecovered): generic variant not recovered in this pass.
			}

			public override void OnCompleted()
			{
				// TODO(unrecovered): generic variant not recovered in this pass.
			}
		}

		private readonly IObservable<T> source;

		private readonly int frameCount;

		private readonly FrameCountType frameCountType;

		public BatchFrameObservable(IObservable<T> source, int frameCount, FrameCountType frameCountType)
			: base(false)
		{
			this.source = source;
			this.frameCount = frameCount;
			this.frameCountType = frameCountType;
		}

		protected override IDisposable SubscribeCore(IObserver<IList<T>> observer, IDisposable cancel)
		{
			// TODO(unrecovered): generic variant not recovered in this pass.
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
					this.parent = parent;
				}

				public bool MoveNext()
				{
					if (parent.cancellationToken.IsDisposed)
					{
						return false;
					}
					bool result;
					bool notifyComplete = false;
					lock (parent.gate)
					{
						int frame = currentFrame;
						currentFrame = frame + 1;
						if (frame == parent.parent.frameCount)
						{
							result = false;
							if (!parent.isCompleted)
							{
								parent.isRunning = false;
								notifyComplete = true;
							}
						}
						else
						{
							result = true;
						}
					}
					if (notifyComplete)
					{
						parent.observer.OnNext(Unit.Default);
					}
					return result;
				}

				public void Reset()
				{
					currentFrame = 0;
				}
			}

			private readonly BatchFrameObservable parent;

			private readonly object gate;

			private readonly BooleanDisposable cancellationToken;

			private readonly IEnumerator timer;

			private bool isRunning;

			private bool isCompleted;

			public BatchFrame(BatchFrameObservable parent, IObserver<Unit> observer, IDisposable cancel)
				: base(observer, cancel)
			{
				this.parent = parent;
				gate = new object();
				cancellationToken = new BooleanDisposable();
				timer = new ReusableEnumerator(this);
			}

			public IDisposable Run()
			{
				IDisposable subscription = parent.source.Subscribe(this);
				return StableCompositeDisposable.Create(subscription, cancellationToken);
			}

			public override void OnNext(Unit value)
			{
				lock (gate)
				{
					if (!isRunning)
					{
						isRunning = true;
						timer.Reset();
						switch (parent.frameCountType)
						{
						case FrameCountType.Update:
							MainThreadDispatcher.StartUpdateMicroCoroutine(timer);
							break;
						case FrameCountType.FixedUpdate:
							MainThreadDispatcher.StartFixedUpdateMicroCoroutine(timer);
							break;
						case FrameCountType.EndOfFrame:
							MainThreadDispatcher.StartEndOfFrameMicroCoroutine(timer);
							break;
						}
					}
				}
			}

			public override void OnError(Exception error)
			{
				observer.OnError(error);
				Dispose();
			}

			public override void OnCompleted()
			{
				bool wasRunning;
				lock (gate)
				{
					wasRunning = isRunning;
					isCompleted = true;
				}
				if (wasRunning)
				{
					observer.OnNext(Unit.Default);
				}
				observer.OnCompleted();
				Dispose();
			}
		}

		private readonly IObservable<Unit> source;

		private readonly int frameCount;

		private readonly FrameCountType frameCountType;

		public BatchFrameObservable(IObservable<Unit> source, int frameCount, FrameCountType frameCountType)
			: base(false)
		{
			this.source = source;
			this.frameCount = frameCount;
			this.frameCountType = frameCountType;
		}

		protected override IDisposable SubscribeCore(IObserver<Unit> observer, IDisposable cancel)
		{
			BatchFrame frame = new BatchFrame(this, observer, cancel);
			return frame.Run();
		}
	}
}
