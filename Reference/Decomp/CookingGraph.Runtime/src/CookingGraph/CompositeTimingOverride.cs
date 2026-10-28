using System;
using UnityEngine;

namespace CookingGraph;

[Serializable]
public sealed class CompositeTimingOverride
{
	public bool enabled;

	public CompositeNodeAsset composite;

	[Min(0f)]
	public float duration;
}
