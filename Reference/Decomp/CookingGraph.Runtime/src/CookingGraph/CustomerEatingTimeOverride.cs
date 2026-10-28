using System;
using UnityEngine;

namespace CookingGraph;

[Serializable]
public sealed class CustomerEatingTimeOverride
{
	public bool enabled;

	[Tooltip("Customer catalog id, matched case-insensitively against CustomerData.customerId (for example \"pig_boss\").")]
	public string customerId;

	[Min(0f)]
	public float seconds;
}
