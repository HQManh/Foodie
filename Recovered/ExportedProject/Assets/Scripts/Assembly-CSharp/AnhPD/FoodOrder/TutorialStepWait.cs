using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class TutorialStepWait : TutorialStep
	{
		public enum Mode
		{
			Seconds = 0,
			OrderCompleted = 1
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass4_0
		{
			public FCustomerLine target;

			public bool done;

			public float deadline;

			internal bool _003CWaitOrderCompleted_003Eb__1()
			{
				return false;
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CWaitOrderCompleted_003Ed__4 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public TutorialContext ctx;

			public TutorialStepWait _003C_003E4__this;

			private _003C_003Ec__DisplayClass4_0 _003C_003E8__1;

			private UniTask.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		public Mode mode;

		[Tooltip("Seconds: thoi gian cho. OrderCompleted: timeout, <= 0 = cho vo han")]
		public float seconds;

		public override UniTask Run(TutorialContext ctx)
		{
			return default;
		}

		[AsyncStateMachine(typeof(_003CWaitOrderCompleted_003Ed__4))]
		private UniTask WaitOrderCompleted(TutorialContext ctx)
		{
			return default;
		}
	}
}
