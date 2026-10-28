using System;
using System.Collections.Generic;

namespace CakeOrder.InGame;

[Serializable]
public class OrderPricingInput
{
	public CustomerSpawnData spawnData;

	public CustomerEmotion emotion;

	public Dictionary<string, int> ingredientCount;
}
