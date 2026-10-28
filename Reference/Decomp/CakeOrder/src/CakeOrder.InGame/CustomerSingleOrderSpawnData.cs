using System;

namespace CakeOrder.InGame;

[Serializable]
public class CustomerSingleOrderSpawnData
{
	public string recipe;

	public int price;

	public int dishIndex;

	public bool isMystery;
}
