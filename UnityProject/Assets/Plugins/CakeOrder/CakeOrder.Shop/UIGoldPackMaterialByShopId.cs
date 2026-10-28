using System;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Shop
{

[RequireComponent(typeof(UIShopItemGoldPack))]
public class UIGoldPackMaterialByShopId : MonoBehaviour
{
	[Serializable]
	public class Entry
	{
		public string shopId;

		[Tooltip("Material for the gem icon. Empty = keep the prefab's.")]
		public Material iconMaterial;

		[Tooltip("Material for the buy button. Empty = keep the prefab's.")]
		public Material buttonMaterial;
	}

	[SerializeField]
	private Image _imgIcon;

	[SerializeField]
	private Image _imgButton;

	[Tooltip("One row per gem pack. A pack with no row keeps the prefab's materials.")]
	[SerializeField]
	private Entry[] _entries;

	private UIShopItemGoldPack _card;

	private string _appliedShopId;

	private void Awake()
	{
	}

	private void Start()
	{
	}

	private void OnEnable()
	{
	}

	private void Apply()
	{
	}
}
}
