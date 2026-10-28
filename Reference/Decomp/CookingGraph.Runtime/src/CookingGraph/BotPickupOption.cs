using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class BotPickupOption
{
	public int queueIndex;

	public string itemId;

	public List<string> consumedItemIds;

	public List<IngredientNodeAsset> ingredients;

	public bool picksSweeper;

	public int footprint;
}
