using UnityEngine;
using _GAME.Utils;
using _GAME.WeeklyContest;

namespace _GAME.Leaderboard;

public class UILeaderboardTabWeeklyCtrl : SingletonX<UILeaderboardTabWeeklyCtrl>
{
	public CanvasGroup objTab;

	public WeeklyContestHomeTabUICtrl uiWeeklyContest;

	public void Init()
	{
	}

	public bool IsActive()
	{
		return false;
	}

	public void UpdateUIActive()
	{
	}
}
