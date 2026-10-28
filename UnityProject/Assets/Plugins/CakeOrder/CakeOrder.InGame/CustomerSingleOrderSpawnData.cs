using System;

namespace CakeOrder.InGame
{

[Serializable]
public class CustomerSingleOrderSpawnData
{
	public string recipe;

	// Inferred alias for recipe, which the game code reads as the encoded order string.
	public string order => recipe;

	public int price;

	public int dishIndex;

	public bool isMystery;
}
}
