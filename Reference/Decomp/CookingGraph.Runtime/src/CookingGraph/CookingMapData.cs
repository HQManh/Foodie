using System;
using UnityEngine;

namespace CookingGraph;

[Serializable]
public sealed class CookingMapData
{
	public string id;

	public string name;

	public int gridWidth;

	public int gridHeight;

	public int dirtyStackHeight;

	public int visibleRows;

	[Tooltip("Map-wide cooking speed from the graph. Every process/tool duration is divided by it, so 2 cooks twice as fast. A graph authored before this field imports as 1.")]
	[Min(0.05f)]
	public float processSpeedMultiplier;

	[Tooltip("Map-wide merge speed from the graph. Every topping merge duration is divided by it, composite defaults and ingredient overrides alike. A graph authored before this field imports as 1.")]
	[Min(0.05f)]
	public float mergeSpeedMultiplier;
}
