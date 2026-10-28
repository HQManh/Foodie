using CakeOrder.BaseUI;
using CakeOrder.UI;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Shop
{

public class UIPopupRemoveAds : UICakePopup
{
	[Tooltip("The same card the shop shows, nested here so both places stay on one piece of art.")]
	[SerializeField]
	private UIShopItemRemoveAdsPackPermanent _itemPack;

	[Tooltip("Set this instead of the card when the popup carries its own art and its own buy button. Either one is enough; wiring both is allowed but pointless.")]
	[SerializeField]
	private ButtonBuyWithSale _btnBuy;

	[Tooltip("Deliberately left unassigned. Restore lives in Settings instead - one entry point for the whole app, iOS-only, the way DreamyRoom does it. Wire this only if a restore is ever wanted on this popup as well; the code below already handles either case.")]
	[SerializeField]
	private Button _btnRestore;

	[Tooltip("Group in the shop offer rules asset. The popup sells whichever pack that group is currently offering, so its price and sale tag match the card in the shop. Leave empty to always sell the full-price pack.")]
	[SerializeField]
	private string _offerGroupId;

	private string ResolveShopId()
	{
		return null;
	}

	public override void HideByBackButton()
	{
	}

	public override void SetUpOnCreate(SceneMainUI mainUI)
	{
	}

	private void OnClickRestore()
	{
	}

	private void OnBuyPack(string shopId, RewardListData rewardList)
	{
	}

	private void OnDestroy()
	{
	}
}
}
