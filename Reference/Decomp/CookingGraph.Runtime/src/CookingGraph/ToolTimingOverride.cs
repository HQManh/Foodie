using System;
using UnityEngine;

namespace CookingGraph;

[Serializable]
public sealed class ToolTimingOverride
{
	public bool enabled;

	public ToolNodeAsset tool;

	[Min(0f)]
	public float duration;
}
