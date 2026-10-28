using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using _GAME.GameUI;

namespace _GAME.Inbox;

public class PopupInboxCtrl : PopupSingleton<PopupInboxCtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CFetchInbox_003Ed__8 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public PopupInboxCtrl _003C_003E4__this;

		private Awaiter<(List<ABIServerInboxModel>, List<ABIServerInboxModel>)> _003C_003Eu__1;

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
	private struct _003COpen_003Ed__6 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupInboxCtrl _003C_003E4__this;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

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

	public InboxItemUICtrl inboxItemUIPrefab;

	public List<InboxItemUICtrl> listInboxUI;

	public RectTransform listInboxUILayout;

	public GameObject objEmpty;

	[Header("RUNTIME")]
	private List<ABIServerInboxModel> _listInboxGlobalModel;

	private List<ABIServerInboxModel> _listInboxRecvModel;

	[AsyncStateMachine(typeof(_003COpen_003Ed__6))]
	public override void Open()
	{
	}

	private void InitUIOpen()
	{
	}

	[AsyncStateMachine(typeof(_003CFetchInbox_003Ed__8))]
	private UniTask FetchInbox()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public void UpdateNotify()
	{
	}

	private void ShowListInbox()
	{
	}

	public void DeleteInbox(ABIServerInboxModel inbox)
	{
	}
}
