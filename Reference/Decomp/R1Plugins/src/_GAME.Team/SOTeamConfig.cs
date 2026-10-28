using System.Collections.Generic;
using UnityEngine;
using _GAME.GameUI;
using _GAME.Utils;

namespace _GAME.Team;

[CreateAssetMenu(fileName = "SOTeamConfig", menuName = "BaseGame/SOTeamConfig", order = 200)]
public class SOTeamConfig : SingletonSO<SOTeamConfig>
{
	public Sprite flagSpriteNoTeam;

	public List<Sprite> listFlagSprites;

	public List<PopupBaseCtrl> listPopup;

	public const int FetchTeamCapping = 60000;

	public const int LenTeamNameMin = 6;

	public const int LenTeamNameMax = 15;

	public const int LenTeamDesMax = 150;

	public const int PriceCreateTeam = 100;

	public const int PriceEditTeam = 100;

	public const int PriceCreateTeamClose = 1000;

	public const int FetchChatCapping = 10000;

	public const int LimitNumbChatFetchMin = 20;

	public const int LimitNumbChatFetchMore = 10;

	public const int LimitNumbChatFetchMax = 100;

	public const int SendChatCapping = 3000;

	public const int LimitChatMessage = 150;

	public const int LifeRequestCapping = 43200000;

	public const int CappingJoinNewTeam = 1800000;

	public const int MaxLifeHelpStack = 10;

	public static int LevelUnlock => 0;

	public static int ListFlagCount => 0;

	public void Load(SOTeamConfig newInstance)
	{
	}

	public static Sprite GetTeamFlag(int index)
	{
		return null;
	}
}
