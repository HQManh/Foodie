using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class ConveyorLockoutCheck
	{
		private readonly List<ConveyorSlot> _front;

		private readonly HashSet<ConveyorSlot> _live;

		public void Collect(ConveyorGrid grid, List<IngredientConveyorItem> locked)
		{
		}

		private bool CanThaw(ConveyorGrid grid, ConveyorSlot slot)
		{
			return false;
		}

		private bool CanGather(ConveyorGrid grid, ConveyorChain chain)
		{
			return false;
		}

		private bool IsColumnLive(ConveyorGrid grid, int col, ConveyorChain except)
		{
			return false;
		}

		private static void AddOnce(List<IngredientConveyorItem> list, IngredientConveyorItem item)
		{
		}
	}
}
