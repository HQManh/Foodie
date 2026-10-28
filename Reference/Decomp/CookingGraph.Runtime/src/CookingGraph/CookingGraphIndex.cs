using System.Collections.Generic;
using CookingGraph.Execution;

namespace CookingGraph;

internal sealed class CookingGraphIndex
{
	internal sealed class Recipe
	{
		internal int Tool;

		internal int Output;

		internal int Amount;

		internal bool Auto;

		internal bool Whole;

		internal GridAssemblyData Assembly;

		internal double Duration;

		internal (int Ingredient, int Point)[] Inputs;

		internal int[] Chain;
	}

	internal sealed class Tool
	{
		internal (int Point, int Lane)[] Layout;

		internal int Lanes;

		internal int Buffers;

		internal double Duration;

		internal int Flat(int point, int lane)
		{
			return 0;
		}
	}

	internal sealed class Dish
	{
		internal int Composite;

		internal int Dirty;

		internal bool Full;

		internal CookingAssemblySlot[] Slots;

		internal CookingAssemblySlot[] AuthoredSlots;
	}

	internal readonly IngredientNodeAsset[] Ingredients;

	internal readonly CompositeNodeAsset[] Composites;

	internal readonly Tool[] Tools;

	internal readonly Recipe[][] Inputs;

	internal readonly Recipe[][] Recipes;

	internal readonly Recipe[] Producer;

	internal readonly Recipe[] GridAssemblies;

	internal readonly int[] DemandOrder;

	internal readonly int[][] Preservers;

	internal readonly bool[] Servable;

	internal readonly (int Tool, int Point)?[] BoundTool;

	internal readonly int[] Terminal;

	internal readonly int[] Yield;

	internal readonly int[] DirtyLimits;

	internal readonly HashSet<int>[] Reachable;

	private readonly CookingGraphAsset graph;

	private readonly CookingRuntimeSettings settings;

	internal CookingGraphIndex(CookingGraphAsset graph, CookingRuntimeSettings settings)
	{
	}

	internal int Uses(int ingredient)
	{
		return 0;
	}

	internal int Ingredient(IngredientNodeAsset asset)
	{
		return 0;
	}

	internal int QueueIngredient(QueueItemData item)
	{
		return 0;
	}

	internal Dish Resolve(DishOrderData dish)
	{
		return null;
	}

	internal IEnumerable<int> SelectionLeaves(int ingredient)
	{
		return null;
	}

	private HashSet<IngredientNodeAsset> Leaves(CookingNodeAsset node, HashSet<CookingNodeAsset> path)
	{
		return null;
	}

	private static T At<T>(List<T> table, int index) where T : CookingNodeAsset
	{
		return null;
	}

	private bool Contains(CookingNodeAsset root, CookingNodeAsset target, HashSet<CookingNodeAsset> seen = null)
	{
		return false;
	}

	private CookingAssemblySlot[] Collapse(CompositeNodeAsset composite, CookingAssemblySlot[] slots)
	{
		return null;
	}
}
