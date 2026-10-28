namespace AnhPD.FoodOrder
{
	public static class TutorialGate
	{
		private static bool _active;

		private static TutorialTargetRef _allowed;

		private static IngredientConveyorItem _allowedItem;

		public static bool IsActive => _active;

		public static void Begin()
		{
			_active = true;
		}

		public static void AllowOnly(TutorialTargetRef target, IngredientConveyorItem neededItem = null)
		{
			_allowed = target;
			_allowedItem = neededItem;
		}

		public static void Free()
		{
			_active = false;
			_allowed = null;
			_allowedItem = null;
		}

		public static bool CanTapIngredient(IngredientConveyorItem item)
		{
			if (!_active)
			{
				return true;
			}
			TutorialTargetRef allowed = _allowed;
			if (allowed == null)
			{
				return false;
			}
			if (allowed.kind == TutorialTargetKind.NeededIngredient)
			{
				return item != null && item == _allowedItem;
			}
			if (allowed.kind == TutorialTargetKind.Ingredient)
			{
				return TutorialTargetResolver.MatchesIngredient(item, allowed.id);
			}
			return false;
		}

		public static bool CanTapOrder()
		{
			if (!_active)
			{
				return true;
			}
			if (_allowed == null)
			{
				return false;
			}
			return _allowed.kind == TutorialTargetKind.Customer || _allowed.kind == TutorialTargetKind.CustomerOrder;
		}
	}
}
