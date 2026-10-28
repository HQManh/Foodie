using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.DreamyTower;

public class DreamyTowerLevelUICtrl : MonoBehaviour
{
	public TextMeshProUGUI txtLevel;

	public RwBoxUICtrl rwBoxUI;

	public Animator flagChecked;

	public Slider sliderProgress;

	public Transform followPos;

	private DreamyTowerLevelCfModel _config;

	private int _callbackId;

	public void Init(int level)
	{
	}

	private void UpdateProgress()
	{
	}

	private void UpdateRewardStatus()
	{
	}

	public void CheckAutoClaimReward()
	{
	}
}
