using System;

namespace CookingGraph;

[Serializable]
public sealed class MergeDurationOverrideData
{
	public IngredientNodeAsset ingredient;

	public CompositeNodeAsset composite;

	public float mergeDuration;
}
