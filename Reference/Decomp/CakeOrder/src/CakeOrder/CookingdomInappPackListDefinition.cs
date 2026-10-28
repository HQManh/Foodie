using IapAdsSystem;

namespace CakeOrder;

public class CookingdomInappPackListDefinition : IInappPackListDefinition
{
	public const string StoreIdPrefix = "com.abi.foodiepop.";

	private static readonly CookingdomInappPackListDefinition Shared;

	private static readonly (InAppShopId sku, string storeName)[] StoreNameOverrides;

	public static float GetListPriceUsd(string sku)
	{
		return 0f;
	}

	public static int GetSaleTagPercent(string sku)
	{
		return 0;
	}

	public static string GetStoreProductId(string sku)
	{
		return null;
	}

	string IInappPackListDefinition.GetStoreProductId(string sku)
	{
		return null;
	}

	public static string ToSku(string id)
	{
		return null;
	}

	private float GetDefaultCostValue(InAppShopId shopID)
	{
		return 0f;
	}

	public string[] GetAllSKUs()
	{
		return null;
	}

	public PurchaseProductType GetProductType(string sku)
	{
		return (PurchaseProductType)0;
	}

	public int GetNumCanBuy(string sku)
	{
		return 0;
	}

	public float GetDefaultCostValue(string sku)
	{
		return 0f;
	}
}
