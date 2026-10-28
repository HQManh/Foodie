using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace _GAME.Team;

[Serializable]
public class PopupTeamInfoListMember
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CHandleAssignLeader_003Ed__28 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupTeamInfoListMember _003C_003E4__this;

		private string _003CmemberId_003E5__2;

		private UnityEngine.Awaitable<bool>.Awaiter _003C_003Eu__1;

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
	private struct _003CHandleKickMember_003Ed__29 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupTeamInfoListMember _003C_003E4__this;

		private string _003CmemberId_003E5__2;

		private UnityEngine.Awaitable<bool>.Awaiter _003C_003Eu__1;

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

	public CanvasGroup objListMember;

	public List<TeamMemberItemUICtrl> listMember;

	public RectTransform listMemberLayout;

	public RectTransform hideTopPos;

	public RectTransform hideBotPos;

	public TeamMemberItemUICtrl memberSelf;

	[HideInInspector]
	public Transform refMemberSelf;

	public Transform refTopPos;

	public Transform refBotPos;

	public CanvasGroup objLoading;

	public CanvasGroup objNetworkError;

	[Header("MENU_ACTION")]
	public RectTransform objMenuActionMember;

	public Button btnViewProfile;

	public Button btnAssignLeader;

	public Button btnKickMember;

	public Button btnHideMenuAction;

	[Header("RUNTIME")]
	private PopupTeamInfoCtrl _parent;

	private int _memberOnSelected;

	private List<Tweener> _tweenerActive;

	public void Init(PopupTeamInfoCtrl parent)
	{
	}

	public void ShowLoading()
	{
	}

	public void ShowListMember()
	{
	}

	public void ShowNetworkError()
	{
	}

	public void UpdateListMember()
	{
	}

	public void UpdateItemActiveByPos()
	{
	}

	public void ShowMenuActionPlayer(int stt)
	{
	}

	public void HideMenuActionPlayer()
	{
	}

	public void ViewPlayerProfile()
	{
	}

	[AsyncStateMachine(typeof(_003CHandleAssignLeader_003Ed__28))]
	public void HandleAssignLeader()
	{
	}

	[AsyncStateMachine(typeof(_003CHandleKickMember_003Ed__29))]
	public void HandleKickMember()
	{
	}
}
