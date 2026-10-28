using System;

namespace CakeOrder
{

[Serializable]
public class SingleCustomerOrderData
{
	public CustomerType customerType;

	public int waitTime;

	public bool applyWeatherEffect;

	public string[] data;
}
}
