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
		int i = (int)emotion;
		return i < emotionToPricePercentage.Length ? emotionToPricePercentage[i] : 0;
	}

	public int GetNumCoinsByEmotion(CustomerEmotion emotion)
	{
		int i = (int)emotion;
		return i < emotionToNumCoins.Length ? emotionToNumCoins[i] : 0;
	}
}
}
