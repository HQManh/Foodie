using UnityEngine;
using _GAME.Utils;

namespace _GAME.DreamyStreak;

public class DreamyStreakManager : SingletonManager<DreamyStreakManager>
{
	[SerializeField]
	private SODreamyStreakConfig soConfig;

	public static DreamyStreakDbModel Data;

	private static int _checkResetTickId;

	public static bool IsUnlocked => false;

	public static bool IsMaxPoint => false;

	public static bool IsAllRewardClaimed => false;

	public static bool IsIconHomeActive => false;

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

	public static void SaveFirstOpen()
	{
	}

	public static void SetOnPlayingLevel()
	{
	}

	public static void CheatPoint(int point)
	{
	}

	public static void HandleWinStreak()
	{
	}

	public static void HandleLoseStreak()
	{
	}

	public static void SaveCache()
	{
	}

	public static void CheckClaimReward(Vector3 srcPos)
	{
	}

	public static int GetCurStreakPoint()
	{
		return 0;
	}

	public static int GetNewPointStreak()
	{
		return 0;
	}

	public static int GetCurPointProgress()
	{
		return 0;
	}

	public static DreamyStreakLevelCfModel GetCurTargetLevel()
	{
		return null;
	}

	private static void LogEventWinStreak()
	{
	}

	private static void LogEventLoseStreak()
	{
	}

	private static string GetStreakString(int streak)
	{
		return null;
	}
}
