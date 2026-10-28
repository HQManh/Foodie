using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.WeeklyContest;

public class PopupWeeklyContestUnlockCtrl : PopupSingleton<PopupWeeklyContestUnlockCtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayAnimUnlock_003Ed__9 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupWeeklyContestUnlockCtrl _003C_003E4__this;

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

	private Vector3 _btnFeatureStartPos;

	protected override void Awake()
	{
	}

	public override void Open()
	{
	}

	public override void HideByBackButton()
	{
	}

	protected override void OnDoneHide()
	{
	}

	protected override void OnDestroy()
	{
	}

	[AsyncStateMachine(typeof(_003CPlayAnimUnlock_003Ed__9))]
	private void PlayAnimUnlock()
	{
	}

	private void OpenPopupFeature()
	{
	}
}
