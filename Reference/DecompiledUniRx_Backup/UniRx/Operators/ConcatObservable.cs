using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace UniRx.Operators
{
	internal class ConcatObservable<T> : OperatorObservableBase<T>
	{
		private class Concat : OperatorObserverBase<T, T>
		{
			private readonly ConcatObservable<T> parent;

			private readonly object gate;

			private bool isDisposed;

			private IEnumerator<IObservable<T>> e;

			private SerialDisposable subscription;

			private Action nextSelf;

			public Concat(ConcatObservable<T> parent, IObserver<T> observer, IDisposable cancel)
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

		[CompilerGenerated]
		private sealed class _003CCombineSources_003Ed__3 : IEnumerable<IObservable<T>>, IEnumerable, IEnumerator<IObservable<T>>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private IObservable<T> _003C_003E2__current;

			private int _003C_003El__initialThreadId;

			private IEnumerable<IObservable<T>> first;

			public IEnumerable<IObservable<T>> _003C_003E3__first;

			private IEnumerable<IObservable<T>> second;

			public IEnumerable<IObservable<T>> _003C_003E3__second;

			private IEnumerator<IObservable<T>> _003C_003E7__wrap1;

			IObservable<T> IEnumerator<IObservable<T>>.Current
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
			public _003CCombineSources_003Ed__3(int _003C_003E1__state)
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

			private void _003C_003Em__Finally1()
			{
			}

			private void _003C_003Em__Finally2()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<IObservable<T>> IEnumerable<IObservable<T>>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		private readonly IEnumerable<IObservable<T>> sources;

		public ConcatObservable(IEnumerable<IObservable<T>> sources)
			: base(false)
		{
		}

		public IObservable<T> Combine(IEnumerable<IObservable<T>> combineSources)
		{
			return null;
		}

		[IteratorStateMachine(typeof(ConcatObservable<>._003CCombineSources_003Ed__3))]
		private static IEnumerable<IObservable<T>> CombineSources(IEnumerable<IObservable<T>> first, IEnumerable<IObservable<T>> second)
		{
			return null;
		}

		protected override IDisposable SubscribeCore(IObserver<T> observer, IDisposable cancel)
		{
			return null;
		}
	}
}
