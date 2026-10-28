using System;
using System.Collections.Generic;
using UnityEngine;

namespace CookingGraph;

[Serializable]
public sealed class RecipeRuntimeOverride
{
	public bool enabled;

	public ToolNodeAsset tool;

	public IngredientNodeAsset output;

	[Tooltip("Exact multiset of ingredient + input point. Stable across process-edge reordering. Must identify exactly one recipe.")]
	public List<ProcessInputAssetData> inputs;

	public OptionalFloat duration;

	public bool overrideAuto;

	public bool auto;

	public OptionalInt outputAmount;
}
