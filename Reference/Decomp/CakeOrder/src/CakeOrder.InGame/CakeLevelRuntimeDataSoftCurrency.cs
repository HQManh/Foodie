using System;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;

namespace CakeOrder.InGame;

[Serializable]
public class CakeLevelRuntimeDataSoftCurrency : IItemCurrencyHoldingSource
{
	private int _amountEarn;

	public string ItemId { get; private set; }

	public int AmountEarnBeforeMultiplier => 0;

	public int AmountEarnAddedByMultiplier => 0;

	public int AmountEarn => 0;

	public int AmountSpend { get; private set; }

	public float MultiplierEarn { get; private set; }

	public int Amount => 0;

	public event OnAmountChangedDelegate onAmountChanged
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public CakeLevelRuntimeDataSoftCurrency(float multiplier = 1f)
	{
	}

	public void Change(float amount)
	{
	}

	public void Change(int amount)
	{
	}

	public void Earn(float amount)
	{
	}

	public void Earn(int amount)
	{
	}

	public void Spend(float amount)
	{
	}

	public void Spend(int amount)
	{
	}

	public CakeLevelRuntimeDataSoftCurrency Clone()
	{
		return null;
	}
}
