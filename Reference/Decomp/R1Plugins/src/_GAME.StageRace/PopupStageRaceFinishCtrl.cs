using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.StageRace;

public class PopupStageRaceFinishCtrl : PopupSingleton<PopupStageRaceFinishCtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CClaimRewardAndClose_003Ed__9 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupStageRaceFinishCtrl _003C_003E4__this;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COpenChest_003Ed__8 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupStageRaceFinishCtrl _003C_003E4__this;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CShowChestReward_003Ed__7 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupStageRaceFinishCtrl _003C_003E4__this;

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

	public PopupStageRaceFinishChestAnim chestAnim;

	public PopupStageRaceFinishChestReward chestReward;

	public Button btnOpenChest;

	public Button btnClaimReward;

	[Header("RUNTIME")]
	[HideInInspector]
	public StageRaceStageCfModel stageConfig;

	protected override void Awake()
	{
	}

	public void Open(int stage)
	{
	}

	[AsyncStateMachine(typeof(_003CShowChestReward_003Ed__7))]
	private void ShowChestReward()
	{
	}

	[AsyncStateMachine(typeof(_003COpenChest_003Ed__8))]
	private void OpenChest()
	{
	}

	[AsyncStateMachine(typeof(_003CClaimRewardAndClose_003Ed__9))]
	private void ClaimRewardAndClose()
	{
	}
}
