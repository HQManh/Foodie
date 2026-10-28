using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameUI;
using _GAME.Profile;

namespace _GAME.DreamyPass;

public class PopupDreamyPassActivateCtrl : PopupSingleton<PopupDreamyPassActivateCtrl>
{
	public TextMeshProUGUI txtTimeLeft;

	public AvatarStatusUICtrl decoAvatar;

	public NameFxStatusUICtrl decoNameFx;

	public List<GameObject> rwItemClone;

	public Button btnActivatePass;

	public TextMeshProUGUI txtPassPrice;

	private int _callbackTickId;

	protected override void Awake()
	{
	}

	public override void Open()
	{
	}

	protected override void OnDestroy()
	{
	}

	private void UpdateUITime()
	{
	}

	private void PurchaseActivatePass()
	{
	}
}
