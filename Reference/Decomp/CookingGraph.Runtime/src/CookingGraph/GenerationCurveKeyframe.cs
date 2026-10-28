using System;
using UnityEngine;

namespace CookingGraph;

[Serializable]
public sealed class GenerationCurveKeyframe
{
	[Range(0f, 1f)]
	public float x;

	[Range(0f, 1f)]
	public float y;

	public float tangent;
}
