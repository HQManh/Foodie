using System;
using System.Collections.Generic;
using UnityEngine;
using _GAME.GameUI;

namespace _GAME.DreamyStreak;

public class PopupDreamyStreakInfoCtrl : PopupSingleton<PopupDreamyStreakInfoCtrl>
{
	public List<GameObject> listObjInfo;

	private Action _closeCallback;

	public void Open(Action closeCallback)
	{
	}

	public override void Close()
	{
	}
}
