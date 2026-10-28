using System;

namespace CookingGraph;

[Serializable]
public sealed class ProcessInputAssetData
{
	public IngredientNodeAsset ingredient;

	public int slot;
}
