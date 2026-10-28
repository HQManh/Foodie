using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using _GAME.Utils;

namespace _GAME.WeeklyContest;

public class WeeklyContestManager : SingletonManager<WeeklyContestManager>
{
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass24_0
	{
		public List<WeeklyContestPlayerModel> listPlayer;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CFetchLeaderboard_003Ed__22 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

		public bool force;

		private int _003Cweek_003E5__2;

		private bool _003CfetchAfterWeekEnd_003E5__3;

		private WCDataItem _003CweekData_003E5__4;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private Awaiter<List<WeeklyContestPlayerModel>> _003C_003Eu__2;

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
	private struct _003CForceFetchRank_003Ed__24 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<List<WeeklyContestPlayerModel>> _003C_003Et__builder;

		public WCDataItem weekData;

		private _003C_003Ec__DisplayClass24_0 _003C_003E8__1;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CTryJoinRace_003Ed__23 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public WCDataItem weekData;

		private bool _003CisFirstJoin_003E5__2;

		private TaskAwaiter<ABIServerWeeklyContestJoinRaceModel.ResponseDataModel> _003C_003Eu__1;

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
	private SOWeeklyContestConfig soConfig;

	public static WeeklyContestDbModel Data;

	public static bool OnFetchLeaderboard;

	private static int _finalFetchedWeek;

	private static int _weekFinished;

	private static int _rankFinished;

	public static bool IsUnlocked => false;

	public static bool IsFinished => false;

	public static bool NeedFinalFetch => false;

	public static bool IsTutorialUnlockPending => false;

	protected override void Awake()
	{
	}

	[ContextMenu("ResetData")]
	public void EditorResetData()
	{
	}

	public static void ResetData()
	{
	}

	public static void ReloadData()
	{
	}

	public static void CheckPlayTutorialUnlock()
	{
	}

	public static void CheckFinishWeek()
	{
	}

	public static void SkipFinishWeek()
	{
	}

	private static void FinishWeek(bool canReward)
	{
	}

	[AsyncStateMachine(typeof(_003CFetchLeaderboard_003Ed__22))]
	public static UniTask<bool> FetchLeaderboard(bool force = false)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<bool>);
	}

	[AsyncStateMachine(typeof(_003CTryJoinRace_003Ed__23))]
	private static UniTask TryJoinRace(WCDataItem weekData)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CForceFetchRank_003Ed__24))]
	private static UniTask<List<WeeklyContestPlayerModel>> ForceFetchRank(WCDataItem weekData)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<List<WeeklyContestPlayerModel>>);
	}

	private static void HandleSortRank(List<WeeklyContestPlayerModel> listPlayer)
	{
	}

	public static void ChangeScore(int score)
	{
	}

	public static void OnClaimFinishReward()
	{
	}

	private static void LogEventWeeklyContestJoin(int week)
	{
	}

	private static void LogEventWeeklyContestComplete(int week, int place)
	{
	}

	private static void LogEventWeeklyContestClaim(int week, int place)
	{
	}
}
