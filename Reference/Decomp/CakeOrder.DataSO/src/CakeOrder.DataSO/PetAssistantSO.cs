using UnityEngine;
using UnityEngine.AddressableAssets;

namespace CakeOrder.DataSO;

[CreateAssetMenu(fileName = "PetAssistantSO", menuName = "ScriptableObjects/CakeOrder/PetAssistantSO", order = 1)]
public class PetAssistantSO : ScriptableObjectWithId, IRewardItemInfo
{
	[SerializeField]
	private PetAssistantPositionType[] _availablePositions;

	[SerializeField]
	private AssetReference _assetPrefabAvatar;

	[SerializeField]
	private Gradient _bgGradient;

	[SerializeField]
	private int _price;

	private const string LocNewBadge = "badge_new";

	public PetAssistantPositionType[] AvailablePositions => null;

	public AssetReference AssetPrefabAvatar => null;

	public Gradient BgGradient => null;

	public int Price => 0;

	public Sprite Icon => null;

	public AssetReference AssetIcon => null;

	public string GetRewardText(int amount)
	{
		return null;
	}
}
