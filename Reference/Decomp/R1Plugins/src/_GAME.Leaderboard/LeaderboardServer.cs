using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using _GAME.BaseGame;

namespace _GAME.Leaderboard;

public static class LeaderboardServer
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CReadLeaderboard_003Ed__0 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<ABIServerReadLeaderBoardModel.ResponseDataModel> _003C_003Et__builder;

		public string countryCode;

		public int skip;

		public int limit;

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

	[AsyncStateMachine(typeof(_003CReadLeaderboard_003Ed__0))]
	public static UniTask<ABIServerReadLeaderBoardModel.ResponseDataModel> ReadLeaderboard(int skip = 0, int limit = 100, string countryCode = "")
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<ABIServerReadLeaderBoardModel.ResponseDataModel>);
	}
}
