using System;
using System.Collections.Generic;

namespace CakeOrder.InGame
{

[Serializable]
public class BoosterCounter
{
	public Dictionary<string, int> countBoosterTotal = new Dictionary<string, int>();

	public Dictionary<string, int> countBoosterByAds = new Dictionary<string, int>();

	public Dictionary<string, int> countBoosterByItem = new Dictionary<string, int>();

	public Dictionary<string, int> countBoosterByHardCurrency = new Dictionary<string, int>();

	public Dictionary<string, int> countBoosterCostHardCurrency = new Dictionary<string, int>();

	public void RecordUseBoosterByAds(string boosterId)
	{
		RecordUseBooster(boosterId);
		Add(countBoosterByAds, boosterId, 1);
	}

	public void RecordUseBoosterByItem(string boosterId, int amount = 1)
	{
		RecordUseBooster(boosterId);
		Add(countBoosterByItem, boosterId, amount);
	}

	public void RecordUseBoosterByHardCurrency(string boosterId, int price)
	{
		RecordUseBooster(boosterId);
		Add(countBoosterByHardCurrency, boosterId, 1);
		Add(countBoosterCostHardCurrency, boosterId, price);
	}

	public int GetTotalCostHardCurrency()
	{
		int total = 0;
		foreach (int cost in countBoosterCostHardCurrency.Values)
		{
			total += cost;
		}
		return total;
	}

	private void RecordUseBooster(string boosterId)
	{
		Add(countBoosterTotal, boosterId, 1);
	}

	private static void Add(Dictionary<string, int> map, string key, int amount)
	{
		map.TryGetValue(key, out var current);
		map[key] = current + amount;
	}
}
}
