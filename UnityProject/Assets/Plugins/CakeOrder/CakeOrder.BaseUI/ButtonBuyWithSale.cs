using CakeOrder.UI;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.BaseUI
{

public class ButtonBuyWithSale : UIElementWithAnim
{
	[SerializeField]
	private Button _buttonBuy;

	[SerializeField]
	private TextMeshProUGUI _txtBuyPrice;

	[SerializeField]
	private TextMeshProUGUI _txtBuyPriceOrigin;

	[Tooltip("The sale tag, e.g. \"-85%\". Nothing writes it any more: whatever is typed on the prefab is what ships. Its presence still decides whether this button counts as a sale button at all, so leaving it unassigned turns the sale decorations off.")]
	[SerializeField]
	private TextMeshProUGUI _txtSale;

	[SerializeField]
	private GameObject[] _objActiveOnSale;

	[SerializeField]
	private string _keyLocalizeNotAllowBuy;

	[Tooltip("Sale tag this button carries, from the design sheet (e.g. 85 for -85%). 0 = not a sale. Used whenever the card sets the button up without a sale of its own, which is every card today.")]
	[SerializeField]
	[Range(0f, 99f)]
	private int _salePercentage;

	private float _lastTimeClick;

	private const float CooldownClick = 1f;

	private string _shopIdOrigin;

	private string _shopIdMain;

	private int _fakeSalePercentage;

	public bool IsInSale => false;

	public bool IsAllowBuy { get; private set; }

	private void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	private void OnBuyPack(string shopId, RewardListData rewardList)
	{
	}

	public void SetUp(string shopId)
	{
	}

	public void SetUp(string shopId, int fakeSalePercentage)
	{
	}

	public void SetUp(string shopId, string shopIdOriginPrice)
	{
	}

	private void UpdateVisual()
	{
	}

	private string GetFakeOriginPriceText()
	{
		return null;
	}

	public void UpdateLocalize()
	{
	}
}
}
