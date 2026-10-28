using System;

namespace Datpt.Cook_Order
{
	[Serializable]
	public struct IngredientCuttedData
	{
		public EIngredienType type;

		public IngredientItem ingredientCutted;
	}
}
