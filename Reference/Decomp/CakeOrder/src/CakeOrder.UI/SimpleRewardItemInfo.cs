using CakeOrder.DataSO;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace CakeOrder.UI;

public class SimpleRewardItemInfo : IRewardItemInfo
{
	private readonly string _name;

	private readonly string _desc;

	private readonly string _locTable;

	[SerializeField]
	private string _rewardTextFormat;

	public string Id { get; private set; }

	public Sprite Icon { get; private set; }

	public AssetReference AssetIcon { get; private set; }

	public string NameLocalizeKey { get; private set; }

	public string DescLocalizeKey { get; private set; }

	public string LocalizedName => null;

	public string LocalizedDesc => null;

	public string GetRewardText(int amount)
	{
		return null;
	}

	public SimpleRewardItemInfo(string id, string name, string description, Sprite icon, AssetReference assetIcon, string rewardTextFormat = "{0}", string locTable = null, string locId = null)
	{
	}
}
