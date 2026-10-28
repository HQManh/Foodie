using System;
using CakeOrder.DataSO;

namespace CakeOrder.Shop;

public class ShopOfferRules
{
	private readonly ShopOfferRulesSO _rules;

	private readonly ShopPlayerFacts _facts;

	private readonly ShopOfferFlashSale _flashSale;

	private bool _isGemShortage;

	private const string KeyShownPrefix = "shop.offerShown.";

	public ShopOfferRulesSO Rules => null;

	public ShopPlayerFacts Facts => null;

	public ShopOfferRules(ShopOfferRulesSO rules, ShopPlayerFacts facts)
	{
	}

	public string GetWinner(string groupId)
	{
		return null;
	}

	public void OpenGemShortageSales()
	{
	}

	private static bool HasGemShortageSale(ShopOfferGroup group)
	{
		return false;
	}

	private void RememberShown(ShopOfferGroup group, string sku)
	{
	}

	private string RecallShown(ShopOfferGroup group)
	{
		return null;
	}

	public bool IsVisible(string sku)
	{
		return false;
	}

	public bool Passes(ShopOfferCandidate candidate, out ShopCondition failedOn)
	{
		failedOn = null;
		return false;
	}

	public bool Check(ShopCondition condition, string selfSku)
	{
		return false;
	}

	private int TotalPurchases(string[] skus)
	{
		return 0;
	}

	private DateTime LatestPurchase(string[] skus)
	{
		return default(DateTime);
	}

	private bool IsWithinDays(DateTime lastBuy, int days)
	{
		return false;
	}
}
