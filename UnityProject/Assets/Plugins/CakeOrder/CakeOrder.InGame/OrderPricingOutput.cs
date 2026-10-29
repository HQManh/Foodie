using System;

namespace CakeOrder.InGame
{

[Serializable]
public class OrderPricingOutput
{
	public int cost;

	public int numCoin;

	public void Accumulate(OrderPricingOutput other)
	{
		cost += other.cost;
		numCoin += other.numCoin;
	}
}
}
