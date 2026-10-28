using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class CookingStationSharedFirst : CookingStation
	{
		private HashSet<string> _shared;

		private readonly List<string> _moving;

		private static bool _choosing;

		private bool IsShared(string ingId)
		{
			return false;
		}

		private void BuildShared()
		{
		}

		protected int InteractingGroup()
		{
			return 0;
		}

		private bool HoldsOnlyShared(int groupIndex)
		{
			return false;
		}

		private static int FreeSlotOf(StationInteractGroup group, string ingId)
		{
			return 0;
		}

		private bool CanHoldMoved(StationInteractGroup target, int from)
		{
			return false;
		}

		private bool TryGetRegroupVector(string ingId, out InteractVector vector)
		{
			vector = default;
			return false;
		}

		public override InteractVector GetInteractVector(string ingId)
		{
			return default;
		}

		public override bool TryGetIntakeGroup(string ingId, out int groupIndex, out int freeSlots)
		{
			groupIndex = default;
			freeSlots = default;
			return false;
		}

		public override int CountFreeSlots(string ingId)
		{
			return 0;
		}

		public override void PutInIngredient(InteractVector vector)
		{
		}

		private void Regroup(int from, int to)
		{
		}
	}
}
