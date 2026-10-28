using UnityEngine;

namespace CookingGraph;

public sealed class CompositeNodeAsset : CookingNodeAsset
{
	public bool orderable;

	public bool toppingRequired;

	public bool preMerge;

	public bool ordering;

	public CompositeNodeAsset processedFrom;

	public string processId;

	[TextArea]
	public string combinationRulesJson;

	public string customerSpaceHeight;

	public float mergeDuration;
}
