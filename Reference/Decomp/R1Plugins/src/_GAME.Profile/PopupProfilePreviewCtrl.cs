using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.Profile;

public class PopupProfilePreviewCtrl : PopupSingleton<PopupProfilePreviewCtrl>, IProfilePopupInstance
{
	[Header("BASE")]
	public AvatarStatusUICtrl avatarStatus;

	public FrameStatusUICtrl frameStatus;

	public NameFxStatusUICtrl nameFxStatus;

	public GameObject iconEditName;

	public Image imgTeamFlag;

	public TextMeshProUGUI txtTeamName;

	public TextMeshProUGUI txtLevel;

	public Button btnTeamInfo;

	public Button btnViewCustomRoom;

	public List<Button> btnEditProfile;

	[Header("STAT")]
	public TextMeshProUGUI txtFirstTryWin;

	public TextMeshProUGUI txtStageRaceWin;

	public TextMeshProUGUI txtDreamyTowerMax;

	public TextMeshProUGUI txtLiveSendCount;

	public TextMeshProUGUI txtLiveRecvCount;

	public TextMeshProUGUI txtWeeklyContestTop1;

	public TextMeshProUGUI txtAreaCompleted;

	[Header("SYSTEM")]
	public GameObject objCreatedTime;

	public TextMeshProUGUI txtCreatedTime;

	public TextMeshProUGUI txtUserId;

	public Button btnCopyUserId;

	[Header("RUNTIME")]
	private ProfileDbModel _previewData;

	private LegacyProfilePopupOpenArgs _openArgs;

	private int _profileCallbackId;

	public string TargetUserId => null;

	public int RouterGeneration => 0;

	protected override void Awake()
	{
	}

	public void Open(ProfileDbModel previewData)
	{
	}

	public void Open(ProfileDbModel previewData, LegacyProfilePopupOpenArgs args)
	{
	}

	private void SetEditListeners(bool enabled)
	{
	}

	private void UnsubscribeProfileEdit()
	{
	}

	private void CheckFirstOpen()
	{
	}

	private void LoadPreviewUIData()
	{
	}

	private static void SetStatCellActive(TMP_Text countText, bool active)
	{
	}

	private void UpdateProfileOnEdit()
	{
	}

	private void OpenPopupEditProfile()
	{
	}

	private void OpenPopupTeamInfo()
	{
	}

	private void OpenCustomRoom()
	{
	}

	private void CopyUserID()
	{
	}

	public void Supersede()
	{
	}

	protected override void OnDestroy()
	{
	}
}
