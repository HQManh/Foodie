using System;
using UnityEngine;
using _GAME.Utils;

namespace _GAME.Team;

[Serializable]
public class UITabTeamTabMyTeamCtrl : SingletonX<UITabTeamTabMyTeamCtrl>
{
	public CanvasGroup objTab;

	public TeamHomeTabMyTeamMenuCheat menuCheat;

	public TeamHomeTabMyTeamBaseInfo headerInfo;

	public TeamHomeTabMyTeamChatContent chatContent;

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

	private void Update()
	{
	}
}
