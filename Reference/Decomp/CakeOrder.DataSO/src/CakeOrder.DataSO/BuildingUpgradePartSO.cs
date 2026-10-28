using UnityEngine;
using UnityEngine.AddressableAssets;

namespace CakeOrder.DataSO;

[CreateAssetMenu(fileName = "BuildingUpgradePartSO", menuName = "CakeOrder/BuildingUpgradePartSO", order = 1)]
public class BuildingUpgradePartSO : ScriptableObjectWithId
{
	public Sprite spriteThumb;

	public AssetReferenceSprite assetThumb;

	public UpgradeType upgradeType;

	[Tooltip("The CakeToolSO id this part upgrades. Buying it raises that tool's level by one (MapToolConfig says what each level does).")]
	public string toolId;

	public bool IsToolUpgrade => false;
}
