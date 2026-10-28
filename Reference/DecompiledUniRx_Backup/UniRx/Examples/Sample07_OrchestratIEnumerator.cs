using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace UniRx.Examples
{
	public class Sample07_OrchestratIEnumerator : MonoBehaviour
	{
		[CompilerGenerated]
		private sealed class _003CAsyncA_003Ed__0 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

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
			public _003CAsyncA_003Ed__0(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				// The log text is recovered by guess; the pseudocode only references it as a DAT_ entry.
				if (_003C_003E1__state == 0)
				{
					_003C_003E1__state = -1;
					UnityEngine.Debug.Log("AsyncA: start");
					_003C_003E2__current = new WaitForSeconds(3f);
					_003C_003E1__state = 1;
					return true;
				}
				if (_003C_003E1__state == 1)
				{
					_003C_003E1__state = -1;
					UnityEngine.Debug.Log("AsyncA: end");
				}
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
				throw new NotSupportedException();
			}
		}

		[CompilerGenerated]
		private sealed class _003CAsyncB_003Ed__1 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return _003C_003E2__current;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return _003C_003E2__current;
				}
			}

			[DebuggerHidden]
			public _003CAsyncB_003Ed__1(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				// The log text is recovered by guess; the pseudocode only references it as a DAT_ entry.
				if (_003C_003E1__state == 0)
				{
					_003C_003E1__state = -1;
					UnityEngine.Debug.Log("AsyncB: start");
					_003C_003E2__current = new WaitForEndOfFrame();
					_003C_003E1__state = 1;
					return true;
				}
				if (_003C_003E1__state == 1)
				{
					_003C_003E1__state = -1;
					UnityEngine.Debug.Log("AsyncB: end");
				}
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
				throw new NotSupportedException();
			}
		}

		[IteratorStateMachine(typeof(_003CAsyncA_003Ed__0))]
		private IEnumerator AsyncA()
		{
			return new _003CAsyncA_003Ed__0(0);
		}

		[IteratorStateMachine(typeof(_003CAsyncB_003Ed__1))]
		private IEnumerator AsyncB()
		{
			return new _003CAsyncB_003Ed__1(0);
		}

		private void Start()
		{
			// TODO(unrecovered): composes Observable.FromCoroutine over AsyncA/AsyncB with Concat/Subscribe combinators (FUN_04c442a0, FUN_04c4aebc) that are not in the stubs.
		}
	}
}
