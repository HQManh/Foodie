using System.Collections.Generic;

namespace CakeOrder.Home
{

public static class MapToolRecipeInfoProvider
{
	public static IReadOnlyList<string> GetRecipeIds(string mapId)
	{
		return null;
	}

	public static string GetTitle(string mapId, MapToolRecipeEntry entry)
	{
		return null;
	}

	public static string GetDescription(string mapId, MapToolRecipeEntry entry)
	{
		return null;
	}

	public static int GetDishServedCount(string mapId, MapToolRecipeEntry entry)
	{
		return 0;
	}

	public static bool IsUnlocked(string mapId, MapToolRecipeEntry entry)
	{
		return false;
	}
}
}
