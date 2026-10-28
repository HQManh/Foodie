using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine;
using _GAME.GameUI;

namespace _GAME.StageRace;

[Serializable]
public class PopupStageRaceFinishChestReward
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CShowReward_003Ed__4 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupStageRaceFinishChestReward _003C_003E4__this;

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

	public Animator animShowReward;

	public List<RwItemUICtrl> listRwItemUI;

	private PopupStageRaceFinishCtrl _parent;

	public void Init(PopupStageRaceFinishCtrl parent)
	{
	}

	[AsyncStateMachine(typeof(_003CShowReward_003Ed__4))]
	public void ShowReward()
	{
	}
}
