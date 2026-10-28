using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace UniRx
{
	public class CoroutineAsyncBridge : INotifyCompletion
	{
		[CompilerGenerated]
		private sealed class _003CRun_003Ed__7<T> : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public T target;

			public CoroutineAsyncBridge _003C_003E4__this;

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
			public _003CRun_003Ed__7(int _003C_003E1__state)
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

		private Action continuation;

		public bool IsCompleted { get; private set; }

		private CoroutineAsyncBridge()
		{
		}

		public static CoroutineAsyncBridge Start<T>(T awaitTarget)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CRun_003Ed__7<>))]
		private IEnumerator Run<T>(T target)
		{
			return null;
		}

		public void OnCompleted(Action continuation)
		{
			this.continuation = continuation;
		}

		public void GetResult()
		{
			if (IsCompleted)
			{
				return;
			}
			throw new InvalidOperationException("Not yet completed"); // literal recovered by guess
		}
	}
	public class CoroutineAsyncBridge<T> : INotifyCompletion
	{
		[CompilerGenerated]
		private sealed class _003CRun_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public T target;

			public CoroutineAsyncBridge<T> _003C_003E4__this;

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
			public _003CRun_003Ed__8(int _003C_003E1__state)
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

		private readonly T result;

		private Action continuation;

		public bool IsCompleted { get; private set; }

		private CoroutineAsyncBridge(T result)
		{
		}

		public static CoroutineAsyncBridge<T> Start(T awaitTarget)
		{
			return null;
		}

		[IteratorStateMachine(typeof(CoroutineAsyncBridge<>._003CRun_003Ed__8))]
		private IEnumerator Run(T target)
		{
			return null;
		}

		public void OnCompleted(Action continuation)
		{
		}

		public T GetResult()
		{
			return default;
		}
	}
}
