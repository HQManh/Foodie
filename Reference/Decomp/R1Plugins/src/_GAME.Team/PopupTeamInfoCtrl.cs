using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using UnityEngine;
using _GAME.GameUI;

namespace _GAME.Team;

public class PopupTeamInfoCtrl : PopupSingleton<PopupTeamInfoCtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetUpDataFirstOpen_003Ed__4 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupTeamInfoCtrl _003C_003E4__this;

		public bool fromLeaderboard;

		private UnityEngine.Awaitable<TeamInfoModel>.Awaiter _003C_003Eu__1;

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

	[Header("CONTENT")]
	public PopupTeamInfoBaseInfo baseInfo;

	public PopupTeamInfoListMember listMember;

	[Header("RUNTIME")]
	public TeamInfoModel infoModel;

	public void Open(TeamInfoModel model, bool fromLeaderboard)
	{
	}

	[AsyncStateMachine(typeof(_003CSetUpDataFirstOpen_003Ed__4))]
	private void SetUpDataFirstOpen(bool fromLeaderboard)
	{
	}

	public void UpdateEditInfo()
	{
	}

	private void Update()
	{
	}
}
