using System;
using System.Collections.Generic;
using UnityEngine;

namespace CookingGraph;

[Serializable]
public sealed class CookingBotFailureKnowledge
{
	public int version;

	[Min(0f)]
	public int failureCount;

	[Range(0f, 3f)]
	public float gridPressure;

	[Range(0f, 3f)]
	public float dirtyPressure;

	[Range(0f, 3f)]
	public float urgencyPressure;

	[Range(0f, 3f)]
	public float scarcityPressure;

	[Range(0f, 3f)]
	public float chainPressure;

	[Range(0f, 3f)]
	public float randomPressure;

	[Range(0f, 3f)]
	public float pacingPressure;

	[Min(0f)]
	public int attemptedPickingStrategyMask;

	public bool hasRecommendedPickingStrategy;

	public CookingBotPickingStrategy recommendedPickingStrategy;

	public bool strategySearchExhausted;

	public List<CookingBotCustomerFailureMemory> customerPriorities;

	[Min(1f)]
	public int adaptiveStrategyPickInterval;

	[Min(0f)]
	public int adaptiveFailureCount;

	public bool adaptiveStrategyExhausted;

	internal void Accumulate(CookingBotFailureReport report, float peakGridRatio, float peakDirtyRatio, float randomPickRatio, float peakConcurrentWorkRatio, CookingBotPickingStrategy failedStrategy, IEnumerable<CookingBotCustomerFailureMemory> failedCustomers)
	{
	}

	internal void PrepareForNextRun()
	{
	}

	internal void ApplyTo(EstimatorBotSettings settings)
	{
	}

	private static float Pressure(float current, float delta, float retain)
	{
		return 0f;
	}

	private static float Clamp(float value, float min, float max)
	{
		return 0f;
	}

	private void RefreshRecommendedStrategy()
	{
	}

	private void MergeFailedCustomers(IEnumerable<CookingBotCustomerFailureMemory> failedCustomers)
	{
	}

	private float StrategyScore(CookingBotPickingStrategy strategy)
	{
		return 0f;
	}
}
