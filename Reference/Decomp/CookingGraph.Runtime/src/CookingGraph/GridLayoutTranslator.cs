namespace CookingGraph;

public static class GridLayoutTranslator
{
	public static GridLayoutData Parse(string source)
	{
		return null;
	}

	public static GridLayoutData Parse(string source, CookingGraphAsset graph)
	{
		return null;
	}

	public static bool TryParse(string source, out GridLayoutData data, out CookingGraphFormatException error)
	{
		data = null;
		error = null;
		return false;
	}

	public static bool TryParse(string source, CookingGraphAsset graph, out GridLayoutData data, out CookingGraphFormatException error)
	{
		data = null;
		error = null;
		return false;
	}

	public static string Serialize(GridLayoutData data)
	{
		return null;
	}

	public static string Blank(CookingGraphAsset graph)
	{
		return null;
	}

	public static bool TryGetIngredientSlot(EffectData effect, CookingGraphAsset graph, out IngredientNodeAsset ingredient, out int amount)
	{
		ingredient = null;
		amount = default(int);
		return false;
	}

	private static void ResolveIngredientSlot(EffectData effect, CookingGraphAsset graph, string source, int cellIndex)
	{
	}
}
