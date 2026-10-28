using System;

namespace CakeOrder.Shop
{

public class ShopPlayerFacts
{
	public const string KeyLevelAtLastIap = "shop.lvLastIap";

	public DateTime Now { get; }

	public int Level { get; }

	public double DaysSinceFirstOpen { get; }

	public int DaysOpened { get; }

	public bool HasAnyIap { get; }

	public int LevelAtLastIap { get; }

	public int GetPurchaseCount(string sku)
	{
		return 0;
	}

	public DateTime GetLastBuyTime(string sku)
	{
		return default(DateTime);
	}

	private int ReadGlobalLevel()
	{
		return 0;
	}

	private bool ReadHasAnyIap()
	{
		return false;
	}
}
}
