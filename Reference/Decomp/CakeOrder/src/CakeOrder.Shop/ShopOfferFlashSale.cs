using CakeOrder.SaveProfile;

namespace CakeOrder.Shop;

public class ShopOfferFlashSale
{
	private const string KeyPrefixWindowStart = "shop.flash.";

	private readonly ShopPlayerFacts _facts;

	public ShopOfferFlashSale(ShopPlayerFacts facts)
	{
	}

	public bool IsOn(string sku, int windowHours, int cooldownDays, bool canOpenWindow = true)
	{
		return false;
	}

	private bool TryOpenWindow(CookOrderSystemInfoDataAccess info, string key)
	{
		return false;
	}
}
