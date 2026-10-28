namespace Datpt.Cook_Order.CreamOnBeach
{
	public class ConeCreamBaseShaped : IngredientCutted
	{
		private EIngredienType creamType;

		public void SetUp(EIngredienType eIngredienType)
		{
			creamType = eIngredienType;
		}

		public override void OnGenerateResultIngredient()
		{
			// TODO(unrecovered): spawns an IceCream through an unnamed instantiate helper and falls back to LevelControlCookOrder.GenerateNewIngredientCutted; the helper signatures are not in the stubs.
		}
	}
}
