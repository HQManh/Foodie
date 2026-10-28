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
			}

			internal void _003CComplexCoroutineTest_003Eb__1(int x)
			{
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
			public _003CTestNewCustomYieldInstruction_003Ed__2(int _003C_003E1__state)
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

		private void Start()
		{
		}

		[IteratorStateMachine(typeof(_003CComplexCoroutineTest_003Ed__1))]
		private IEnumerator ComplexCoroutineTest()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CTestNewCustomYieldInstruction_003Ed__2))]
		private IEnumerator TestNewCustomYieldInstruction()
		{
			return null;
		}
	}
}
