using UnityEngine;
using System;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;

namespace CakeOrder.InGame
{

[Serializable]
public class CakeLevelRuntimeDataSoftCurrency : IItemCurrencyHoldingSource
{
	private int _amountEarn;

	public string ItemId { get; private set; }

	public int AmountEarnBeforeMultiplier => _amountEarn;

	public int AmountEarnAddedByMultiplier => Mathf.RoundToInt((MultiplierEarn - 1f) * (float)_amountEarn);

	public int AmountEarn => Mathf.RoundToInt(MultiplierEarn * (float)_amountEarn);

	public int AmountSpend { get; private set; }

	public float MultiplierEarn { get; private set; }

	// The decompile multiplies by MultiplierEarn a second time here; that is taken to be a decompiler artefact, so Amount is earned minus spent.
	public int Amount => AmountEarn - AmountSpend;

	public event IItemCurrencyHoldingSource.OnAmountChangedDelegate onAmountChanged;

	public CakeLevelRuntimeDataSoftCurrency(float multiplier = 1f)
	{
		MultiplierEarn = multiplier;
		_amountEarn = 0;
	}

	public void Change(float amount)
	{
		Change(Mathf.RoundToInt(amount));
	}

	public void Change(int amount)
	{
		if (amount > 0)
		{
			Earn(amount);
		}
		else if (amount < 0)
		{
			int previous = AmountSpend;
			AmountSpend = previous - amount;
			this.onAmountChanged?.Invoke(previous, AmountSpend);
		}
	}

	public void Earn(float amount)
	{
		Earn(Mathf.RoundToInt(amount));
	}

	public void Earn(int amount)
	{
		_amountEarn += amount;
		this.onAmountChanged?.Invoke(AmountEarn - Mathf.RoundToInt(MultiplierEarn * (float)amount), AmountEarn);
	}

	public void Spend(float amount)
	{
		Spend(Mathf.RoundToInt(amount));
	}

	public void Spend(int amount)
	{
		int previous = AmountSpend;
		AmountSpend = amount;
		this.onAmountChanged?.Invoke(previous, amount);
	}

	public CakeLevelRuntimeDataSoftCurrency Clone()
	{
		CakeLevelRuntimeDataSoftCurrency copy = new CakeLevelRuntimeDataSoftCurrency();
		copy._amountEarn = _amountEarn;
		copy.MultiplierEarn = MultiplierEarn;
		return copy;
	}
}
}
