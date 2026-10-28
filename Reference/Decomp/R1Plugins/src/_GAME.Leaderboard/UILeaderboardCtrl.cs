using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.Utils;

namespace _GAME.Leaderboard;

public class UILeaderboardCtrl : SingletonX<UILeaderboardCtrl>
{
	public GameObject objTab;

	public GameObject objLock;

	public TextMeshProUGUI txtLvUnlock;

	[Header("MENU_BTN")]
	public List<Animator> btnWeeklyAnim;

	public List<Animator> btnPlayerAnim;

	public List<Animator> btnTeamAnim;

	public Button btnTabWeekly;

	public Button btnTabPlayer;

	public Button btnTabTeam;

	[Header("TAB_CHILD")]
	public UILeaderboardTabWeeklyCtrl tabWeekly;

	public UILeaderboardTabPlayerCtrl tabPlayer;

	public UILeaderboardTabTeamCtrl tabTeam;

	[Header("RUNTIME")]
	private const int TabWeekly = 0;

	[Header("RUNTIME")]
	private const int TabPlayer = 1;

	[Header("RUNTIME")]
	private const int TabTeam = 2;

	private List<Tweener> _tweenerActive;

	private int _tabActive;

	public void Init()
	{
	}

	public static void ForceSetTabActive(int input)
	{
	}

	public void UpdateUIActive()
	{
	}

	private void OpenTabWeekly()
	{
	}

	private void OpenTabPlayer()
	{
	}

	private void OpenTabTeam()
	{
	}
}
