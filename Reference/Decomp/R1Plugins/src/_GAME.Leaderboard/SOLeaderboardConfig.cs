using System.Collections.Generic;
using UnityEngine;
using _GAME.GameUI;
using _GAME.Utils;

namespace _GAME.Leaderboard;

[CreateAssetMenu(fileName = "SOLeaderboardConfig", menuName = "BaseGame/SOLeaderboardConfig", order = 200)]
public class SOLeaderboardConfig : SingletonSO<SOLeaderboardConfig>
{
	public List<PopupBaseCtrl> listPopup;

	public const int FetchRankCapping = 600;

	public const int NumbPlayerToShow = 100;

	public static int LevelUnlock => 0;

	public void Load(SOLeaderboardConfig newInstance)
	{
	}
}
