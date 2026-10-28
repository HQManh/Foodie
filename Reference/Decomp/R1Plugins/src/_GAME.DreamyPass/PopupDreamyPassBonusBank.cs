using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace _GAME.DreamyPass;

[Serializable]
public class PopupDreamyPassBonusBank
{
	public GameObject lockActivate;

	public GameObject txtDescLock;

	public GameObject txtDescActivated;

	public Slider sliderProgress;

	public TextMeshProUGUI txtProgress;

	private PopupDreamyPassCtrl _parent;

	private int _cbData;

	public void Init(PopupDreamyPassCtrl parent)
	{
	}

	public void Dispose()
	{
	}

	private void UpdateUIData()
	{
	}
}
