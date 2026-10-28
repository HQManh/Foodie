using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class BotGridCellState
{
	public BotGridItemKind kind;

	public bool canHoldItem;

	public IngredientNodeAsset ingredient;

	public List<IngredientNodeAsset> ingredients;

	public int usesLeft;

	public int dirtyCount;
}
