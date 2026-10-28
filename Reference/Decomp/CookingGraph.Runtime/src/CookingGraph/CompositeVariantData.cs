using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class CompositeVariantData
{
	public IngredientNodeAsset ingredient;

	public List<CompositeSelectionPart> parts;
}
