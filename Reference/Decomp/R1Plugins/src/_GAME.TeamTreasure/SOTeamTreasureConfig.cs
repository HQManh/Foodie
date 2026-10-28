using System.Collections.Generic;
using UnityEngine;
using _GAME.GameUI;
using _GAME.Utils;

namespace _GAME.TeamTreasure;

[CreateAssetMenu(fileName = "SOTeamTreasureConfig", menuName = "EventLoop/SOTeamTreasureConfig", order = 100)]
public class SOTeamTreasureConfig : SingletonSO<SOTeamTreasureConfig>
{
	public List<PopupBaseCtrl> listPopup;

	public const int LevelUnlock = 36;

	public const int PointLvNormal = 1;

	public const int PointLvHard = 3;

	public const int PointLvSuperHard = 5;

	public List<TeamTreasureRewardStepCfModel> listRwStep;

	public List<TeamTreasureRewardTopCfModel> listRwTop;

	public static List<TeamTreasureRewardStepCfModel> ListRwStep => null;

	public static List<TeamTreasureRewardTopCfModel> ListRwTop => null;

	public void Load(SOTeamTreasureConfig newInstance)
	{
	}

	public static int GetMaxPointStepReward()
	{
		return 0;
	}

	public static float GetFillValueRewardStep(int point)
	{
		return 0f;
	}

	public static TeamTreasureRewardTopCfModel GetTopReward(int top)
	{
		return null;
	}

	public Dictionary<string, object> GetRemoteConfigDefault()
	{
		return null;
	}

	public void ReloadRemoteConfigOnFetched()
	{
	}
}
