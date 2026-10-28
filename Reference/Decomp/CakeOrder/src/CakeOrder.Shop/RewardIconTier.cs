using System;
using UnityEngine;

namespace CakeOrder.Shop;

[Serializable]
public class RewardIconTier
{
	[Tooltip("Empty = applies to every pack, picked by amount. Set it to pin one pack's art; that beats any amount tier. Needed because the bundle cards deliberately draw art bigger than their amount - bundle_4 grants 12000 but shows the 60000 pile - while the gold pack of the same 12000 must keep the 12000 pile.")]
	public string shopId;

	public string currencyId;

	[Tooltip("Applies from this amount upward, until the next tier of the same currency takes over.")]
	public int minAmount;

	public Sprite icon;
}
