using System;
using CakeOrder.BaseUI;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Shop;

public class UIShopItemGoldPack : UIElementWithAnim
{
	[Serializable]
	public class FrameConfig
	{
		public string shopId;

		public Sprite icon;

		public float iconScale;
	}

	[Serializable]
	public class GeneralConfig
	{
		public FrameConfig[] frameConfigs;

		public AnimationCurve mappingValueToGlowAlpha;

		public int valueShowSparkling;

		public Vector2 maxIconSize;

		public FrameConfig GetFrameConfig(string shopId)
		{
			return null;
		}
	}

	private float _lastTimeClick;

	private const float CooldownClick = 1f;

	[SerializeField]
	private Image _imgIcon;

	[Tooltip("Glow behind the coin pile - the UI_Glow particle prefab. Toggled on or off, never faded: UIParticleSystem builds its vertex colours from the particles alone and ignores the Graphic's own colour, so tinting alpha here would silently do nothing.")]
	[SerializeField]
	private GameObject _objGlow;

	[SerializeField]
	private GameObject _sparkling;

	[SerializeField]
	private TMP_Text _txtGold;

	[SerializeField]
	private TextMeshProUGUI _txtGoldTmp;

	[SerializeField]
	private ButtonBuyWithSale _btnBuy;

	[Tooltip("The Best Seller ribbon. Shown only on packs the sale tag table marks as discounted.")]
	[SerializeField]
	private GameObject _objSaleTag;

	public string ShopID { get; private set; }

	public int GoldAmount { get; private set; }

	public void SetUp(GeneralConfig config, string shopID)
	{
	}
}
