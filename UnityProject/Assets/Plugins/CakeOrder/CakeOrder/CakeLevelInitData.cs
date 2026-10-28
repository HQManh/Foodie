using System;
using System.Collections.Generic;
using CakeOrder.CakeOrderSubsystem;
using CakeOrder.DataSO;
using CakeOrder.HeartSystem;
using CakeOrder.InGame;
using UnityEngine;

namespace CakeOrder
{

[Serializable]
public class CakeLevelInitData
{
	[Header("Level Metadata")]
	public string mapId;

	public int mapIndex;

	public int levelIndex;

	public CookOrderLevelPlayMode playMode;

	public IngredientSpawnStyle ingredientSpawnStyle;

	public SingleLevelMetadata levelMetadata;

	[Header("Progress Data")]
	public int highestMapIndexPlayable;

	public int highestLevelIndexPlayable;

	public int attemptNumber;

	public bool isReplayAfterWin;

	public int winStreak;

	[Header("Map Definition")]
	public CakeMapSO mapSO;

	public MapCustomerPackSO customerPack;

	public MapAssetPackSO assetPackSO;

	public MapToolConfig toolConfig;

	public string[] pickupkableIngredientIds;

	public Dictionary<string, ToolUpgradeStat> toolUpgrades;

	[Header("Level Config")]
	public string customerOrderDataString;

	public LevelGridConfig gridConfig;

	public string gridDataString;

	public string ingredientQueueDataString;

	[Obsolete("Use new graph system")]
	public CustomerSpawnData[] customerSpawnData;

	[Obsolete("Use new graph system")]
	public IngredientQueueInLevel ingredientQueuesConfig;

	public IOrderPriceProvider orderPricer;

	[Header("Mechanics config")]
	public StackGameplayConfig.StackConfig stackConfig;

	public ServeSlotConfig.SlotConfig serveSlotConfig;

	public RestaurantParams restaurantParams;

	public InGameHeartRemoteConfig.HeartConfig heartConfig;

	public bool isLastLevelOfMap;

	[Header("Combo Mechanic")]
	public ComboMechanicParams comboMechanicParams;

	[Header("Holding Live - Live System")]
	public SystemHeartHolder liveHolder;

	[Header("Custom Data")]
	public Dictionary<string, object> customData;

	// Kept after the original fields so their offsets match the decompile.
	// Inferred from game code that reads emotion.percents and passes it to SetEmotionThresholds(int[]). Not verified.
	public EmotionThresholds emotion;

	[System.Serializable]
	public class EmotionThresholds
	{
		public int[] percents;
	}

	public bool IsFullData => mapSO != null;

	public ToolUpgradeStat GetToolUpgrade(string toolId)
	{
		if (!string.IsNullOrEmpty(toolId) && toolUpgrades != null && toolUpgrades.TryGetValue(toolId, out var stat))
		{
			return stat;
		}
		return default(ToolUpgradeStat);
	}

	public int GetToolLevel(string toolId)
	{
		return GetToolUpgrade(toolId).level;
	}

	public int GetOrderPrice(string encodedRecipe)
	{
		return orderPricer != null ? orderPricer.GetOrderPrice(encodedRecipe) : 0;
	}
}
}
