using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace _GAME.Team;

[Serializable]
public class PopupTeamInfoBaseInfo
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CHandleJoinTeam_003Ed__17 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupTeamInfoBaseInfo _003C_003E4__this;

		private UnityEngine.Awaitable<int>.Awaiter _003C_003Eu__1;

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

	public Image imgFlag;

	public TextMeshProUGUI txtName;

	public TextMeshProUGUI txtDes;

	public TextMeshProUGUI txtSize;

	public TextMeshProUGUI txtScore;

	public TextMeshProUGUI txtTotalHelp;

	public TextMeshProUGUI txtRequiredLevel;

	public TextMeshProUGUI txtTeamType;

	[Header("MENU_ACTION")]
	public RectTransform menuActionLayout;

	public Button btnEdit;

	public Button btnJoin;

	public Button btnLeave;

	private PopupTeamInfoCtrl _parent;

	public void Init(PopupTeamInfoCtrl parent)
	{
	}

	public void EnableAction(bool enable)
	{
	}

	public void UpdateBaseInfo()
	{
	}

	public void OpenPopupEditTeam()
	{
	}

	[AsyncStateMachine(typeof(_003CHandleJoinTeam_003Ed__17))]
	public void HandleJoinTeam()
	{
	}

	public void OpenPopupLeaveTeam()
	{
	}
}
