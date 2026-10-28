using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class ConveyorChain
	{
		public readonly int Id;

		public readonly int Size;

		public readonly List<ConveyorSlot> Members;

		public bool IsReady => false;

		public ConveyorChain(int id, int size)
		{
		}
	}
}
