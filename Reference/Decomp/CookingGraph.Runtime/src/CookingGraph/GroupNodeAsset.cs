using UnityEngine;

namespace CookingGraph;

public sealed class GroupNodeAsset : CookingNodeAsset
{
	[Min(0f)]
	public int minQuantity;

	public OptionalInt maxQuantity;

	public bool mutuallyExclusive;
}
