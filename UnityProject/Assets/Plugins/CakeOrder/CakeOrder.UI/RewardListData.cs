using System;
using System.Collections.Generic;
using CakeOrder.DataSO;
using UnityEngine;

namespace CakeOrder.UI
{

[Serializable]
public class RewardListData
{
	public List<IRewardItemInfo> rewards;

	public List<int> amounts;

	public List<Sprite> iconOverrides;

	public bool isPurchase;

	public string titleOverride;

	public int GetRewardAmount(int index)
	{
		return 0;
	}

	public Sprite GetIconOverride(int index)
	{
		return null;
	}

	public void AddReward(IRewardItemInfo rewardItemInfo, int amount = 1, Sprite iconOverride = null)
	{
	}
}
}
