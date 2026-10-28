using System;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using TMPro;
using UnityEngine;

namespace CakeOrder.Shop
{

public class UIShopItemPack : UIElementWithAnim
{
	[Serializable]
	public class VisualConfigByCurrency
	{
		public string currencyId;

		public RectTransform section;

		public TextMeshProUGUI txtAmount;

		public string txtFormat;
	}

	[Serializable]
	public class VisualConfig
	{
		public VisualConfigByCurrency[] configByCurrencies;
	}

	[SerializeField]
	private string _shopID;

	[Header("Visual")]
	[SerializeField]
	protected TextMeshProUGUI _txtTitle;

	[SerializeField]
	protected ButtonBuyWithSale _btnBuy;

	[SerializeField]
	private string _goldId;

	[SerializeField]
	private VisualConfig _visualConfig;

	[Header("SetUp")]
	[SerializeField]
	private bool _isAutoSetUp;

	public string ShopID => null;

	public ItemPackGroup PackValue { get; private set; }

	private static string GetKeyLocalizeTitle(string shopId)
	{
		return null;
	}

	private void Start()
	{
	}

	public void SetShopId(string shopID)
	{
	}

	private void OnEnable()
	{
	}

	protected virtual void UpdateLocalize()
	{
	}
}
}
