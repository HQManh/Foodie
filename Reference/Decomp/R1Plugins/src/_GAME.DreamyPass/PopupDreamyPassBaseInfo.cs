using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.Profile;

namespace _GAME.DreamyPass;

[Serializable]
public class PopupDreamyPassBaseInfo
{
	public TextMeshProUGUI txtTime;

	public List<Button> btnInfo;

	public Button btnActivate;

	public GameObject tagActivated;

	public Slider sliderPoint;

	public TextMeshProUGUI txtPoint;

	public TextMeshProUGUI txtLevel;

	[Header("DECO")]
	public AvatarStatusUICtrl decoAvatar;

	public NameFxStatusUICtrl decoNameFx;

	[Header("RUNTIME")]
	private PopupDreamyPassCtrl _parent;

	private int _cbTick;

	private int _cbData;

	public void Init(PopupDreamyPassCtrl parent)
	{
	}

	public void Dispose()
	{
	}

	private void UpdateUITime()
	{
	}

	private void UpdateUIData()
	{
	}

	private void OpenPopupInfo()
	{
	}

	private void OpenPopupActivate()
	{
	}
}
