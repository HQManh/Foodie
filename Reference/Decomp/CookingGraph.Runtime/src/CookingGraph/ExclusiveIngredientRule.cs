using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class ExclusiveIngredientRule
{
	public List<IngredientNodeAsset> ingredients;
}
