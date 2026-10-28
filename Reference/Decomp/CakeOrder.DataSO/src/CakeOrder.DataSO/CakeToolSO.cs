using UnityEngine;
using UnityEngine.AddressableAssets;

namespace CakeOrder.DataSO;

[CreateAssetMenu(fileName = "Tool_", menuName = "ScriptableObjects/CakeOrder/Tool", order = 1)]
public class CakeToolSO : ScriptableObjectWithId, IRewardItemInfo
{
	[SerializeField]
	private Sprite _icon;

	private const string LocNewBadge = "badge_new";

	[SerializeField]
	private string[] _tags;

	public Sprite Icon => null;

	public AssetReference AssetIcon => null;

	public string[] Tags => null;

	public string GetRewardText(int amount)
	{
		return null;
	}
}
