using System;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;

namespace CakeOrder.HeartSystem;

[Serializable]
public class SystemHeartHolder : IItemCurrencyHoldingSource
{
	public string ItemId { get; private set; }

	public int Amount { get; private set; }

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

	public SystemHeartHolder(string itemId, int initAmount)
	{
	}

	public void Clear()
	{
	}
}
