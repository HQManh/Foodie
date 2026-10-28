using System;
using CakeOrder.BaseUI;
using UnityEngine;
using Utilities;

namespace CakeOrder.InGame;

public class UIInLevelHUDRelaxMode : UIElementAbstract
{
	[SerializeField]
	private UICurrencyCounter _softCurrencyCounter;

	[SerializeField]
	private UIInGameNumberCounter _customerCounter;

	[SerializeField]
	private UICurrencyCounter _hardCurrencyCounter;

	[SerializeField]
	private UIAnimShowHideControl[] _animSequence;

	private bool _isShownFirstTime;

	public void SetUp(CakeLevelRuntimeData runtimeData)
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
}
