using System.Collections.Generic;
using UnityEngine;
using _GAME.GameUI;
using _GAME.Utils;

namespace _GAME.DreamyTower;

[CreateAssetMenu(fileName = "SODreamyTowerConfig", menuName = "EventLoop/SODreamyTowerConfig", order = 100)]
public class SODreamyTowerConfig : SingletonSO<SODreamyTowerConfig>
{
	public List<PopupBaseCtrl> listPopup;

	public const int LevelUnlock = 31;

	public const int ExistTime = 604800;

	public List<DreamyTowerLevelCfModel> listLevel;

	public static List<DreamyTowerLevelCfModel> ListLevel => null;

	public static int MaxLevel => 0;

	public void Load(SODreamyTowerConfig newInstance)
	{
	}

	public static DreamyTowerLevelCfModel GetLevel(int level)
	{
		return null;
	}

	public static int GetLevelChecked(int curLevel)
	{
		return 0;
	}

	public static int GetNextLevelCheckPoint(int curLevel)
	{
		return 0;
	}
}
