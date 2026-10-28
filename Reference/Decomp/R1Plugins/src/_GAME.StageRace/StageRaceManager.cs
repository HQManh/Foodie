using UnityEngine;
using _GAME.Utils;

namespace _GAME.StageRace;

public class StageRaceManager : SingletonManager<StageRaceManager>
{
	[SerializeField]
	private SOStageRaceConfig soConfig;

	public static StageRaceStageCfModel StageConfig;

	public static StageRaceDbModel Data;

	private static int _checkResetTickId;

	public static bool HasNotify => false;

	public static bool IsUnlocked => false;

	protected override void Awake()
	{
	}

	protected override void OnDestroy()
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

	public static void CheckResetEventByTime()
	{
	}

	public static bool CheckPlayTutorialUnlock()
	{
		return false;
	}

	public static bool CheckStageRaceFinished()
	{
		return false;
	}

	public static bool CheckShowInfoFirstOpen()
	{
		return false;
	}

	public static void StartNewRace()
	{
	}

	public static void ChangeRacePoint(int value = 1)
	{
	}

	public static void UpdatePointOfFakePlayer()
	{
	}

	public static void SavePointCacheAnim()
	{
	}

	public static void SavePointCachePopup()
	{
	}

	public static void FinishRace(bool nextStage = false)
	{
	}

	private static void LogEventStartRace()
	{
	}

	private static void LogEventFinishRace(int rank)
	{
	}
}
