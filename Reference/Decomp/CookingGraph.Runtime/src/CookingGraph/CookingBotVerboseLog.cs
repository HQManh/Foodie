using System;

namespace CookingGraph;

[Serializable]
public sealed class CookingBotVerboseLog
{
	public CookingBotVerboseLogKind kind;

	public string message;

	public long revision;

	public float gameplayTimeSeconds;

	public long commandId;

	public int queueIndex;

	public string itemId;

	public float score;

	public bool randomFallback;

	public int pendingPickCount;

	public float nextPickAtSeconds;

	public int projectedGridLoad;

	public int usableGridCapacity;

	public CookingBotPickingStrategy pickingStrategy;

	public CookingBotPickingStrategy strategyMode;

	public CookingBotWorkWaitStrategy workWaitStrategy;

	public CookingBotWorkWaitStrategy effectiveWorkWaitStrategy;

	public bool hasRecommendedPickingStrategy;

	public CookingBotPickingStrategy recommendedPickingStrategy;

	public bool strategySearchExhausted;

	public int adaptiveStrategyPickInterval;

	public float intelligent;

	public float pickIntervalSeconds;

	public int activeToolProcessCount;

	public int activeMergeAnimationCount;

	public int remainingCustomerCount;
}
