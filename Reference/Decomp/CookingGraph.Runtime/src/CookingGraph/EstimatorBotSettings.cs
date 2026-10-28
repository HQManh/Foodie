using System;
using CookingGraph.Execution;
using UnityEngine;

namespace CookingGraph;

[Serializable]
public sealed class EstimatorBotSettings
{
	[Range(0f, 1f)]
	public float intelligent;

	[Min(0f)]
	public float scoreBase;

	[Min(0f)]
	public float scoreReady;

	[Min(0f)]
	public float scoreBlocked;

	[Min(0f)]
	public float scoreBlockedTight;

	[Min(0f)]
	public float scoreSweeper;

	[Min(0f)]
	public float scoreSweeperUrgent;

	[Range(0f, 1f)]
	public float previewConfidence;

	[Min(0f)]
	public float depthBonusPerLevel;

	[Min(0f)]
	public float depthBonusCap;

	[Min(0f)]
	public float multiInputBaseBonus;

	[Min(0f)]
	public float multiInputBonus;

	[Min(0f)]
	public float nearCompletionBonus;

	[Min(0f)]
	public float customerPositionDecay;

	[Min(0f)]
	public float scarcityFactor;

	[Min(0f)]
	public float scarcityCap;

	[Min(0f)]
	public float lastInputBonusMulti;

	[Min(0f)]
	public float lastInputBonusSingle;

	[Range(0f, 1f)]
	public float rowDecay;

	[Min(0f)]
	public float detourPenalty;

	[Min(0f)]
	public float detourPenaltyTight;

	[Range(0f, 1f)]
	public float gridTightThreshold;

	[Min(0f)]
	public float pickIntervalSeconds;

	[Min(1f)]
	public int adaptiveStrategyPickInterval;

	public CookingBotWorkWaitStrategy workWaitStrategy;

	public CookingServingMode servingMode;

	[Min(0f)]
	public int visibleLookaheadRows;

	public bool respectHiddenStatus;

	public int randomSeed;

	public EstimatorBotSettings ForStrategy(CookingBotPickingStrategy strategy)
	{
		return null;
	}
}
