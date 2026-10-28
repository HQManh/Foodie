using System;
using UnityEngine;

namespace Utilities;

[Serializable]
public struct RandomRangeWithStep
{
	[SerializeField]
	private float min;

	[SerializeField]
	private float max;

	[SerializeField]
	private float step;

	public static RandomRangeWithStep Default => default(RandomRangeWithStep);

	public float GetRandomValue()
	{
		return 0f;
	}

	public RandomRangeWithStep(float min, float max, float modulo)
	{
		this.min = 0f;
		this.max = 0f;
		step = 0f;
	}

	public static RandomRangeWithStep Constant(float value)
	{
		return default(RandomRangeWithStep);
	}
}
