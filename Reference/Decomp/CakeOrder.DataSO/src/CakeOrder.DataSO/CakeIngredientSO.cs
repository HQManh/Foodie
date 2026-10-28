using UnityEngine;
using UnityEngine.AddressableAssets;

namespace CakeOrder.DataSO;

[CreateAssetMenu(fileName = "Ingredient_", menuName = "ScriptableObjects/CakeOrder/Ingredient", order = 1)]
public class CakeIngredientSO : ScriptableObjectWithId, IRewardItemInfo
{
	[SerializeField]
	private Sprite _icon;

	private const string LocNewBadge = "badge_new";

	public Sprite Icon => null;

	public AssetReference AssetIcon => null;

	public static CakeIngredientSO CreateWithData(string id, Sprite icon)
	{
		return null;
	}

	public string GetRewardText(int amount)
	{
		return null;
	}
}
