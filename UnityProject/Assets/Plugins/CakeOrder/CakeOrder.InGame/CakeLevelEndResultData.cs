using System;
using System.Collections.Generic;

namespace CakeOrder.InGame
{

[Serializable]
public class CakeLevelEndResultData
{
	public GameResultType resultType;

	public LevelEndReason endReason;

	public float durationSeconds;

	public int heartRemaining;

	public int stars;

	public int starBefore;

	public int starEarned;

	public CakeLevelRuntimeDataCustomer customerData;

	public int softCurrencyBefore;

	public int softCurrencyEarned;

	public int softCurrencyBoost;

	public int hardCurrencyBefore;

	public int hardCurrencyEarned;

	public Dictionary<string, int> countBoosterUsage;

	public Dictionary<string, int> customData;

	public int TotalSoftCurrencyEarned => 0;
}
}
