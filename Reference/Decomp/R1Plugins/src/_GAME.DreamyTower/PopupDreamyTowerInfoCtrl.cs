using System;
using System.Collections.Generic;
using UnityEngine;
using _GAME.GameUI;

namespace _GAME.DreamyTower;

public class PopupDreamyTowerInfoCtrl : PopupSingleton<PopupDreamyTowerInfoCtrl>
{
	public List<GameObject> listObjInfo;

	private Action _closeCallback;

	public override void Open()
	{
	}
}
