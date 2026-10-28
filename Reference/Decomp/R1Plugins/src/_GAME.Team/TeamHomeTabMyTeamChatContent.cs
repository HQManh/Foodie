using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace _GAME.Team;

[Serializable]
public class TeamHomeTabMyTeamChatContent
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CFetchChat_003Ed__33 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public TeamHomeTabMyTeamChatContent _003C_003E4__this;

		public bool fetchMore;

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
	private struct _003CSendChatMessage_003Ed__40 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public string message;

		public TeamHomeTabMyTeamChatContent _003C_003E4__this;

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
	private struct _003CSendLifeRequest_003Ed__42 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public TeamHomeTabMyTeamChatContent _003C_003E4__this;

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
	private struct _003CUpdateChatPeriodic_003Ed__32 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public TeamHomeTabMyTeamChatContent _003C_003E4__this;

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

	[Header("ASSET")]
	public MemberChatItemUICtrl memChatPrefab;

	public MemberLifeReqUICtrl memLifeReqPrefab;

	public SelfChatItemUICtrl selfChatPrefab;

	public SelfLifeReqUICtrl selfLifeReqPrefab;

	public NotiChatItemUICtrl notiChatPrefab;

	[Header("LAYOUT")]
	public RectTransform chatPoolLayout;

	public RectTransform listChatLayout;

	public VerticalLayoutGroup listChatVerticalLayoutGroup;

	public ContentSizeFitter listChatContentSizeFitter;

	public Transform btnMoreOrRefreshPos;

	[Header("MENU_BTN")]
	public Button btnMoreChat;

	public TMP_InputField inputChat;

	public TeamChatInputBarUICtrl inputBar;

	public Button btnAskLife;

	public GameObject objLifeRequestLimit;

	public TextMeshProUGUI txtTimeLifeRequest;

	public GameObject objLifeRequestActive;

	[Header("RUNTIME")]
	private List<TeamChatItemUICtrl> _listChatActive;

	private List<MemberChatItemUICtrl> _listMemChatActive;

	private Stack<MemberChatItemUICtrl> _memChatPool;

	private List<MemberLifeReqUICtrl> _listMemLifeReqActive;

	private Stack<MemberLifeReqUICtrl> _memLifeReqPool;

	private List<SelfChatItemUICtrl> _listSelfChatActive;

	private Stack<SelfChatItemUICtrl> _selfChatPool;

	private List<SelfLifeReqUICtrl> _listSelfLifeReqActive;

	private Stack<SelfLifeReqUICtrl> _selfLifeReqPool;

	private List<NotiChatItemUICtrl> _listNotiChatActive;

	private Stack<NotiChatItemUICtrl> _notiChatPool;

	private bool _onFetchChat;

	private bool _onSendLifeRequest;

	private bool _onSendChat;

	public void Init()
	{
	}

	[AsyncStateMachine(typeof(_003CUpdateChatPeriodic_003Ed__32))]
	public void UpdateChatPeriodic()
	{
	}

	[AsyncStateMachine(typeof(_003CFetchChat_003Ed__33))]
	public void FetchChat(bool fetchMore)
	{
	}

	public void UpdateListChat()
	{
	}

	private void ClearListChat()
	{
	}

	private void UpdateListChatMessage()
	{
	}

	private void UpdateListLifeRequest()
	{
	}

	private void SortListChatByTime()
	{
	}

	private void SubmitByEnter(string message)
	{
	}

	[AsyncStateMachine(typeof(_003CSendChatMessage_003Ed__40))]
	public void SendChatMessage(string message)
	{
	}

	public void UpdateBtnAskLifeStatus()
	{
	}

	[AsyncStateMachine(typeof(_003CSendLifeRequest_003Ed__42))]
	public void SendLifeRequest()
	{
	}
}
