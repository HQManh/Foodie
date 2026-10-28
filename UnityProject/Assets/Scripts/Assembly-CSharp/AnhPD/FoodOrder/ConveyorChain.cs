using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class ConveyorChain
	{
		public readonly int Id;

		public readonly int Size;

		public readonly List<ConveyorSlot> Members = new List<ConveyorSlot>();

		public bool IsReady
		{
			get
			{
				if (Members.Count < Size)
				{
					return false;
				}
				foreach (ConveyorSlot member in Members)
				{
					if (member.Row != 0)
					{
						return false;
					}
				}
				return true;
			}
		}

		public ConveyorChain(int id, int size)
		{
			Id = id;
			Size = ((size < 2) ? 1 : size);
		}
	}
}
