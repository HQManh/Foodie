using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace UniRx.Operators
{
	internal class RepeatUntilObservable<T> : OperatorObservableBase<T>
	{
		private class RepeatUntil : OperatorObserverBase<T, T>
		{
			[CompilerGenerated]
			private sealed class _003CSubscribeAfterEndOfFrame_003Ed__13 : IEnumerator<object>, IEnumerator, IDisposable
			{
				private int _003C_003E1__state;

				private object _003C_003E2__current;

				public SingleAssignmentDisposable d;

				public GameObject lifeTimeChecker;

				public IObservable<T> source;

				public IObserver<T> observer;

				object IEnumerator<object>.Current
				{
					[DebuggerHidden]
					get
					{
						return null;
					}
				}

				object IEnumerator.Current
				{
					[DebuggerHidden]
					get
					{
						return null;
					}
				}

				[DebuggerHidden]
				public _003CSubscribeAfterEndOfFrame_003Ed__13(int _003C_003E1__state)
				{
				}

				[DebuggerHidden]
				void IDisposable.Dispose()
				{
				}

				private bool MoveNext()
				{
					return false;
				}

				bool IEnumerator.MoveNext()
				{
					//ILSpy generated this explicit interface implementation from .override directive in MoveNext
					return this.MoveNext();
				}

				[DebuggerHidden]
				void IEnumerator.Reset()
				{
				}
			}

			private readonly RepeatUntilObservable<T> parent;

			private readonly object gate;

			private IEnumerator<IObservable<T>> e;

			private SerialDisposable subscription;

			private SingleAssignmentDisposable schedule;

			private Action nextSelf;

			private bool isStopped;

			private bool isDisposed;

			private bool isFirstSubscribe;

			private IDisposable stopper;

			public RepeatUntil(RepeatUntilObservable<T> parent, IObserver<T> observer, IDisposable cancel)
				: base((IObserver<T>)null, (IDisposable)null)
			{
			}

			public IDisposable Run()
			{
				return null;
			}

			private void RecursiveRun(Action self)
			{
			}

			[IteratorStateMachine(typeof(RepeatUntilObservable<>.RepeatUntil._003CSubscribeAfterEndOfFrame_003Ed__13))]
			private static IEnumerator SubscribeAfterEndOfFrame(SingleAssignmentDisposable d, IObservable<T> source, IObserver<T> observer, GameObject lifeTimeChecker)
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

		private readonly IEnumerable<IObservable<T>> sources;

		private readonly IObservable<Unit> trigger;

		private readonly GameObject lifeTimeChecker;

		public RepeatUntilObservable(IEnumerable<IObservable<T>> sources, IObservable<Unit> trigger, GameObject lifeTimeChecker)
			: base(false)
		{
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
