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
	public class TutorialStepTap : TutorialStep
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CRun_003Ed__4 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public TutorialContext ctx;

			public TutorialStepTap _003C_003E4__this;

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

		public bool showHand = true;

		[Header("Thoai di kem (de trong = khong thoai)")]
		[TextArea(2, 4)]
		public string talkLine;

		[Tooltip("UI_Common key for talkLine. Filled by CookOrder/Localization/Extract.")]
		public string talkLineKey;

		public TutorialTalkStyle talkStyle = TutorialTalkStyle.TextOnly;

		[AsyncStateMachine(typeof(_003CRun_003Ed__4))]
		public override UniTask Run(TutorialContext ctx)
		{
			// TODO(unrecovered): the state machine calls TutorialContext.WaitForTap-style helpers, list appends
			// (FUN_058abd7c / FUN_058ac614 / FUN_057e0c68) and the Focus/Hand pieces whose targets are not recovered.
			return default;
		}
	}
}
