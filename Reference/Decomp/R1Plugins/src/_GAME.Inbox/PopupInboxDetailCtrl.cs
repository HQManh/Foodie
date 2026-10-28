using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameItem;
using _GAME.GameUI;

namespace _GAME.Inbox;

public class PopupInboxDetailCtrl : PopupBaseCtrl
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CClaimInbox_003Ed__23 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupInboxDetailCtrl _003C_003E4__this;

		private ABIServerInboxModel _003Cmail_003E5__2;

		private List<RwItemModel> _003Crewards_003E5__3;

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
	private struct _003CDeleteInbox_003Ed__24 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupInboxDetailCtrl _003C_003E4__this;

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
	private struct _003CReadInbox_003Ed__20 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupInboxDetailCtrl _003C_003E4__this;

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

	public TextMeshProUGUI txtTitle;

	public TextMeshProUGUI txtTime;

	public TextMeshProUGUI txtFrom;

	public TextMeshProUGUI txtContent;

	public RectTransform txtContentLayout;

	public TextMeshProUGUI txtLink;

	public RectTransform txtLinkLayout;

	public RwItemUICtrl rwItemUIPrefab;

	public List<RwItemUICtrl> listRwItem;

	public RectTransform listRwItemLayout;

	public List<RectTransform> rectContentRef;

	public List<RectTransform> rectLinkRef;

	public Button btnLink;

	public Button btnClaim;

	public Button btnDelete;

	private ABIServerInboxModel _inboxData;

	private List<RwItemModel> _rewards;

	private bool _isClaiming;

	public void Open(ABIServerInboxModel data)
	{
	}

	private void ClearRewardCells()
	{
	}

	[AsyncStateMachine(typeof(_003CReadInbox_003Ed__20))]
	private void ReadInbox()
	{
	}

	private void InitUIData()
	{
	}

	private void UpdateUILayoutClaimed()
	{
	}

	[AsyncStateMachine(typeof(_003CClaimInbox_003Ed__23))]
	private void ClaimInbox()
	{
	}

	[AsyncStateMachine(typeof(_003CDeleteInbox_003Ed__24))]
	private void DeleteInbox()
	{
	}

	private void OpenLink()
	{
	}
}
