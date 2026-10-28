namespace CookingGraph.Execution;

public readonly struct CookingUnit
{
	public long Id { get; }

	public int Ingredient { get; }

	public CookingPayloadKind Kind { get; }

	public int Quantity { get; }

	public CookingUnit(long id, int ingredient, CookingPayloadKind kind = CookingPayloadKind.Ingredient, int quantity = 1)
	{
		Id = 0L;
		Ingredient = 0;
		Kind = CookingPayloadKind.Ingredient;
		Quantity = 0;
	}
}
