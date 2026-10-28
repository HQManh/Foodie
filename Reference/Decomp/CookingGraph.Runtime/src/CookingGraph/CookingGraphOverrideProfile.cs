using System.Collections.Generic;
using UnityEngine;

namespace CookingGraph;

[CreateAssetMenu(menuName = "Cooking Graph/Profiles/Graph Override Profile", fileName = "CookingGraphOverrides")]
public sealed class CookingGraphOverrideProfile : ScriptableObject
{
	[Tooltip("Optional scope. When set, applying this profile to a different graph is an error.")]
	public CookingGraphAsset graph;

	public CookingGraphOverrideProfile parent;

	[Tooltip("Enable hasValue to divide the final merge duration by this speed, including composite and ingredient-merge overrides: 2 merges twice as fast. Stacks with the graph's own mergeSpeedMultiplier. First enabled value in the profile chain wins; applied once. Takes effect on a new run.")]
	public OptionalFloat mergeSpeedMultiplier;

	[Tooltip("Enable hasValue to divide the final process duration by this speed, including tool and recipe duration overrides: 2 cooks twice as fast. Stacks with the graph's own processSpeedMultiplier. First enabled value in the profile chain wins; applied once, including chain-tool times. Takes effect on a new run.")]
	public OptionalFloat processSpeedMultiplier;

	public List<CompositeTimingOverride> composites;

	public List<IngredientMergeTimingOverride> ingredientMerges;

	public List<ToolTimingOverride> tools;

	public List<RecipeRuntimeOverride> recipes;

	public List<DirtyStackOverride> dirtyStacks;

	private static CookingGraphOverrideProfile fallback;

	public static CookingGraphOverrideProfile Default => null;
}
