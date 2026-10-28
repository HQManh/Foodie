using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using _GAME.Utils;

namespace _GAME.DreamyTower;

public class DreamyTowerManager : SingletonManager<DreamyTowerManager>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CCheckFirstOpenPopup_003Ed__22 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

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
	private SODreamyTowerConfig soConfig;

	public static DreamyTowerDbModel Data;

	private static int _checkResetTickId;

	public static bool IsUnlocked => false;

	public static bool IsMaxLevel => false;

	public static bool IsAllRewardClaimed => false;

	public static bool IsActive => false;

	public static bool IsCanIncreasePoint => false;

	public static bool IsCanLoseStreak => false;

	protected override void Awake()
	{
	}

	protected override void OnDestroy()
	{
	}

	[ContextMenu("EditorResetData")]
	public void EditorResetData()
	{
	}

	private static void ResetData()
	{
	}

	public static void ReloadData()
	{
	}

	public static void CheckResetEventByTime()
	{
	}

	public static bool CheckPlayTutorialUnlock()
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CCheckFirstOpenPopup_003Ed__22))]
	public static UniTask CheckFirstOpenPopup()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public static bool CheckShowPopupClaimReward()
	{
		return false;
	}

	[ContextMenu("EditorCheatPoint")]
	public void EditorCheatPoint()
	{
	}

	public static void CheatPoint(int numb)
	{
	}

	public static void SetOnPlayingLevel()
	{
	}

	public static void HandleWinStreak()
	{
	}

	public static void HandleLoseStreak()
	{
	}

	public static void SaveLevelCacheAnim()
	{
	}

	public static void SaveLevelCachePopup(int level)
	{
	}

	public static bool ClaimRewardCheckPoint(int level)
	{
		return false;
	}

	private static void LogEventWinStreak()
	{
	}

	private static void LogEventLoseStreak()
	{
	}
}
