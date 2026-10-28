using System.Collections.Generic;
using UnityEngine;
using _GAME.GameUI;
using _GAME.Utils;

namespace _GAME.DreamyStreak;

[CreateAssetMenu(fileName = "SODreamyStreakConfig", menuName = "EventLoop/SODreamyStreakConfig", order = 100)]
public class SODreamyStreakConfig : SingletonSO<SODreamyStreakConfig>
{
	public List<PopupBaseCtrl> listPopup;

	public const int LevelUnlock = 21;

	public const int LevelShowHomeIcon = 11;

	public const int ExistTime = 604800;

	public static readonly List<int> ListStreakPoint;

	public List<DreamyStreakLevelCfModel> listLevel;

	public static List<DreamyStreakLevelCfModel> ListLevel => null;

	public static int MaxLevelPoint => 0;

	public void Load(SODreamyStreakConfig newInstance)
	{
	}

	public static int GetPointByStreak(int streak)
	{
		return 0;
	}

	public static int GetLevelPassed(int point)
	{
		return 0;
	}
}
