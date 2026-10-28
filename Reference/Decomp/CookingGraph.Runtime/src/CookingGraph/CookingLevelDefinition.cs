using System;
using System.Collections.Generic;

namespace CookingGraph;

public sealed class CookingLevelDefinition
{
	public CookingGraphAsset Graph;

	public IngredientQueueData Queues;

	public GridLayoutData Grid;

	public CustomerOrderData Customers;

	public string Weather;

	public int ServingLimit;

	public bool DetectDeadlock;

	public bool ContinueAfterTimeout;

	public bool WantedPicksOnly;

	public int RandomSeed;

	public int SaveMeMaxUses;

	public bool SpiderCleansAllStacks;

	public bool SaveMeClearsDirty;

	public int? SaveMeMaxCells;

	public bool AllowPlayerAssistance;

	public double GridWarningSeconds;

	public double DeadlockWarningSeconds;

	public string ExpectedRuntimeFingerprint;

	public HashSet<int> BossCustomers;

	public int[] BoosterCharges;

	public static CookingLevelDefinition FromGenerated(GeneratedCookingLevel asset, Func<CustomerData, bool> isBoss = null)
	{
		return null;
	}
}
