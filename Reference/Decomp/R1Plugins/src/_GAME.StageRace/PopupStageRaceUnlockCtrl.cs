using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.StageRace;

public class PopupStageRaceUnlockCtrl : PopupSingleton<PopupStageRaceUnlockCtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayAnimUnlock_003Ed__5 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupStageRaceUnlockCtrl _003C_003E4__this;

		private TaskAwaiter _003C_003Eu__1;

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

	public Animator animUnlock;

	public Animator animHandTut;

	public Button btnFeature;

	protected override void Awake()
	{
	}

	public override void Open()
	{
	}

	[AsyncStateMachine(typeof(_003CPlayAnimUnlock_003Ed__5))]
	private void PlayAnimUnlock()
	{
	}

	private void OpenPopupFeature()
	{
	}
}
