using System;

namespace CookingGraph;

[Serializable]
public sealed class BotQueueItemState
{
	public string itemId;

	public QueueItemKind kind;

	public IngredientNodeAsset ingredient;

	public BotQueueItemStatus status;

	public int amount;
}
