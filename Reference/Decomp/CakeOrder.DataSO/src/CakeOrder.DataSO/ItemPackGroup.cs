using System;
using System.Collections.Generic;

namespace CakeOrder.DataSO;

[Serializable]
public class ItemPackGroup
{
	public static readonly ItemPackGroup Empty;

	public List<ItemPack> itemPacks { get; private set; }

	public ItemPackGroup(List<ItemPack> itemPacks)
	{
	}
}
