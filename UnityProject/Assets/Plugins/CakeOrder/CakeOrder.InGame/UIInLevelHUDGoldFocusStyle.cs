using System;
using CakeOrder.BaseUI;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.InGame
{

public class UIInLevelHUDGoldFocusStyle : UIElementAbstract
{
	[SerializeField]
	private UILevelGoldCounterStarProgress _softCurrencyCounterWithStarProgress;

	[SerializeField]
	private UIInGameNumberCounter _customerCounter;

	[SerializeField]
	private UIInGameNumberCounter _heartCounter;

	[SerializeField]
	private UIButtonHUD _btnWeatherForecast;

	[SerializeField]
	private Image _iconWeatherForecast;

	private bool _isShownFirstTime;

	private bool _isHeartEnabled;

	private void Awake()
	{
	}

	public void SetUp(CakeLevelInitData initData, CakeLevelRuntimeData runtimeData)
	{
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void HideElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void ShowElementImmediate()
	{
	}

	protected override void HideElementImmediate()
	{
	}

	private void OnClickBtnWeatherForecast(UIButtonHUD hUD)
	{
	}
}
}
