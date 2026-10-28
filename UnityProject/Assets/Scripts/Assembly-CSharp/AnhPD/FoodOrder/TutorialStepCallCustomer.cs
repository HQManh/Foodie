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
	public class TutorialStepCallCustomer : TutorialStep
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CRun_003Ed__1 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public TutorialStepCallCustomer _003C_003E4__this;

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

		[Tooltip("Cho toi khi khach dung vao khu order; 0 = khong cho, chay tiep ngay")]
		public float waitTimeout = 5f;

		[AsyncStateMachine(typeof(_003CRun_003Ed__1))]
		public override UniTask Run(TutorialContext ctx)
		{
			// TODO(unrecovered): the state machine calls FCustomerLineHandle.GetActiveCustomerTransform,
			// FCustomerLineHandle.SpawnFirstCustomerAhead, CakeLevelInitData.IsFullData and a closure
			// (<>c__DisplayClass1_0) whose type is not in the stubs.
			return default;
		}
	}
}
