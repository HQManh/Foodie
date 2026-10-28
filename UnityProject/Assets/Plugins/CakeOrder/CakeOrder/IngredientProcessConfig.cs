using System;

namespace CakeOrder
{

[Serializable]
public class IngredientProcessConfig
{
	public string id;

	// Inferred from game code that reads ingredientId as the ingredient string id. Not verified.
	public string ingredientId;

	// Inferred from game code that reads resultNumbers as the produced counts. Not verified.
	public int[] resultNumbers;

	public int[] toolChain;

	public int[] outputRecipePieceIndexes;

	public int[] outputRecipePieceNums;

	public IngredientProcessConfig Clone()
	{
		return null;
	}
}
}
