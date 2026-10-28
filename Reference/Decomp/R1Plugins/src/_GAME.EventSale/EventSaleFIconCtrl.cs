using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.EventSale;

public class EventSaleFIconCtrl : SingletonFI<EventSaleFIconCtrl>
{
	public GameObject objFeature;

	public GameObject iconNotify;

	public TextMeshProUGUI txtTime;

	public Button btnFeature;

	private int _callbackTickId;

	public override void OnSetUp(Action newCallback)
	{
	}

	protected override void OnDestroy()
	{
	}

	public override void OnUpdateData()
	{
	}

	public override void OnUpdateTime()
	{
	}

	private void OpenPopupFeature()
	{
	}
}
