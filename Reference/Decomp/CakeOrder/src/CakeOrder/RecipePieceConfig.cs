using System;

namespace CakeOrder;

[Serializable]
public class RecipePieceConfig
{
	public string id;

	public int[] requiredBases;

	public int limitInOrder;

	public int usageNum;

	public int price;

	public RecipePieceConfig Clone()
	{
		return null;
	}
}
