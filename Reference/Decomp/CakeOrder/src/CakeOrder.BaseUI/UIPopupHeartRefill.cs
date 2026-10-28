using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.BaseUI;

public class UIPopupHeartRefill : UICakePopup
{
	[SerializeField]
	private Button _btnUseAds;

	[SerializeField]
	private Button _btnUseGoldFull;

	[SerializeField]
	private TextMeshProUGUI _txtGoldRequired;

	[SerializeField]
	private Color _colorGoldEnough;

	[SerializeField]
	private Color _colorGoldNotEnough;

	[SerializeField]
	private float _delayAutoCloseAfterRecoverFull;

	private Action _onSuccess;

	private const string KEY_ACTION_REFILL_HEART = "refill_heart";

	private const string KEY_ACTION_RECOVER_HEART_BY_ADS = "ads_heart";

	public override void HideByBackButton()
	{
	}

	protected override void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	public void SetCallbackOnSuccess(Action onSuccess)
	{
	}

	private void OnHeartStatusChanged(int oldAmount, int newAmount)
	{
	}

	private void OnUnlimitedHeartActivated()
	{
	}

	private void OnCurrencyChanged(string currencyId, int oldAmount, int newAmount)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	private void UpdateTexts()
	{
	}

	private void UpdateButtons()
	{
	}

	private void OnClickUseGoldFull()
	{
	}

	private void OnClickUseAds()
	{
	}

	private void TriggerSuccess()
	{
	}
}
