using System;
using System.Collections.Generic;
using CookingGraph.Execution;

namespace CookingGraph;

[Serializable]
public sealed class BotGameState
{
	public long revision;

	public float gameplayTimeSeconds;

	public bool isPlaying;

	public CookingServingMode servingMode;

	public List<BotQueueLaneState> visibleQueues;

	public List<BotPickupOption> pickupables;

	public BotGridState grid;

	public BotSaveMeBagState saveMeBag;

	public List<BotCommittedIngredientState> committedIngredients;

	public int activeToolProcessCount;

	public int activeMergeAnimationCount;

	public List<BotCustomerOrderState> customerOrders;

	public List<BotPreviewOrderState> previewOrders;

	public bool previewOrdersBlockedByBoss;

	public int remainingCustomerCount;

	public int eatingCustomerCount;

	public List<int> timedOutCustomerIndices;
}
