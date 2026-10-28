using System;
using System.Collections.Generic;

namespace CakeOrder.InGame;

[Serializable]
public class BoosterCounter
{
	public Dictionary<string, int> countBoosterTotal;

	public Dictionary<string, int> countBoosterByAds;

	public Dictionary<string, int> countBoosterByItem;

	public Dictionary<string, int> countBoosterByHardCurrency;

	public Dictionary<string, int> countBoosterCostHardCurrency;

	public void RecordUseBoosterByAds(string boosterId)
	{
	}

	public void RecordUseBoosterByItem(string boosterId, int amount = 1)
	{
	}

	public void RecordUseBoosterByHardCurrency(string boosterId, int price)
	{
	}

	public int GetTotalCostHardCurrency()
	{
		return 0;
	}

	private void RecordUseBooster(string boosterId)
	{
	}
}
