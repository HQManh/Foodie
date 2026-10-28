using CakeOrder;

namespace AnhPD.FoodOrder
{
	public class ConveyorCleanerItem : IngredientConveyorItem
	{
		public override IngredientSlotKind Kind => IngredientSlotKind.Ingredient;

		public override bool NeedsGridRoom => false;

		public override bool CanRelease()
		{
			return false;
		}

		public override bool ReleaseSelf()
		{
			return false;
		}
	}
}
