namespace CakeOrder.DataSO;

public enum ShopConditionType
{
	MinLevel,
	MinDaysSinceFirstOpen,
	MinDaysOpened,
	PassedInterAdsLevel,
	HasAnyIap,
	Owned,
	MinPurchaseCount,
	WithinDaysOfLastPurchase,
	MinLevelsSinceLastIap,
	FlashSaleActive,
	FlashSaleOnGemShortage
}
