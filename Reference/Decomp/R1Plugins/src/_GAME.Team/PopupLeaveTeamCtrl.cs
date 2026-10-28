using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.Team;

public class PopupLeaveTeamCtrl : PopupBaseCtrl
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CHandleLeaveTeam_003Ed__4 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupLeaveTeamCtrl _003C_003E4__this;

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

	public Button btnYes;

	public Button btnNo;

	private bool _isLeaving;

	public override void Open()
	{
	}

	[AsyncStateMachine(typeof(_003CHandleLeaveTeam_003Ed__4))]
	public void HandleLeaveTeam()
	{
	}
}
