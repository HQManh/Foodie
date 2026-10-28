using System.Collections.Generic;
using UnityEngine;
using _GAME.GameUI;

namespace _GAME.Team;

public class PopupSelectTeamFlagCtrl : PopupSingleton<PopupSelectTeamFlagCtrl>
{
	public List<SelectFlagItemUICtrl> listItem;

	public RectTransform listItemLayout;

	public override void Open()
	{
	}

	private void InitListItem()
	{
	}

	private void UpdateItemSelected(int itemSelected = -1)
	{
	}

	public void SelectFlag(int index)
	{
	}
}
