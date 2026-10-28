using System;
using System.Collections.Generic;

namespace CookingGraph;

public static class CustomerOrderGenerator
{
	private sealed class Slot
	{
		public bool fixedSlot;

		public readonly List<GroupNodeAsset> groupPath;

		public readonly List<IngredientNodeAsset> options;

		public readonly List<int> optionMaximums;

		public int maximum;

		public int minimum;

		public bool isBase;

		public CompositeProcessData process;
	}

	public static CustomerOrderData Generate(CookingGraphAsset graph, CustomerOrderGenerationOptions options, Func<double> random = null, Action<string> onWarning = null)
	{
		return null;
	}

	public static string GenerateString(CookingGraphAsset graph, CustomerOrderGenerationOptions options, Func<double> random = null, Action<string> onWarning = null)
	{
		return null;
	}

	private static int AutoDishCount(int target, int maxDishSlots)
	{
		return 0;
	}

	private static Dictionary<IngredientNodeAsset, float> BuildWeights(CookingGraphAsset graph, IEnumerable<IngredientGenerationWeight> values)
	{
		return null;
	}

	private static float WeightOf(IReadOnlyDictionary<IngredientNodeAsset, float> weights, IngredientNodeAsset ingredient)
	{
		return 0f;
	}

	private static IngredientNodeAsset WeightedPick(IEnumerable<IngredientNodeAsset> options, IReadOnlyDictionary<IngredientNodeAsset, float> weights, Func<double> random)
	{
		return null;
	}

	private static DishOrderData BuildDish(CookingGraphAsset graph, CompositeNodeAsset composite, IReadOnlyList<Slot> slots, int budget, IReadOnlyDictionary<IngredientNodeAsset, float> weights, Func<double> random, int maxDishSlots)
	{
		return null;
	}

	private static int CountOf(OrderMemberData root, IReadOnlyDictionary<string, OrderMemberData> containers, Slot slot, IngredientNodeAsset option)
	{
		return 0;
	}

	private static int Held(IReadOnlyDictionary<GroupNodeAsset, int> held, GroupNodeAsset group)
	{
		return 0;
	}

	private static int Capacity(Slot slot, int maximumDishSlots)
	{
		return 0;
	}

	private static int Optional(OptionalInt value)
	{
		return 0;
	}

	private static OrderMemberData Member(OrderMemberKind kind, int id, CookingNodeAsset asset)
	{
		return null;
	}

	private static List<Slot> SlotsOf(CookingGraphAsset graph, CompositeNodeAsset composite)
	{
		return null;
	}

	private static int RandomIndex(int count, Func<double> random)
	{
		return 0;
	}

	private static double NextUnit(Func<double> random)
	{
		return 0.0;
	}
}
