using System;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.InGame
{

public class UILevelGoldCounterStarProgress : UICurrencyCounter
{
	[SerializeField]
	private Slider _slider;

	[SerializeField]
	private UILevelGoldCounterStarMilestone[] _itemStarMilestones;

	[SerializeField]
	private UILevelGoldCounterStarMilestone.VisualConfig _itemStarMilestonesVisualConfig;

	public float widthFillArea;

	public float milestonesMinSpacing;

	public float offsetXEnd;

	private int[] _starMilestones;

	private CakeLevelRuntimeDataSoftCurrency _softCurrencyData;

	public bool IsHaveMilestone => false;

	public void SetUp(int[] starMilestones, CakeLevelRuntimeDataSoftCurrency softCurrencyData)
	{
	}

	private void OnSoftCurrencyDataAmountChanged(int oldAmount, int newAmount)
	{
	}

	public override void ShowImmediate()
	{
	}

	public override void Show(Action onDoneAnim, float delay)
	{
	}

	protected override void UpdateVisualAmount(float amount)
	{
	}

	public override void UpdateAmount(int value, Action onDoneAnim = null)
	{
	}

	public override void UpdateAmountImmediate(int value)
	{
	}
}
}
