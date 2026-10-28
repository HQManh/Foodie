using System;

namespace CookingGraph;

[Serializable]
public sealed class BotPickCommand
{
	public long commandId;

	public long observedRevision;

	public int queueIndex;

	public string expectedItemId;

	public float score;

	public bool randomFallback;

	public CookingBotPickingStrategy pickingStrategy;

	public CookingBotPickingStrategy strategyMode;

	public CookingBotWorkWaitStrategy workWaitStrategy;

	public float intelligent;

	public float pickIntervalSeconds;
}
