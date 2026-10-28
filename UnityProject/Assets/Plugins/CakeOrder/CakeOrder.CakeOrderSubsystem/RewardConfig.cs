using System;

namespace CakeOrder.CakeOrderSubsystem
{

[Serializable]
public class RewardConfig
{
	public const int DefaultRwWin = 50;

	public int[] rwWinByDifficulty;

	public int lvShowBonusAds;

	public int[] bonusMuls;

	public int bonus;
}
}
