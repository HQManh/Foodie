using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.Team;

namespace _GAME.Leaderboard;

public class TeamRankItemUICtrl : MonoBehaviour
{
	public GameObject objItem;

	public TextMeshProUGUI txtRank;

	public Image imgFlag;

	public TextMeshProUGUI txtName;

	public TextMeshProUGUI txtSize;

	public TextMeshProUGUI txtScore;

	public Button btnShowInfo;

	private TeamInfoModel _model;

	private void Start()
	{
	}

	public void UpdateUIData(int rank, TeamInfoModel infoModel)
	{
	}

	public void UpdateUIData(TeamInfoModel infoModel)
	{
	}

	private void ViewInfo()
	{
	}
}
