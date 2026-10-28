using System;

namespace CakeOrder.Shop;

[Serializable]
public class RemoteConfigRemoveAds
{
	public int lvFirstShow;

	public int lvShowBtnNoAd;

	public int capShowOffer;

	public int showPermanentOnce;

	public bool IsShowOfferPermanentAdsOnce => false;
}
