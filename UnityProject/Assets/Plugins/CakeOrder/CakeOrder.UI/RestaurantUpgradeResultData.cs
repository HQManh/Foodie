using System;
using System.Collections.Generic;
using CakeOrder.DataSO;
using UnityEngine;

namespace CakeOrder.UI
{

[Serializable]
public class RestaurantUpgradeResultData
{
	public int oldLevel;

	public int newLevel;

	public Dictionary<RestaurantUpgradeStat, Vector2Int> statChanged;

	public RewardListData rewards;
}
}
