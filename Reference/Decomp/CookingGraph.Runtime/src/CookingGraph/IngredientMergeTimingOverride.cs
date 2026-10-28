using System;
using UnityEngine;

namespace CookingGraph;

[Serializable]
public sealed class IngredientMergeTimingOverride
{
	public bool enabled;

	public IngredientNodeAsset ingredient;

	public CompositeNodeAsset composite;

	[Min(0f)]
	public float duration;
}
