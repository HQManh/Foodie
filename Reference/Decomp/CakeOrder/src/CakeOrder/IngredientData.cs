using System;

namespace CakeOrder;

[Serializable]
public struct IngredientData
{
	public int id;

	public int amount;

	public int[] statuses;

	public int[] statusParams;

	public bool IsTool => false;

	public static bool IsToolId(int id)
	{
		return false;
	}

	public static IngredientSlotKind KindOf(int id)
	{
		return IngredientSlotKind.Ingredient;
	}
}
