using System;
using UnityEngine;

namespace CakeOrder.DataSO;

[Serializable]
public class ShopOfferGroup
{
	[Tooltip("Name used by the shop and the popups to ask for this group, e.g. failoffer.")]
	public string groupId;

	[Tooltip("Ordered. The first one whose conditions all pass is shown; the rest stay hidden.")]
	public ShopOfferCandidate[] candidates;

	[Tooltip("Once this group has shown a pack, keep showing it even after the conditions stop passing. For offers gated on 'has never spent': buying an unrelated gem pack would otherwise snatch the starter pack away from a player who was already looking at it. A candidate that starts passing later still takes over, and the group retires for good once one of its packs is bought.")]
	public bool keepOnceShown;
}
