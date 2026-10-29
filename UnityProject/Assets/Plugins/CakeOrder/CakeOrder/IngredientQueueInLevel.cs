using System;
using UnityEngine;

namespace CakeOrder
{

[Serializable]
public class IngredientQueueInLevel
{
	[Obsolete("Use encodedQueues instead")]
	public int shuffleDistance;

	[Obsolete("Use encodedQueues instead")]
	public float ingredientMultiplier;

	[Header("Fixed Queue")]
	public SingleIngredientQueueInLevel[] encodedQueues;

	public IngredientSlotGroup[] combinedSlotGroups;

	public IngredientSlotGroup[] linkedSlotGroups;

	public bool IsHaveLinkedSlotGroups => linkedSlotGroups != null && linkedSlotGroups.Length != 0;

	public bool IsHaveCombinedSlotGroups => combinedSlotGroups != null && combinedSlotGroups.Length != 0;
}
}
