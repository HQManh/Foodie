using TMPro;
using UnityEngine;
using _GAME.GameUI;

namespace _GAME.TeamTreasure;

public class TeamTreasureRewardStepUICtrl : MonoBehaviour
{
	public TextMeshProUGUI txtPoint;

	public RwBoxUICtrl rwBox;

	public GameObject iconClaimed;

	private TeamTreasureRewardStepCfModel _config;

	private int _callbackId;

	public void Init(TeamTreasureRewardStepCfModel newConfig)
	{
	}

	private void UpdateUIData()
	{
	}

	public bool CheckAutoClaim()
	{
		return false;
	}
}
