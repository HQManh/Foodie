using UnityEngine;

namespace AnhPD.FoodOrder
{
	public static class TutorialTargetResolver
	{
		public static Transform Resolve(TutorialTargetRef target, FCustomerLine preferredLine = null, IngredientConveyorItem neededItem = null)
		{
			if (target == null)
			{
				return null;
			}
			switch (target.kind)
			{
			case TutorialTargetKind.Ingredient:
				return ResolveIngredient(target.id);
			case TutorialTargetKind.Station:
				return ResolveStation(target.id);
			case TutorialTargetKind.Customer:
				return ResolveCustomer(false, preferredLine);
			case TutorialTargetKind.CustomerOrder:
				return ResolveCustomer(true, preferredLine);
			case TutorialTargetKind.Anchor:
				return TutorialAnchor.Find(target.id);
			case TutorialTargetKind.NeededIngredient:
				if (neededItem != null)
				{
					return neededItem.transform;
				}
				return null;
			default:
				return null;
			}
		}

		public static bool MatchesIngredient(IngredientConveyorItem item, string id)
		{
			if (item == null || string.IsNullOrEmpty(id))
			{
				return false;
			}
			foreach (IngredientState state in item.Items)
			{
				if (state != null && state.id == id)
				{
					return true;
				}
			}
			return false;
		}

		public static bool IsIngredientReady(string id)
		{
			// TODO(unrecovered): iterates the spawner's belt slots (spawner field +0x1a0, then its +0x20 collection) through interface dispatch; the belt collection and the flag at IngredientConveyorItem +0xd1 have no stub names.
			return false;
		}

		private static Transform ResolveIngredient(string id)
		{
			// TODO(unrecovered): walks the spawner belt collection (spawner field +0x1a0, then its +0x20 collection) and a per-item flag at +0xd1 that have no stub names; the front-row preference and the fallback to the belt transform depend on them.
			return null;
		}

		public static IngredientConveyorItem FindBeltItemBehindFront(string id)
		{
			// TODO(unrecovered): same belt collection walk as ResolveIngredient (spawner +0x1a0 / +0x20); the row ranking via RowRank uses the belt slot's row field at +0x24 which is not in stubs.
			return null;
		}

		private static int RowRank(int row)
		{
			return row != 0 ? row : int.MaxValue - 1;
		}

		private static Transform ResolveCustomer(bool order, FCustomerLine preferredLine)
		{
			if (preferredLine != null && preferredLine.isShowingCustomer)
			{
				return order ? preferredLine.orderRoot : preferredLine.targetPos;
			}
			MessyController messy = MessyController.Ins;
			if (messy == null)
			{
				return null;
			}
			FCustomerLineHandle lineHandle = messy.LineHandle;
			if (lineHandle == null)
			{
				return null;
			}
			return order ? lineHandle.GetActiveOrderTransform() : lineHandle.GetActiveCustomerTransform();
		}

		private static Transform ResolveStation(string id)
		{
			MessyController messy = MessyController.Ins;
			if (messy == null || string.IsNullOrEmpty(id))
			{
				return null;
			}
			var stations = messy.GetCookingStations();
			if (stations == null)
			{
				return null;
			}
			foreach (CookingStation station in stations)
			{
				if (station == null)
				{
					continue;
				}
				if (station.Id == id || station.alternativeStringId == id)
				{
					// The pseudocode prefers a station-side override transform (field +0x20) and falls back to the station transform; that override field has no stub name, so the station transform is used.
					return station.transform;
				}
			}
			return null;
		}
	}
}
