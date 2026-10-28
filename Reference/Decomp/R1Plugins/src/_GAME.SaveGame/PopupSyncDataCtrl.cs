using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameUI;
using _GAME.Profile;

namespace _GAME.SaveGame;

public class PopupSyncDataCtrl : PopupSingleton<PopupSyncDataCtrl>
{
	[Header("LOCAL")]
	public TextMeshProUGUI txtLevelLocal;

	public AvatarItemUICtrl avatarLocal;

	public FrameItemUICtrl frameLocal;

	public Button saveDataToServer;

	[Header("SERVER")]
	public TextMeshProUGUI txtLevelServer;

	public AvatarItemUICtrl avatarServer;

	public FrameItemUICtrl frameServer;

	public Button loadDataFromServer;

	[Header("RUNTIME")]
	private SaveGameModel _localData;

	private string _localJson;

	private SaveGameCodec.Parsed _serverData;

	private SaveGameServer.RawSave _serverRaw;

	protected override void Awake()
	{
	}

	public void Open(SaveGameModel localData, string localJson, SaveGameCodec.Parsed serverData, SaveGameServer.RawSave serverRaw)
	{
	}

	private void LoadDataCompare()
	{
	}

	private void LoadDataFromServer()
	{
	}

	private void SaveDataToServer()
	{
	}
}
