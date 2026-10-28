using System;

namespace CakeOrder
{

[Serializable]
public struct IngredientData
{
	public int id;

	public int amount;

	public int[] statuses;

	public int[] statusParams;

	public bool IsTool => IsToolId(id);

	public static bool IsToolId(int id)
	{
		return id < 0 && System.Enum.IsDefined(typeof(IngredientSlotKind), id);
	}

	public static IngredientSlotKind KindOf(int id)
	{
		return IsToolId(id) ? (IngredientSlotKind)id : IngredientSlotKind.Ingredient;
	}
}
}
