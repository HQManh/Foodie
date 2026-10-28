using System.Collections.Generic;
using _GAME.GameItem;

namespace _GAME.BaseGame;

public static class SOIAPConfig
{
	private static readonly Dictionary<IAPSku, IAPPackConfig> Packs;

	private static IAPPackConfig Pack(IAPSku sku, float priceUsd, params (RwItemType type, int value)[] rewards)
	{
		return null;
	}

	private static IAPPackConfig WithR1Items(this IAPPackConfig pack, params (RwItemType type, int value)[] rewards)
	{
		return null;
	}

	public static string ConvertSku(IAPSku sku)
	{
		return null;
	}

	public static IAPPackConfig GetPack(IAPSku sku)
	{
		return null;
	}
}
