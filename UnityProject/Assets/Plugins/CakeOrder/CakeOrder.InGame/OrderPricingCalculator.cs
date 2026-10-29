using System;
using System.Collections.Generic;

namespace CakeOrder.InGame
{

[Serializable]
public class OrderPricingCalculator
{
	private RestaurantParams _restaurantParams;

	public void SetUp(RestaurantParams restaurantParams)
	{
		_restaurantParams = restaurantParams;
	}

	public OrderPricingOutput CalculatePrice(OrderPricingInput input)
	{
		OrderPricingOutput output = new OrderPricingOutput();
		if (input == null || input.spawnData == null || _restaurantParams == null)
		{
			return output;
		}
		output.cost = CalculateBasePrice(input);
		output.numCoin = output.cost >= 1 ? CalculateNumCoin(input) : 0;
		return output;
	}

	private int CalculateNumCoin(OrderPricingInput input)
	{
		return _restaurantParams.GetNumCoinsByEmotion(input.emotion);
	}

	private int CalculateBasePrice(OrderPricingInput input)
	{
		List<CustomerSingleOrderSpawnData> orders = input.spawnData.orders;
		if (orders == null || orders.Count == 0)
		{
			return 0;
		}
		int total = 0;
		foreach (CustomerSingleOrderSpawnData order in orders)
		{
			total += order.price;
		}
		return _restaurantParams.GetPricePercentageByEmotion(input.emotion) * total / 100;
	}
}
}
