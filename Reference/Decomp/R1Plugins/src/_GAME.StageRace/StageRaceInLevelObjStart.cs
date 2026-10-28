using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.StageRace;

[Serializable]
public class StageRaceInLevelObjStart
{
	public GameObject objTab;

	public TextMeshProUGUI txtTime;

	public TextMeshProUGUI txtStage;

	public RwBoxUICtrl winReward;

	public Button btnStart;

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
}
