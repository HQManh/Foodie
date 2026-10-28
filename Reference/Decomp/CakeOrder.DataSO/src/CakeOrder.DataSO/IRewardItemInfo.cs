using UnityEngine;
using UnityEngine.AddressableAssets;

namespace CakeOrder.DataSO;

public interface IRewardItemInfo
{
	string Id { get; }

	string NameLocalizeKey { get; }

	string DescLocalizeKey { get; }

	string LocalizedName { get; }

	string LocalizedDesc { get; }

	Sprite Icon { get; }

	AssetReference AssetIcon { get; }

	string GetRewardText(int amount);
}
