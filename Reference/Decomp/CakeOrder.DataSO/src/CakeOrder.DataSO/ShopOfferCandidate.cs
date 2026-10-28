using System;
using UnityEngine;

namespace CakeOrder.DataSO;

[Serializable]
public class ShopOfferCandidate
{
	[Tooltip("Short SKU, e.g. revivepack2 - never the com.abi.foodiepop. store id.")]
	public string shopId;

	[Tooltip("Skipped entirely. Use this to park a pack whose rule the design has not settled yet, rather than deleting the row and losing the conditions already filled in.")]
	public bool disabled;

	[Tooltip("ALL of these must pass. Leave the list empty for a pack that always qualifies - every group wants one of those at the bottom as its fallback.")]
	public ShopCondition[] conditions;
}
