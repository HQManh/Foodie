using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.Profile;

namespace _GAME.Leaderboard;

public class PlayerRankItemUICtrl : MonoBehaviour
{
	public GameObject objItem;

	public TextMeshProUGUI txtRank;

	public AvatarStatusUICtrl avatarStatus;

	public FrameStatusUICtrl frameStatus;

	public NameFxStatusUICtrl nameFxStatus;

	public GameObject objTeamInfo;

	public Image imgTeamFlag;

	public TextMeshProUGUI txtTeamName;

	public TextMeshProUGUI txtLevel;

	public Button btnShowInfo;

	[Header("TOP_RANK")]
	public Image imgRankTop;

	public Sprite[] sprRankTop;

	[HideInInspector]
	public ProfileDbModel model;

	[HideInInspector]
	public ProfileReadEnvelope envelope;

	private void Start()
	{
	}

	public void UpdateUIData(long rank, ABIServerRankPlayerItemModel rankModel)
	{
	}

	public void UpdateUIData(long rank, ProfileDbModel profileModel)
	{
	}

	public void UpdateUIData(long rank, ProfileReadEnvelope profileEnvelope)
	{
	}

	private void SetRank(long rank)
	{
	}

	public void UpdateUIData(ProfileDbModel profileModel)
	{
	}

	private void ViewProfile()
	{
	}
}
