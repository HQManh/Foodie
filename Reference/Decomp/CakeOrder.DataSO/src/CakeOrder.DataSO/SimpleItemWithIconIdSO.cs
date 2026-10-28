using UnityEngine;
using UnityEngine.AddressableAssets;

namespace CakeOrder.DataSO;

public class SimpleItemWithIconIdSO : ScriptableObjectWithId, IRewardItemInfo
{
	public Sprite icon;

	private const string LocNewBadge = "badge_new";

	public Sprite Icon => null;

	public AssetReference AssetIcon => null;

	public string GetRewardText(int amount)
	{
		return null;
	}

	public static SimpleItemWithIconIdSO CreateWithData(string id, Sprite icon, string name = null, string description = null)
	{
		return null;
	}
}
