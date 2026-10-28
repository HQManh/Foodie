using System;
using UnityEngine;

namespace CookingGraph;

[Serializable]
public sealed class CookingBotFailureReport
{
	public CookingBotFailureReason reason;

	[Range(-1f, 1f)]
	public float progress01;
}
