using System;
using UnityEngine;
using UnityEngine.UI;

namespace _GAME.StageRace;

[Serializable]
public class PopupStageRaceRunningCheat
{
	public GameObject menuCheat;

	public Button btnCheatPoint;

	public Button btnResetData;

	private PopupStageRaceRunningCtrl _parent;

	public void AddListeners(PopupStageRaceRunningCtrl parent)
	{
	}

	public void Init(PopupStageRaceRunningCtrl parent)
	{
	}

	private void CheatPoint()
	{
	}

	private void ResetData()
	{
	}
}
