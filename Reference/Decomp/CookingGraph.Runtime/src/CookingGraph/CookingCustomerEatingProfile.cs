using System.Collections.Generic;
using UnityEngine;

namespace CookingGraph;

[CreateAssetMenu(menuName = "Cooking Graph/Profiles/Customer Eating Profile", fileName = "CookingCustomerEatingTimes")]
public sealed class CookingCustomerEatingProfile : ScriptableObject
{
	public CookingCustomerEatingProfile parent;

	[Tooltip("Enable hasValue to divide every resolved eating time by this speed, including the per-customer rows below: 2 eats twice as fast. First enabled value in the profile chain wins; applied once. Takes effect on a new run.")]
	public OptionalFloat eatingSpeedMultiplier;

	[Tooltip("Customers with no matching row. The web tool's Normal default is 1 second.")]
	[Min(0f)]
	public float defaultSeconds;

	[Tooltip("Boss customers with no matching row. The web tool's Boss default is 3 seconds.")]
	[Min(0f)]
	public float bossSeconds;

	[Tooltip("Per-customer eating times. A shipper's web default is 2 seconds; give every customer whose animation differs its own row.")]
	public List<CustomerEatingTimeOverride> customers;

	private static CookingCustomerEatingProfile fallback;

	public static CookingCustomerEatingProfile Default => null;
}
