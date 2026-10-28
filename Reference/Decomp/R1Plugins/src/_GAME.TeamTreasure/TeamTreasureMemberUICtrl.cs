using TMPro;
using UnityEngine;
using _GAME.GameUI;
using _GAME.Profile;
using _GAME.Team;

namespace _GAME.TeamTreasure;

public class TeamTreasureMemberUICtrl : MonoBehaviour
{
	public GameObject objItem;

	public TextMeshProUGUI txtRank;

	public RwItemUICtrl rwItem;

	public TextMeshProUGUI txtPoint;

	[Header("USER_INFO")]
	public AvatarStatusUICtrl avatarStatus;

	public FrameStatusUICtrl frameStatus;

	public NameFxStatusUICtrl nameStatus;

	[Header("RUNTIME")]
	public int rank;

	public TeamMemberModel data;

	public void SetData(int newRank, TeamMemberModel newData)
	{
	}
}
