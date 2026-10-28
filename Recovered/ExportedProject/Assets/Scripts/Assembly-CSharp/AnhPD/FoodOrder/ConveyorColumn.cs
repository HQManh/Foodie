using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class ConveyorColumn
	{
		public readonly ConveyorIngredientSource Source;

		public float CenterX;

		private ConveyorBundle _peeked;

		public bool HasPendingSpawn => false;

		public void AppendPending(List<string> result)
		{
		}

		public void AppendPendingBundles(List<ConveyorBundle> result)
		{
		}

		public ConveyorBundle Peek(int randomSlotSize)
		{
			return null;
		}

		public ConveyorBundle Take()
		{
			return null;
		}

		public void PushFront(ConveyorBundle bundle)
		{
		}

		public void FlushPeeked()
		{
		}

		public bool DemoteNextWidth(int randomSlotSize)
		{
			return false;
		}

		public void SetCenterX(float x)
		{
		}
	}
}
