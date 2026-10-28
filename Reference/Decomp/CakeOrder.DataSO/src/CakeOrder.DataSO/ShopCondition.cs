using System;
using UnityEngine;

namespace CakeOrder.DataSO;

[Serializable]
public class ShopCondition
{
	public ShopConditionType type;

	[Tooltip("Flips the answer. \"Has never bought any IAP\" is HasAnyIap with this ticked.")]
	public bool negate;

	[Tooltip("Level, number of days or number of purchases - depends on the type.")]
	public int value;

	[Tooltip("Second number. Only the two flash sale types use it, as the days of cooldown between windows.")]
	public int value2;

	[Tooltip("Packs this condition looks at. Leave empty to mean the pack that owns the condition.")]
	public string[] skus;
}
