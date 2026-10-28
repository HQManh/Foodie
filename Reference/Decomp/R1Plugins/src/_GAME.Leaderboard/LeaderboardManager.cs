using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using _GAME.Team;
using _GAME.Utils;

namespace _GAME.Leaderboard;

public class LeaderboardManager : SingletonManager<LeaderboardManager>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CFetchLeaderboardPlayer_003Ed__15 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

		public bool force;

		private UniTask<ABIServerReadLeaderBoardModel.ResponseDataModel> _003CfetchLbGlobalTask_003E5__2;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable<string>.Awaiter _003C_003Eu__2;

		private UnityEngine.Awaitable<(ABIServerReadLeaderBoardModel.ResponseDataModel, ABIServerReadLeaderBoardModel.ResponseDataModel)>.Awaiter _003C_003Eu__3;

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
	private struct _003CFetchLeaderboardTeam_003Ed__16 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

		public bool force;

		private bool _003CshowLoading_003E5__2;

		private UniTask<List<TeamInfoModel>> _003CfetchLbGlobalTask_003E5__3;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable<string>.Awaiter _003C_003Eu__2;

		private Awaiter<(List<TeamInfoModel>, List<TeamInfoModel>)> _003C_003Eu__3;

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
	private struct _003CWaitServerIdReady_003Ed__10 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		private long _003Cdeadline_003E5__2;

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

	[SerializeField]
	private SOLeaderboardConfig soConfig;

	public static LeaderboardDbModel Data;

	private const int LoginWaitTimeoutSec = 8;

	public static bool IsUnlocked => false;

	public static bool HasPlayerData => false;

	public static bool HasTeamData => false;

	protected override void Awake()
	{
	}

	[ContextMenu("ResetData")]
	public void EditorResetData()
	{
	}

	private static void ResetData()
	{
	}

	public static void ReloadData()
	{
	}

	public static bool CheckPlayTutorialUnlock()
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CWaitServerIdReady_003Ed__10))]
	private static UniTask WaitServerIdReady()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CFetchLeaderboardPlayer_003Ed__15))]
	public static UniTask<bool> FetchLeaderboardPlayer(bool force = false)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<bool>);
	}

	[AsyncStateMachine(typeof(_003CFetchLeaderboardTeam_003Ed__16))]
	public static UniTask<bool> FetchLeaderboardTeam(bool force = false)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<bool>);
	}
}
