using System;
using System.Collections.Generic;
using UnityEngine;

namespace CookingGraph;

[Serializable]
public sealed class CustomerOrderGenerationOptions
{
	public List<int> dishCounts;

	public List<IngredientGenerationWeight> weights;

	public GenerationCurve curve;

	[Min(1f)]
	public int maxDishSlots;
}
