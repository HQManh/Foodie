using System;

namespace CakeOrder.InGame;

[Serializable]
public class OrderPricingCalculator
{
	private RestaurantParams _restaurantParams;

	public void SetUp(RestaurantParams restaurantParams)
	{
	}

	public OrderPricingOutput CalculatePrice(OrderPricingInput input)
	{
		return null;
	}

	private int CalculateNumCoin(OrderPricingInput input)
	{
		return 0;
	}

	private int CalculateBasePrice(OrderPricingInput input)
	{
		return 0;
	}
}
