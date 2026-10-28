using System.Collections.Generic;
using UnityEngine;
using _GAME.GameItem;
using _GAME.GameUI;
using _GAME.Utils;

namespace _GAME.WeeklyContest;

[CreateAssetMenu(fileName = "SOWeeklyContestConfig", menuName = "EventLoop/SOWeeklyContestConfig")]
public class SOWeeklyContestConfig : SingletonSO<SOWeeklyContestConfig>
{
	public List<PopupBaseCtrl> listPopup;

	public const int CappingTimeFetchRank = 600;

	public List<RankConfig> listRankConfig;

	public static int LevelUnlock => 0;

	public static List<RankConfig> ListRankConfig => null;

	public void Load(SOWeeklyContestConfig newInstance)
	{
	}

	public static List<RwItemModel> GetRankReward(int rank)
	{
		return null;
	}
}
