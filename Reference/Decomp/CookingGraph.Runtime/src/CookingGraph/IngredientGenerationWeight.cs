using System;
using UnityEngine;

namespace CookingGraph;

[Serializable]
public sealed class IngredientGenerationWeight
{
	public IngredientNodeAsset ingredient;

	public int index;

	[Min(0f)]
	public float weight;
}
