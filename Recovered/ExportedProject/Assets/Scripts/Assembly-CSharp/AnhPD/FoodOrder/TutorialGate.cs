namespace AnhPD.FoodOrder
{
	public static class TutorialGate
	{
		private static bool _active;

		private static TutorialTargetRef _allowed;

		private static IngredientConveyorItem _allowedItem;

		public static bool IsActive => false;

		public static void Begin()
		{
		}

		public static void AllowOnly(TutorialTargetRef target, IngredientConveyorItem neededItem = null)
		{
		}

		public static void Free()
		{
		}

		public static bool CanTapIngredient(IngredientConveyorItem item)
		{
			return false;
		}

		public static bool CanTapOrder()
		{
			return false;
		}
	}
}
