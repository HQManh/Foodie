using System;
using System.Collections.Generic;
using CookingGraph.Execution;

namespace CookingGraph;

public sealed class CookingRuntimeSettings
{
	private readonly Dictionary<Tuple<IngredientNodeAsset, CompositeNodeAsset>, float> merges;

	private readonly Dictionary<ToolNodeAsset, float> tools;

	private readonly Dictionary<ProcessEdgeAssetData, CookingProcessSettings> processes;

	private readonly Dictionary<DirtyNodeAsset, int> dirty;

	private readonly Dictionary<string, float> eating;

	private readonly float eatingDefault;

	private readonly float eatingBoss;

	public CookingExecutionConfig Execution { get; }

	public CookingGameplayDefaults Gameplay { get; }

	private CookingRuntimeSettings(CookingGraphAsset graph, CookingExecutionProfile execution, List<CookingGraphOverrideProfile> layers, List<CookingCustomerEatingProfile> eatingLayers)
	{
	}

	public static CookingRuntimeSettings Resolve(CookingGraphAsset graph, CookingExecutionProfile executionOverride = null, CookingGraphOverrideProfile graphOverride = null, CookingCustomerEatingProfile eatingOverride = null)
	{
		return null;
	}

	public float EatingSecondsFor(string customerId, bool boss)
	{
		return 0f;
	}

	public float MergeDurationFor(IngredientNodeAsset ingredient, CompositeNodeAsset composite)
	{
		return 0f;
	}

	public float ToolProcessTimeFor(ToolNodeAsset tool)
	{
		return 0f;
	}

	public CookingProcessSettings ProcessFor(ProcessEdgeAssetData edge)
	{
		return default(CookingProcessSettings);
	}

	public int DirtyStackLimitFor(DirtyNodeAsset node)
	{
		return 0;
	}

	public CookingExecution CreateExecution()
	{
		return null;
	}

	public CookingAssemblySlot AssemblySlot(IngredientNodeAsset ingredient, CompositeNodeAsset owner, int denseIngredient, int denseComposite, bool isTopping, IEnumerable<int> waitFor = null, string groupPath = "")
	{
		return null;
	}

	private static float MergeSpeed(CookingMapData map)
	{
		return 0f;
	}

	private static float ProcessSpeed(CookingMapData map)
	{
		return 0f;
	}

	private static void RequireSpeed(float value, string label)
	{
	}

	private static float AtSpeed(float duration, float speed)
	{
		return 0f;
	}

	internal static bool Matches(RecipeRuntimeOverride row, ProcessEdgeAssetData edge)
	{
		return false;
	}

	private static void ValidateLayer(CookingGraphAsset graph, CookingGraphOverrideProfile p)
	{
	}
}
