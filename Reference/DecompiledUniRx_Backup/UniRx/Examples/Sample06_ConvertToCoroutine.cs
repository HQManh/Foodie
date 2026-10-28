using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace UniRx.Examples
{
	public class Sample06_ConvertToCoroutine : MonoBehaviour
	{
		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass1_0
		{
			public int v;

			internal void _003CComplexCoroutineTest_003Eb__0(int x)
			{
				v = x;
			}

			internal void _003CComplexCoroutineTest_003Eb__1(int x)
			{
				v = x;
			}
		}

		[CompilerGenerated]
		private sealed class _003CComplexCoroutineTest_003Ed__1 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			private _003C_003Ec__DisplayClass1_0 _003C_003E8__1;

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
			public _003CComplexCoroutineTest_003Ed__1(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				// TODO(unrecovered): the body drives Observable.Range/Return/Timer subscriptions and WWW requests through unnamed Rx helpers (FUN_04c45304, FUN_04c48024, FUN_04c4e270, ...) that are not in the stubs.
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
		private sealed class _003CTestNewCustomYieldInstruction_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public Sample06_ConvertToCoroutine _003C_003E4__this;

			private ObservableYieldInstruction<string> _003Co_003E5__2;

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
			public _003CTestNewCustomYieldInstruction_003Ed__2(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				// TODO(unrecovered): the body uses Observable.Timer, ObservableWWW.Get and Scheduler.MainThreadIgnoreTimeScale through unnamed Rx helpers (FUN_04c48024, FUN_04c482d8, FUN_04c4e270, FUN_04c480d0) that are not in the stubs.
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

		private void Start()
		{
			StartCoroutine(ComplexCoroutineTest());
		}

		[IteratorStateMachine(typeof(_003CComplexCoroutineTest_003Ed__1))]
		private IEnumerator ComplexCoroutineTest()
		{
			return new _003CComplexCoroutineTest_003Ed__1(0);
		}

		[IteratorStateMachine(typeof(_003CTestNewCustomYieldInstruction_003Ed__2))]
		private IEnumerator TestNewCustomYieldInstruction()
		{
			return new _003CTestNewCustomYieldInstruction_003Ed__2(0)
			{
				_003C_003E4__this = this
			};
		}
	}
}
