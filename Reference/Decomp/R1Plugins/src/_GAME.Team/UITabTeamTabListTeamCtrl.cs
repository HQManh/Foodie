using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;
using _GAME.Utils;

namespace _GAME.Team;

public class UITabTeamTabListTeamCtrl : SingletonX<UITabTeamTabListTeamCtrl>
{
	public CanvasGroup objTab;

	public TeamHomeTabListTeamMenuCheat menuCheat;

	[Header("MENU_BTN")]
	public GameObject btnJoinActive;

	public GameObject btnSearchActive;

	public GameObject btnCreateActive;

	public Button btnOpenTabJoin;

	public Button btnOpenTabSearch;

	public Button btnOpenTabCreate;

	[Header("TAB_CHILD")]
	public UITabTeamTabJoinCtrl tabJoin;

	public UITabTeamTabSearchCtrl tabSearch;

	public UITabTeamTabCreateCtrl tabCreate;

	[Header("RUNTIME")]
	private List<Tweener> _tweenerActive;

	private int _tabActive;

	public void Init()
	{
	}

	public void UpdateUIActive()
	{
	}

	private void UpdateMenuBtn()
	{
	}

	public void OpenTabJoin()
	{
	}

	public void OpenTabSearch()
	{
	}

	public void OpenTabCreate()
	{
	}
}
