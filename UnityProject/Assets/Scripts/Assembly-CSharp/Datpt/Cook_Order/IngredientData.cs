using System;

namespace Datpt.Cook_Order
{
	[Serializable]
	public struct IngredientData
	{
		public EIngredienType type;

		public IngredientItem ingredientItem;
	}
}
