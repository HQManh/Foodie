using System;
using System.Collections.Generic;

namespace CookingGraph;

public static class CompositeStructureTranslator
{
	internal sealed class Slot
	{
		public bool fixedSlot;

		public bool isBase;

		public int maximum;

		public readonly List<CookingNodeAsset> containerPath;

		public readonly List<IngredientNodeAsset> options;

		public readonly List<int> optionMaximums;

		public readonly List<CompositeNodeAsset> baseOf;

		public readonly List<CompositeNodeAsset> requiresBaseOf;
	}

	public static OrderMemberData Translate(CookingGraphAsset graph, IReadOnlyList<int> cookedIngredientIndices, Action<string> onWarning = null)
	{
		return null;
	}

	public static bool TryTranslate(CookingGraphAsset graph, IReadOnlyList<int> cookedIngredientIndices, out OrderMemberData composite, Action<string> onWarning = null)
	{
		composite = null;
		return false;
	}

	public static CompositeNodeAsset FindBestComposite(CookingGraphAsset graph, IReadOnlyList<int> cookedIngredientIndices, Action<string> onWarning = null)
	{
		return null;
	}

	private static List<IngredientNodeAsset> ResolveIngredients(CookingGraphAsset graph, IReadOnlyList<int> cookedIngredientIndices)
	{
		return null;
	}

	private static void FindMatches(CookingGraphAsset graph, CompositeNodeAsset composite, int compositeIndex, IReadOnlyList<IngredientNodeAsset> ingredients, ICollection<OrderMemberData> output, ISet<string> signatures, int limit)
	{
	}

	private static bool ValidSelection(CompositeNodeAsset rootComposite, IReadOnlyList<Slot> slots, IReadOnlyList<int> assignment, IReadOnlyList<int> slotCounts)
	{
		return false;
	}

	private static OrderMemberData BuildStructure(CookingGraphAsset graph, CompositeNodeAsset composite, int compositeIndex, IReadOnlyList<IngredientNodeAsset> ingredients, IReadOnlyList<Slot> slots, IReadOnlyList<int> assignment)
	{
		return null;
	}

	internal static List<Slot> SlotsOf(CookingGraphAsset graph, CompositeNodeAsset composite)
	{
		return null;
	}

	private static int Capacity(Slot slot, int suppliedCount)
	{
		return 0;
	}

	private static int Optional(OptionalInt value)
	{
		return 0;
	}

	private static OrderMemberData Member(OrderMemberKind kind, int index, CookingNodeAsset asset)
	{
		return null;
	}

	private static string Signature(OrderMemberData member)
	{
		return null;
	}

	private static void Warn(Action<string> onWarning, string message)
	{
	}
}
