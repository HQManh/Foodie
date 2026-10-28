using System;

namespace CakeOrder.DataSO;

[Serializable]
public class FameRewardData
{
	public int nextLevel;

	public int nextThreshold;

	public FameMilestoneRewardType rewardType;

	public string rewardId;

	public string ingredients;

	public string recipes;

	public int rewardSoftCurrency;

	public int rewardHardCurrency;
}
