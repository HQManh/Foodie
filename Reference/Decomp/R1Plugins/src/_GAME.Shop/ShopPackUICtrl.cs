using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.BaseGame;
using _GAME.GameUI;

namespace _GAME.Shop;

public class ShopPackUICtrl : MonoBehaviour
{
	public IAPSku sku;

	public GameObject objView;

	public List<RwItemUICtrl> listRwItemUI;

	public GameObject saleTag;

	public TextMeshProUGUI txtSaleTag;

	public TextMeshProUGUI txtPrice;

	public Button btnBuy;

	public IAPPackConfig packConfig;

	protected virtual void Awake()
	{
	}

	public virtual void Setup(IAPSku newSku = IAPSku.none)
	{
	}

	protected virtual void PurchasePackage()
	{
	}

	protected virtual void OnPurchaseSuccess()
	{
	}
}
