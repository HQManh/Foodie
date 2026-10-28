using System;
using System.Collections.Generic;

namespace CakeOrder.Model;

[Serializable]
public class CustomerOrderData
{
	public List<IOrderRequirement> Requirements { get; private set; }

	public CustomerOrderData(params IOrderRequirement[] requirements)
	{
	}

	public bool IsMatchOrder(DishData dishData)
	{
		return false;
	}
}
