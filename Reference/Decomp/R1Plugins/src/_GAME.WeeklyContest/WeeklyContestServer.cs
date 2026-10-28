using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using Cysharp.Threading.Tasks;
using _GAME.BaseGame;

namespace _GAME.WeeklyContest;

public static class WeeklyContestServer
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CJoinRace_003Ed__0 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder<ABIServerWeeklyContestJoinRaceModel.ResponseDataModel> _003C_003Et__builder;

		public bool showLoading;

		private WebRequestModel _003CwebRequest_003E5__2;

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

	[AsyncStateMachine(typeof(_003CJoinRace_003Ed__0))]
	public static Task<ABIServerWeeklyContestJoinRaceModel.ResponseDataModel> JoinRace(bool showLoading = false)
	{
		return null;
	}

	public static void ClaimRank(bool showLoading = false)
	{
	}
}
