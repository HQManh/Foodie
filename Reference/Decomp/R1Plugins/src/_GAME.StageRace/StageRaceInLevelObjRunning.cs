using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace _GAME.StageRace;

[Serializable]
public class StageRaceInLevelObjRunning
{
	public GameObject objTab;

	public TextMeshProUGUI txtStage;

	public TextMeshProUGUI txtTime;

	public List<StageRacePlayerInLevelUICtrl> listPlayer;

	public bool ActiveSelf()
	{
		return false;
	}

	public void SetActive(bool active)
	{
	}

	public int Init(Object owner)
	{
		return 0;
	}

	private void UpdateTimer()
	{
	}

	public void UpdatePlayerPoint()
	{
	}
}
