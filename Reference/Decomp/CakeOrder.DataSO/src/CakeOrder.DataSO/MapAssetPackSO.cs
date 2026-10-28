using UnityEngine;
using UnityEngine.AddressableAssets;

namespace CakeOrder.DataSO;

[CreateAssetMenu(fileName = "InGameAssetPack-", menuName = "CakeOrder/InGameAssetPackSO", order = 1)]
public class MapAssetPackSO : ScriptableObject
{
	[Header("Background Music")]
	[SerializeField]
	private AssetReference[] _assetHomeMusics;

	[SerializeField]
	private AssetReference[] _assetGameplayMusics;

	[SerializeField]
	private AssetReference[] _boosterBgPanelByDifficulty;

	public AssetReference GetRandomBoosterBgPanelByDifficulty(int difficulty)
	{
		return null;
	}

	public AssetReference GetRandomHomeMusic()
	{
		return null;
	}

	public AssetReference GetRandomGameplayMusic()
	{
		return null;
	}
}
