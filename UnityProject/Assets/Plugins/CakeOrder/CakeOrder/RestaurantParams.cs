using System;
using CakeOrder.InGame;

namespace CakeOrder
{

[Serializable]
public class RestaurantParams
{
	public int profitPercentAdded;

	public int[] timePercentToEmotion;

	public int[] emotionToPricePercentage;

	public int[] emotionToNumCoins;

	public int GetPricePercentageByEmotion(CustomerEmotion emotion)
	{
		return 0;
	}

	public int GetNumCoinsByEmotion(CustomerEmotion emotion)
	{
		return 0;
	}
}
}
