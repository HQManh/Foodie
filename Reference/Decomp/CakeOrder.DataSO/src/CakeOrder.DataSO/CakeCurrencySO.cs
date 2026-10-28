using UnityEngine;
using UnityEngine.AddressableAssets;

namespace CakeOrder.DataSO;

[CreateAssetMenu(fileName = "Currency_", menuName = "ScriptableObjects/CakeOrder/Currency", order = 1)]
public class CakeCurrencySO : ScriptableObjectWithId, IRewardItemInfo
{
	[SerializeField]
	private Sprite _icon;

	public Color colorNormal;

	public Color colorNotEnough;

	[Tooltip("How an amount of this reads as a reward, the same way the shop cards author txtFormat per slot. Currencies are bare counts - '50' coins - while items are counted with an x, 'x1' booster. Defaults to the x form, so an asset that never set it keeps its old text.")]
	[SerializeField]
	private string _rewardTextFormat;

	public Sprite Icon => null;

	public AssetReference AssetIcon => null;

	public string GetRewardText(int amount)
	{
		return null;
	}
}
