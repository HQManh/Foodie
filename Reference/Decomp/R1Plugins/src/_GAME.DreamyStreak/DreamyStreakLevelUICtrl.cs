using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.DreamyStreak;

public class DreamyStreakLevelUICtrl : MonoBehaviour
{
	public TextMeshProUGUI txtLevel;

	public GameObject objLevelNormal;

	public GameObject objLevelActive;

	public Slider sliderProgress;

	public GameObject objRewardClaimed;

	public GameObject objRewardLocked;

	public RwItemUICtrl rwItemUI;

	private DreamyStreakLevelCfModel _config;

	public void UpdateStatus(int level = -1)
	{
	}
}
