using CakeOrder.DataSO;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace CakeOrder.Shop
{

public class RemoveAdsRewardItemInfo : IRewardItemInfo
{
	public string Id => null;

	public string NameLocalizeKey => null;

	public string DescLocalizeKey => null;

	public string LocalizedName => null;

	public string LocalizedDesc => null;

	public Sprite Icon { get; private set; }

	public AssetReference AssetIcon => null;

	public string GetRewardText(int amount)
	{
		return null;
	}

	public RemoveAdsRewardItemInfo(Sprite icon)
	{
	}
}
}
