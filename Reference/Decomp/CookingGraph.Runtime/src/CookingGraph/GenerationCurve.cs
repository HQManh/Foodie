using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class GenerationCurve
{
	public GenerationCurveRange range;

	public List<GenerationCurveKeyframe> keyframes;

	public float Evaluate(float realX)
	{
		return 0f;
	}

	private static float EvaluateNormalized(IReadOnlyList<GenerationCurveKeyframe> frames, float x)
	{
		return 0f;
	}

	private static float Cubic(float p0, float p1, float p2, float p3, float t)
	{
		return 0f;
	}

	private static float Clamp01(float value)
	{
		return 0f;
	}
}
