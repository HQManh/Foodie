using System;
using System.Collections.Generic;
using UnityEngine;

namespace CakeOrder.DataSO;

[CreateAssetMenu(fileName = "ShopCardCatalogSO", menuName = "ScriptableObjects/CakeOrder/ShopCardCatalogSO", order = 1)]
public class ShopCardCatalogSO : ScriptableObject
{
	[Serializable]
	public class Entry
	{
		[Tooltip("The IAP product id, exactly as it appears in the shop config.")]
		public string shopId;

		[Tooltip("Card prefab for this pack. Must carry a UIShopItemPack component at its root.")]
		public GameObject cardPrefab;
	}

	[SerializeField]
	private Entry[] _entries;

	[Tooltip("Used for any id not listed above. Leave empty to instead skip unlisted ids entirely.")]
	[SerializeField]
	private GameObject _defaultCardPrefab;

	private Dictionary<string, GameObject> _dict;

	private void BuildDictionary()
	{
	}

	public bool TryGetCardPrefab(string shopId, out GameObject cardPrefab)
	{
		cardPrefab = null;
		return false;
	}
}
