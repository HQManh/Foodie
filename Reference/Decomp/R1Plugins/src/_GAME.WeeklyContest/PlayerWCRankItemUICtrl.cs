using System.Collections.Generic;
using TMPro;
using UnityEngine;
using _GAME.GameUI;
using _GAME.Profile;

namespace _GAME.WeeklyContest;

public class PlayerWCRankItemUICtrl : MonoBehaviour
{
	public GameObject frameNormal;

	public GameObject frameSelf;

	public List<TextMeshProUGUI> txtRank;

	public AvatarStatusUICtrl ueAvatar;

	public FrameStatusUICtrl ueFrame;

	public NameFxStatusUICtrl ueName;

	public TextMeshProUGUI txtScore;

	public RwBoxUICtrl rwBoxUI;

	public RwListUICtrl rwListUI;

	[HideInInspector]
	public WeeklyContestPlayerModel dataModel;

	public void SetRank(int rank)
	{
	}

	public void UpdateUIData(WeeklyContestPlayerModel newDataModel)
	{
	}

	public void ViewProfile()
	{
	}
}
