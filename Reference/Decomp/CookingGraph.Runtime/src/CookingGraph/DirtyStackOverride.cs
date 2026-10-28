using System;
using UnityEngine;

namespace CookingGraph;

[Serializable]
public sealed class DirtyStackOverride
{
	public bool enabled;

	public DirtyNodeAsset dirty;

	[Min(1f)]
	public int maxStack;
}
