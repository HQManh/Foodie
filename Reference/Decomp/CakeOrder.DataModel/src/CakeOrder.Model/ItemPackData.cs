using System;

namespace CakeOrder.Model;

[Serializable]
public class ItemPackData
{
	public string itemId;

	public int amount;

	public ItemPackData()
	{
	}

	public ItemPackData(string itemId)
	{
	}

	public ItemPackData(string itemId, int amount)
	{
	}
}
