using UnityEngine;

namespace CakeOrder.DataSO;

[CreateAssetMenu(fileName = "ShopOfferRules", menuName = "CakeOrder/Shop Offer Rules")]
public class ShopOfferRulesSO : ScriptableObject
{
	[SerializeField]
	private ShopOfferGroup[] _groups;

	public ShopOfferGroup[] Groups => null;

	public ShopOfferGroup FindGroup(string groupId)
	{
		return null;
	}

	public ShopOfferGroup FindGroupOfSku(string sku)
	{
		return null;
	}
}
