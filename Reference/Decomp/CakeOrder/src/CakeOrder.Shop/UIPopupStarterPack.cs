using CakeOrder.BaseUI;
using CakeOrder.UI;
using UnityEngine;

namespace CakeOrder.Shop;

public class UIPopupStarterPack : UICakePopup
{
	[Tooltip("Which pack this popup sells. Must be an id the shop already knows about, or the buy button comes up disabled because IsCanPurchasePack has nothing to answer with.")]
	[SerializeField]
	private string _shopId;

	[Tooltip("Group in the shop offer rules asset. When set, the popup sells whichever pack that group is currently offering and the id above is only the fallback - that is what keeps its price and sale tag equal to the card in the shop. Leave empty to always sell the id above.")]
	[SerializeField]
	private string _offerGroupId;

	[SerializeField]
	private ButtonBuyWithSale _btnBuy;

	[Header("Reward row")]
	[Tooltip("Same shape the shop cards use: one authored slot per currency, shown only when the pack actually grants it, with the amount written into txtAmount. Nothing is cloned at runtime, so every slot keeps exactly the art it was given.")]
	[SerializeField]
	private UIShopItemPack.VisualConfig _visualConfig;

	public string ShopId => null;

	public override void HideByBackButton()
	{
	}

	public override void SetUpOnCreate(SceneMainUI mainUI)
	{
	}

	private void OnBuyPack(string shopId, RewardListData rewardList)
	{
	}

	private void BuildRewardRow()
	{
	}

	private void OnDestroy()
	{
	}
}
