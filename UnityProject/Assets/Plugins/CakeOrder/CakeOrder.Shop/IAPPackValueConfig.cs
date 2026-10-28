using System;

namespace CakeOrder.Shop
{

[Serializable]
public class IAPPackValueConfig
{
	public string shopId;

	public string[] currencies;

	public int[] amounts;
}
}
