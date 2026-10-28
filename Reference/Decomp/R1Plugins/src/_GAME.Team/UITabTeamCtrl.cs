using TMPro;
using UnityEngine;
using _GAME.Utils;

namespace _GAME.Team;

public class UITabTeamCtrl : SingletonX<UITabTeamCtrl>
{
	public CanvasGroup objLock;

	public TextMeshProUGUI txtLevelUnlock;

	[Tooltip("Lock screen row promising free hearts (icon + text): hidden while team hearts are off, the frame's layout closes the gap")]
	public RectTransform lockPerkFreeHeart;

	[Header("TAB_CHILD")]
	public UITabTeamTabListTeamCtrl tabListTeam;

	public UITabTeamTabMyTeamCtrl tabMyTeam;

	public void Init()
	{
	}

	public void UpdateUIActive()
	{
	}
}
