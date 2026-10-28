using System;

namespace CakeOrder.InGame;

[Serializable]
public class BoosterSaveMeConfig
{
	public string boosterId;

	public bool enable;

	public int lvUnlock;

	public int numFree;

	public int price;

	public int maxAds;

	public string[] dataKeys;

	public int[] dataValues;
}
