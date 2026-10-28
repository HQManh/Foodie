using System;

namespace CookingGraph;

[Serializable]
public sealed class BotDecision
{
	public BotPickupOption option;

	public float score;

	public bool randomFallback;

	public int customerIndex;

	public CookingBotPickingStrategy pickingStrategy;

	public CookingBotPickingStrategy strategyMode;

	public CookingBotWorkWaitStrategy workWaitStrategy;

	public float intelligent;

	public float pickIntervalSeconds;

	public bool deferredByGridPressure;

	public int projectedGridLoad;

	public int usableGridCapacity;
}
