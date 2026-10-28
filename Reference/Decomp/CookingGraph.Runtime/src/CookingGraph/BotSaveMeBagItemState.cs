using System;

namespace CookingGraph;

[Serializable]
public sealed class BotSaveMeBagItemState
{
	public string itemId;

	public IngredientNodeAsset ingredient;
}
