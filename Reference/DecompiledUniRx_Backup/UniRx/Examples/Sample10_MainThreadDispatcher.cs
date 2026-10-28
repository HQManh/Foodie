using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace UniRx.Examples
{
	public class Sample10_MainThreadDispatcher
	{
		[CompilerGenerated]
		private sealed class _003CTestAsync_003Ed__1 : IEnumerator<object>, IEnumerator, IDisposable
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
			public _003CTestAsync_003Ed__1(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				// The log texts are recovered by guess; the pseudocode only references them as DAT_ entries.
				switch (_003C_003E1__state)
				{
				case 0:
					_003C_003E1__state = -1;
					UnityEngine.Debug.Log("TestAsync step 1");
					_003C_003E2__current = new WaitForSeconds(1f);
					_003C_003E1__state = 1;
					return true;
				case 1:
					_003C_003E1__state = -1;
					UnityEngine.Debug.Log("TestAsync step 2");
					_003C_003E2__current = new WaitForSeconds(1f);
					_003C_003E1__state = 2;
					return true;
				case 2:
					_003C_003E1__state = -1;
					UnityEngine.Debug.Log("TestAsync step 3");
					_003C_003E2__current = new WaitForSeconds(1f);
					_003C_003E1__state = 3;
					return true;
				case 3:
					_003C_003E1__state = -1;
					UnityEngine.Debug.Log("TestAsync done");
					return false;
				default:
					return false;
				}
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

		public void Run()
		{
			MainThreadDispatcher.StartCoroutine(TestAsync());
			// TODO(unrecovered): the remainder composes Observable.Interval, Observable.FromCoroutine and Subscribe combinators (FUN_04c4b494, FUN_04c44f10, FUN_04c40530, FUN_04c4b894 and related) that are not in the stubs.
		}

		[IteratorStateMachine(typeof(_003CTestAsync_003Ed__1))]
		private IEnumerator TestAsync()
		{
			return new _003CTestAsync_003Ed__1(0);
		}
	}
}
