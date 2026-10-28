using System.Collections.Generic;
using UnityEngine;

namespace CookingGraph;

public sealed class CookingGraphAsset : ScriptableObject
{
	public int schemaVersion;

	[HideInInspector]
	[TextArea]
	public string sourceGraphJson;

	public CookingMapData map;

	public CookingIdTables idTable;

	public List<IngredientNodeAsset> ingredients;

	public List<ToolNodeAsset> tools;

	public List<GroupNodeAsset> groups;

	public List<CompositeNodeAsset> composites;

	public List<DirtyNodeAsset> dirtyObjects;

	public List<MergeDurationOverrideData> mergeDurationOverrides;

	public List<ExclusiveIngredientRule> exclusiveRules;

	[Header("Runtime profiles (not exported into graph JSON)")]
	[Tooltip("Null uses the bundled default. A run can explicitly replace this profile.")]
	public CookingExecutionProfile executionProfile;

	[Tooltip("Optional non-destructive graph timing/recipe overrides. Preserved on graph synchronization.")]
	public CookingGraphOverrideProfile runtimeOverrides;

	public List<ProcessEdgeAssetData> processEdges;

	public List<CompositeProcessData> compositeProcesses;

	public List<GridAssemblyData> gridAssemblies;

	public List<PreservationEdgeAssetData> preservationEdges;

	public List<NodeEdgeAssetData> baseEdges;

	public List<NodeEdgeAssetData> toppingEdges;

	public List<OptionEdgeAssetData> optionEdges;

	public List<DirtyEdgeAssetData> leavesDirtyEdges;

	public CookingRuntimeSettings ResolveRuntimeSettings(CookingExecutionProfile executionOverride = null, CookingGraphOverrideProfile graphOverride = null, CookingCustomerEatingProfile eatingOverride = null)
	{
		return null;
	}

	public float MergeDurationFor(IngredientNodeAsset ingredient, CompositeNodeAsset composite, CookingGraphOverrideProfile profileOverride = null)
	{
		return 0f;
	}

	internal float AuthoredMergeDurationFor(IngredientNodeAsset ingredient, CompositeNodeAsset composite)
	{
		return 0f;
	}
}
