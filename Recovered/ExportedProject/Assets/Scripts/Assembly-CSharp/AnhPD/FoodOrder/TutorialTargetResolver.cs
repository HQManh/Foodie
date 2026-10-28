using UnityEngine;

namespace AnhPD.FoodOrder
{
	public static class TutorialTargetResolver
	{
		public static Transform Resolve(TutorialTargetRef target, FCustomerLine preferredLine = null, IngredientConveyorItem neededItem = null)
		{
			return null;
		}

		public static bool MatchesIngredient(IngredientConveyorItem item, string id)
		{
			return false;
		}

		public static bool IsIngredientReady(string id)
		{
			return false;
		}

		private static Transform ResolveIngredient(string id)
		{
			return null;
		}

		public static IngredientConveyorItem FindBeltItemBehindFront(string id)
		{
			return null;
		}

		private static int RowRank(int row)
		{
			return 0;
		}

		private static Transform ResolveCustomer(bool order, FCustomerLine preferredLine)
		{
			return null;
		}

		private static Transform ResolveStation(string id)
		{
			return null;
		}
	}
}
