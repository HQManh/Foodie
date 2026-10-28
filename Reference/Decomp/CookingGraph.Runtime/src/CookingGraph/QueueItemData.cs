using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class QueueItemData
{
	public QueueItemKind kind;

	public int id;

	public int amount;

	public int index;

	public IngredientNodeAsset ingredient;

	public List<EffectData> effects;
}
