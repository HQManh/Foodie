using System;
using CakeOrder.DataSO;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace CakeOrder.HeartSystem;

[Serializable]
public class UnlimitedHeartRewardItemInfo : IRewardItemInfo
{
	private const string LocMinutes = "time_minutes";

	private const string LocHoursMinutes = "time_hours_minutes";

	private const string LocHours = "time_hours";

	public const string RewardId = "unlimited_heart";

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

	public UnlimitedHeartRewardItemInfo(Sprite icon)
	{
	}
}
