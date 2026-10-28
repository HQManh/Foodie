using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using _GAME.Bridge;
using _GAME.Team;
using _GAME.Utils;

namespace _GAME.Profile;

public class ProfileManager : SingletonManager<ProfileManager>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CAdoptServerProfile_003Ed__15 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public string serverId;

		private string _003CleftServerId_003E5__2;

		private UnityEngine.Awaitable<ProfileQueryResult>.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__2;

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
	private struct _003CCheckUpdateBaseInfo_003Ed__21 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable<string>.Awaiter _003C_003Eu__2;

		private UnityEngine.Awaitable<bool>.Awaiter _003C_003Eu__3;

		private UnityEngine.Awaitable<TeamCommandResult>.Awaiter _003C_003Eu__4;

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
	private struct _003CEnsureCountryCode_003Ed__14 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<string> _003C_003Et__builder;

		private UnityEngine.Awaitable<string>.Awaiter _003C_003Eu__1;

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
	private SOProfileConfig soConfig;

	public static ProfileDbModel Data;

	public static Dictionary<int, bool> DictFrameUnlocked;

	public static Dictionary<int, bool> DictNameFxUnlocked;

	private static int _cbLevelMain;

	private static readonly bool EquipFrameOnLevelUnlock;

	public static bool IsBaseInfoReady { get; private set; }

	[RuntimeInitializeOnLoadMethod(/*Could not decode attribute arguments.*/)]
	private static void ResetCallbackIds()
	{
	}

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

	private static int RandomUnlockedAvatar()
	{
		return 0;
	}

	private static void CopyCoreProfileOnce()
	{
	}

	private static void OnCoreProfileChanged()
	{
	}

	private static void SyncToCore()
	{
	}

	[AsyncStateMachine(typeof(_003CEnsureCountryCode_003Ed__14))]
	public static UniTask<string> EnsureCountryCode()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<string>);
	}

	[AsyncStateMachine(typeof(_003CAdoptServerProfile_003Ed__15))]
	private static UniTask AdoptServerProfile(string serverId)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private static void ApplyServerProfile(ProfileDbModel serverProfile)
	{
	}

	[AsyncStateMachine(typeof(_003CCheckUpdateBaseInfo_003Ed__21))]
	public static void CheckUpdateBaseInfo()
	{
	}

	public static void TrySetSocialName(string socialName)
	{
	}

	public static void CheckFirstOpen()
	{
	}

	private static void CheckUnlockAvatarFrameByLevel()
	{
	}

	public static void CheckFrameNameFxForEvent()
	{
	}

	public static void SaveEdit(ProfileDbModel.EditModel editData)
	{
	}

	private static void CheckUnlockAvatarByRestaurant()
	{
	}

	private static bool IsAvatarOpenByRestaurant(AvatarUnlockRule rule)
	{
		return false;
	}

	public static bool IsAvatarUnlocked(int index)
	{
		return false;
	}

	public static string GetAvatarLockMessage(int index)
	{
		return null;
	}

	public static void UnlockAvatar(int index)
	{
	}

	public static void UnlockEquipAvatar(int index)
	{
	}

	public static bool IsFrameUnlocked(int index)
	{
		return false;
	}

	public static bool IsFrameListed(int index)
	{
		return false;
	}

	public static void UnlockFrame(int index)
	{
	}

	public static void UnlockEquipFrame(int index)
	{
	}

	public static void SetLockFrame(int index)
	{
	}

	public static bool IsNameFxUnlocked(int index)
	{
		return false;
	}

	public static void UnlockEquipNameFx(int index)
	{
	}

	public static void SetLockNameFx(int index)
	{
	}

	public static void SaveTeamInfo(long teamId, int flag, string name)
	{
	}

	private static void RefreshLevelProgress()
	{
	}

	public static void SaveLevelMain()
	{
	}

	public static void ChangeFirstTryWin(int value = 1)
	{
	}

	private static void OnLevelWin(R1LevelInfo level)
	{
	}

	public static void ChangeWeeklyContestTop1(int value = 1)
	{
	}

	public static void ChangeLiveSendCount(int value = 1)
	{
	}

	public static void ChangeLiveRecvCount(int value = 1)
	{
	}

	public static void ChangeStageRaceWin(int value = 1)
	{
	}

	public static void ChangeDreamyTowerMax(int value)
	{
	}

	public static void ChangeTeamTreasurePoint(int week, int point, bool needSave = false)
	{
	}

	public static void ResetTeamTreasurePoint(int week)
	{
	}

	public static void ChangeWeeklyContestScore(int week, int score, bool needSave = false)
	{
	}

	public static void ResetWeeklyContestScore(int week)
	{
	}

	private static int CalcRankScore()
	{
		return 0;
	}

	private static void SaveRankScore()
	{
	}
}
