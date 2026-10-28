using System;

namespace CookingGraph;

[Serializable]
public sealed class BotCommittedIngredientState
{
	public IngredientNodeAsset ingredient;

	public float amount;

	public string sourceItemId;
}
