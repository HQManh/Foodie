using System;
using UnityEngine;

namespace CookingGraph;

[Serializable]
public sealed class QueueShuffleRange
{
	public QueueShuffleKind kind;

	[Min(0f)]
	public int value;

	public GenerationCurve curve;
}
