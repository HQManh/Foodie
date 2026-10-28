using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.Utils;

namespace _GAME.Inbox;

public class InboxFIconUICtrl : SingletonX<InboxFIconUICtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CRefreshNotify_003Ed__7 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public InboxFIconUICtrl _003C_003E4__this;

		private int _003Cserial_003E5__2;

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

	public Button btnInbox;

	public GameObject iconNotify;

	public TextMeshProUGUI txtNotify;

	private int _refreshSerial;

	protected override void Awake()
	{
	}

	private void Start()
	{
	}

	private void OnEnable()
	{
	}

	[AsyncStateMachine(typeof(_003CRefreshNotify_003Ed__7))]
	public void RefreshNotify()
	{
	}

	private void OpenPopupInbox()
	{
	}
}
