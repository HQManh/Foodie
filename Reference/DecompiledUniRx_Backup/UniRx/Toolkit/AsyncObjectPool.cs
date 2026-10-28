using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Threading;
using UnityEngine;

namespace UniRx.Toolkit
{
	public abstract class AsyncObjectPool<T> : IDisposable where T : Component
	{
		[CompilerGenerated]
		private sealed class _003CPreloadCore_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public int preloadCount;

			public AsyncObjectPool<T> _003C_003E4__this;

			public int threshold;

			public CancellationToken cancellationToken;

			public IObserver<Unit> observer;

			private ObservableYieldInstruction<Unit> _003Cawaiter_003E5__2;

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
			public _003CPreloadCore_003Ed__16(int _003C_003E1__state)
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

		private bool isDisposed;

		private Queue<T> q;

		protected int MaxPoolCount => 0;

		public int Count => 0;

		protected abstract IObservable<T> CreateInstanceAsync();

		protected virtual void OnBeforeRent(T instance)
		{
		}

		protected virtual void OnBeforeReturn(T instance)
		{
		}

		protected virtual void OnClear(T instance)
		{
		}

		public IObservable<T> RentAsync()
		{
			return null;
		}

		public void Return(T instance)
		{
		}

		public void Shrink(float instanceCountRatio, int minSize, bool callOnBeforeRent = false)
		{
		}

		public IDisposable StartShrinkTimer(TimeSpan checkInterval, float instanceCountRatio, int minSize, bool callOnBeforeRent = false)
		{
			return null;
		}

		public void Clear(bool callOnBeforeRent = false)
		{
		}

		public IObservable<Unit> PreloadAsync(int preloadCount, int threshold)
		{
			return null;
		}

		[IteratorStateMachine(typeof(AsyncObjectPool<>._003CPreloadCore_003Ed__16))]
		private IEnumerator PreloadCore(int preloadCount, int threshold, IObserver<Unit> observer, CancellationToken cancellationToken)
		{
			return null;
		}

		protected virtual void Dispose(bool disposing)
		{
		}

		public void Dispose()
		{
		}
	}
}
