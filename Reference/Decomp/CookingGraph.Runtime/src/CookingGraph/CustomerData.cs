using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class CustomerData
{
	public int typeId;

	public int waitTime;

	public int weatherEffect;

	public List<DishOrderData> dishes;

	public bool hasStaffAmount;

	public int staffAmount;

	public bool hasCustomerIndex;

	public int customerIndex;

	public string customerId;
}
