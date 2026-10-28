using System;

namespace CookingGraph;

[Serializable]
public sealed class BotOrderSlotState
{
	public IngredientNodeAsset ingredient;

	public bool filled;

	public bool claimed;

	public bool isBase;

	public bool gateOpen;
}
