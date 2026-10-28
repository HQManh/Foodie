using System;

namespace CakeOrder.DataSO;

[Serializable]
public class ItemPack
{
	public ScriptableObjectWithId itemSO { get; private set; }

	public int amount { get; private set; }

	public ItemPack(ScriptableObjectWithId itemSO, int amount)
	{
	}
}
