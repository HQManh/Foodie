using UnityEngine;
using UnityEngine.AddressableAssets;

namespace CakeOrder.DataSO;

[CreateAssetMenu(fileName = "CakeDayScenarioSO", menuName = "ScriptableObjects/CakeOrder/CakeDayScenarioSO", order = 1)]
public class CakeDayScenarioSO : ScriptableObjectWithId
{
	[SerializeField]
	private AssetReference _assetPrefabController;

	public AssetReference AssetPrefabController => null;
}
