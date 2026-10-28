using System.Collections.Generic;
using UnityEngine;
using _GAME.GameUI;
using _GAME.Utils;

namespace _GAME.DreamyPass;

[CreateAssetMenu(fileName = "SODreamyPassConfig", menuName = "EventLoop/SODreamyPassConfig", order = 100)]
public class SODreamyPassConfig : SingletonSO<SODreamyPassConfig>
{
	public List<PopupBaseCtrl> listPopup;

	public const int LevelUnlock = 11;

	public const long ExistTime = 2419200L;

	public const int MaxHeartBonus = 8;

	public const int PointLvNormal = 1;

	public const int PointLvHard = 3;

	public const int PointLvSuperHard = 5;

	public const int ExPointLvNormal = 10;

	public const int ExPointLvHard = 30;

	public const int ExPointLvSuperHard = 50;

	public const int MaxExtraPoint = 5000;

	public List<DreamyPassLevelCfModel> listLevel;

	public static List<DreamyPassLevelCfModel> ListLevel => null;

	public void Load(SODreamyPassConfig newInstance)
	{
	}

	public static int GetLevelByPoint(int point)
	{
		return 0;
	}

	public static int GetPointShowUI(int point)
	{
		return 0;
	}
}
