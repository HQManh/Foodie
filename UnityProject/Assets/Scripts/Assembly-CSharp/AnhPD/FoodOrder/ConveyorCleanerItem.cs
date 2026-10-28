using CakeOrder;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class ConveyorCleanerItem : IngredientConveyorItem
	{
		public override IngredientSlotKind Kind => IngredientSlotKind.Ingredient;

		public override bool NeedsGridRoom => false;

		public override bool CanRelease()
		{
			if ((bool)MessyController.Ins)
			{
				return MessyController.Ins.HasAnyDirtyPlate();
			}
			return false;
		}

		public override bool ReleaseSelf()
		{
			if ((bool)MessyController.Ins)
			{
				MessyController.Ins.SpawnDirtyPlateCleaner(base.transform.position);
			}
			return true;
		}
	}
}
