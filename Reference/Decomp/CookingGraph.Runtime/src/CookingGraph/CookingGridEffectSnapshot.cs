namespace CookingGraph;

public readonly struct CookingGridEffectSnapshot
{
	public CookingGridEffectKind Kind { get; }

	public int? IngredientId { get; }

	public int? ColorId { get; }

	public int RequiredAmount { get; }

	public int RemainingAmount { get; }

	public bool IsSatisfied { get; }

	internal CookingGridEffectSnapshot(CookingGridEffectKind kind, int? ingredient, int? color, int required, int remaining, bool satisfied)
	{
		Kind = CookingGridEffectKind.Normal;
		IngredientId = null;
		ColorId = null;
		RequiredAmount = 0;
		RemainingAmount = 0;
		IsSatisfied = false;
	}
}
