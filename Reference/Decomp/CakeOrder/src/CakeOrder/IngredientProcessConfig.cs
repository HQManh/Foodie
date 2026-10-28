using System;

namespace CakeOrder;

[Serializable]
public class IngredientProcessConfig
{
	public string id;

	public int[] toolChain;

	public int[] outputRecipePieceIndexes;

	public int[] outputRecipePieceNums;

	public IngredientProcessConfig Clone()
	{
		return null;
	}
}
