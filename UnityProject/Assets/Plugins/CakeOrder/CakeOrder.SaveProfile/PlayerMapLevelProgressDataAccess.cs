using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using CakeOrder.InGame;
using CakeOrder.Model;
using EssentialSystemR1;
using UnityEngine;

namespace CakeOrder.SaveProfile
{

public class PlayerMapLevelProgressDataAccess : MonoSingleton<PlayerMapLevelProgressDataAccess>
{
	// Values read from the static constructor (string literals decoded from the metadata).
	private static readonly R1Logger LocalLogger = new R1Logger
	{
		prefix = "[LevelProgressData]",
		enableLog = true,
		colorCode = "#33ff89"
	};

	private const string KeyBoolClaimedFullBuildingUpgradeReward = "FullUpgrRw";

	private const string KeyBoolClaimedAllItemsUpgradeReward = "AllUpgrRw";

	private const string KeyBoolReachedUpgradeMilestone = "UpgrMilestone";

	[SerializeField]
	private PlayerMapLevelProgressDataManager _dataManager;

	public PlayerMapLevelProgressDataManager DataManager => null;

	public bool IsDataAvailable => false;

	public int NewVersionNoticeOrder => 0;

	public DateTime LastPlayedTime => default(DateTime);

	public string LastPlayedMapId => null;

	public int LastPlayedLevelIndex => 0;

	public event Action<string> onMapBuildingUnlocked;

	public event Action<string> onClaimedFullUpgradeMapReward;

	public event Action<string, ItemPackData[]> onUpgradeRewardGranted;

	public event Action<string, int> onClaimedSectionUpgradeReward;

	public event Action<string, string> onHomeBuildingItemBought;

	public event Action<string, string> onToolUpgraded;

	public event Action<string> onMapDayPlayedChanged;

	public void SaveData()
	{
	}

	public void ResetData()
	{
	}

	public void SetNewVersionNoticeOrder(int order)
	{
	}

	public int GetWinStreak()
	{
		return 0;
	}

	public void SetWinStreak(int value)
	{
	}

	public bool IsMapUnlockable(string mapId)
	{
		return false;
	}

	public bool IsMapUnlockable(int mapIndex)
	{
		return false;
	}

	public bool IsMapUnlocked(string mapId)
	{
		return false;
	}

	public void UnlockMap(string mapId)
	{
	}

	public bool IsExtraLevelUnlocked(string mapId)
	{
		return false;
	}

	public void UnlockExtraLevel(string mapId)
	{
	}

	public bool IsHomeBuildingItemBought(string mapId, string itemId)
	{
		return false;
	}

	public List<string> GetHomeBuildingItemsBought(string mapId)
	{
		return null;
	}

	public int CountHomeBuildingItemsBought(string mapId)
	{
		return 0;
	}

	public void BuyHomeBuildingItem(string mapId, string itemId)
	{
	}

	private static string KeySectionRewardClaimed(int sectionIndex)
	{
		return null;
	}

	public bool IsClaimedSectionUpgradeReward(string mapId, int sectionIndex)
	{
		return false;
	}

	public void RecordClaimedSectionUpgradeReward(string mapId, int sectionIndex)
	{
	}

	public int GetToolLevel(string mapId, string toolId)
	{
		return 0;
	}

	public IEnumerable<string> GetSavedToolIds(string mapId)
	{
		return null;
	}

	public void UpgradeToolLevel(string mapId, string toolId)
	{
	}

	public void CheatSetToolLevel(string mapId, string toolId, int toolLevel)
	{
	}

	public bool SetToolLevel(string mapId, string toolId, int upgradesOwned)
	{
		return false;
	}

	public bool IsReachedUpgradeMilestone(string mapId)
	{
		return false;
	}

	public bool IsUpgradeLockedByPreviousMap(string mapId, out string previousMapId)
	{
		previousMapId = null;
		return false;
	}

	public bool RecordReachedUpgradeMilestone(string mapId)
	{
		return false;
	}

	public bool IsClaimedFullBuildingUpgradeReward(string mapId)
	{
		return false;
	}

	public void RecordClaimedFullBuildingUpgradeReward(string mapId, ItemPackData[] granted = null)
	{
	}

	public bool IsClaimedAllItemsUpgradeReward(string mapId)
	{
		return false;
	}

	public void RecordClaimedAllItemsUpgradeReward(string mapId, ItemPackData[] granted = null)
	{
	}

	private void RecordClaimedUpgradeReward(string mapId, string key, ItemPackData[] granted)
	{
	}

	public int GetTotalMapStar(string mapId)
	{
		return 0;
	}

	public int GetCountDayFinishedInMap(string mapId)
	{
		return 0;
	}

	private PlayerMapLevelProgressDataManager.MapLevelData GetLevelData(string mapId, int levelIndex)
	{
		return null;
	}

	public LevelState GetLevelState(string mapId, int levelIndex)
	{
		return LevelState.Locked;
	}

	public int GetLevelStars(string mapId, int levelIndex)
	{
		return 0;
	}

	public bool IsLevelWin(string mapId, int levelIndex)
	{
		return false;
	}

	public int GetLevelPlayCount(string mapId, int levelIndex)
	{
		return 0;
	}

	public bool IsLevelUnlocked(string mapId, int levelIndex)
	{
		return false;
	}

	public int GetMaxLevelIndexFinishedInMap(string mapId)
	{
		return 0;
	}

	public bool IsHaveKey(string mapId, string keyId)
	{
		return false;
	}

	public void SetKey(string mapId, string keyId)
	{
	}

	public void ClearKey(string mapId, string keyId)
	{
	}

	public void RecordLevelPlay(CakeLevelInitData initData)
	{
	}

	public void RecordLevelEnd(string mapId, int lvIndex, CakeLevelEndResultData resultData)
	{
	}

	public void RecordLevelQuit(string mapId, int levelIndex)
	{
	}

	public void UnlockLevel(string mapId, int levelIndex)
	{
	}

	public void CheatUnlockToLevel(string mapId, int levelIndex)
	{
	}

	public void CheatWinToLevel(string mapId, int levelIndex, int numStar, out int addedStar)
	{
		addedStar = default(int);
	}

	public void ValidateAllLevelUnlockStatus()
	{
	}

	public (int, int) GetHighestMapAndLevelIndexPlayable()
	{
		return default((int, int));
	}

	private (int, PlayerMapLevelProgressDataManager.MapLevelData) GetHighestLevelPlayableData(string mapId)
	{
		return default((int, PlayerMapLevelProgressDataManager.MapLevelData));
	}

	public int GetHighestLevelPlayable(string mapId)
	{
		return 0;
	}

	public int GetLevelIndexToShow(string mapId)
	{
		return 0;
	}
}
}
